#pragma once
class Episode{
private:
	int viewerNumber;
	double viewSum;
	double viewMax;
public:
	void addView(double);
	double getMaxScore()const;
	double getAverageScore()const;
	int getViewerCount()const;
	Episode(): viewerNumber(0),viewSum(0), viewMax(0) {

	}
	Episode(int one, double two, double three) : viewerNumber(one), viewSum(two), viewMax(three) {}
};



double generateRandomScore();

void Episode::addView(double n) {
	viewerNumber++;
	n = generateRandomScore();
	viewSum += n;
	if (n > viewMax)
		viewMax = n;

}

double generateRandomScore() {
	return (double)rand() / RAND_MAX * 10.0;
}

double Episode::getMaxScore()const {
	return viewMax;
}
double Episode::getAverageScore() const{
	return (double)viewSum / viewerNumber;
}
int Episode::getViewerCount()const {
	return viewerNumber;
}