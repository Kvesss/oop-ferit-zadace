#include "functions.h"




Episode::Episode() : viewerNumber(0), viewSum(0), viewMax(0) {}

Episode::Episode(int one, double two, double three) : viewerNumber(one), viewSum(two), viewMax(three) {}

Episode::Episode(int one, double two, double three, Description four) :
	viewMax (one), viewSum(two), averageScore(three), description(four) {}

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
	return description;
}

double Episode::getMaxScore()const {
	return viewMax;
}
double Episode::getAverageScore() const {
	
	return (double)viewSum / viewerNumber;
	//return averageScore;
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

void Episode::setDescription(Description n) {
	description = n;
}
void Episode::setAverageScore(double n) {
	averageScore = n;
}


bool operator ==(const Episode& ep1, const Episode& ep2) {
	return(ep1.getViewerCount() == ep2.getViewerCount() && ep1.getViewSum() == ep2.getViewSum()
		&& ep1.getMaxScore() == ep2.getMaxScore() && ep1.getAverageScore() == ep2.getAverageScore()
		&& ep1.getDescription() == ep2.getDescription());
}

bool operator<(const Episode& ref1, const  Episode& ref2) {
	for (unsigned int i = 0; i < ref1.description.getName().length(); i++) { //warning C4018: '<': signed/unsigned mismatch // std::size_t 
		if (ref1.description.getName().at(i) < (ref2.description.getName().at(i)))	//Veæa slova imaju manju ASCII vrijednost
			return true;
		else if (ref1.description.getName().at(i) > (ref2.description.getName().at(i)))
			return false;
	}
	return false;
}

std::ostream& operator<< (std::ostream& output,const Episode& ref) {
	output << ref.getViewerCount() << "," << ref.getViewSum() << "," << ref.getMaxScore() << "," <<
		ref.description.getEpisodeNumber() << "," << ref.description.getLength() << "," << ref.description.getName();
	return output;
}

std::istream& operator>>(std::istream& input, Episode& ref) {
	char a, b, c;
	input >> ref.viewerNumber >> a >> ref.viewSum >> b >> ref.viewMax >> c >> ref.description;
	return input;
}

void sort(Episode** episode, const int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (*episode[j + 1] < *episode[j]) {
				swap(*episode[j], *episode[j + 1]);
			}
		}
	}
}

Episode& Episode::operator=(const Episode& ref) {
	if (&ref == this)
		return *this;
	this->viewerNumber = ref.viewerNumber;
	this->viewSum = ref.viewSum;
	this->viewMax = ref.viewMax;
	this->averageScore = ref.averageScore;
	this->description = ref.description;
	return *this;
}
