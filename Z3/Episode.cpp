#include "functions.h"




Episode::Episode() : viewerNumber(0), viewSum(0), viewMax(0) {}

Episode::Episode(int one, double two, double three) : viewerNumber(one), viewSum(two), viewMax(three) {}

Episode::Episode(int one, double two, double three, Description four) :
	viewMax (one), viewSum(two), averageScore(three), opis(four) {}

Episode::~Episode() {

}


void Episode::addView(double n) {
	viewerNumber++;
	n = generateRandomScore();
	viewSum += n;
	if (n > viewMax)
		viewMax = n;

}
Description Episode::getDescription()const {
	return opis;
}

double Episode::getMaxScore()const {
	return viewMax;
}
double Episode::getAverageScore() const {
	
	//return (double)viewSum / viewerNumber;
	return averageScore;
}
int Episode::getViewerCount()const {
	return viewerNumber;
}
double Episode::getViewSum()const {
	return viewSum;
}

void Episode::setViewerNumber(int n) {
	viewerNumber = n;
}

void Episode::setViewSum(double n) {
	viewSum = n;
}

void Episode::setViewMax(double n) {
	viewMax = n;
}

void Episode::setOpis(Description n) {
	opis = n;
}
void Episode::setAverageScore(double n) {
	averageScore = n;
}
