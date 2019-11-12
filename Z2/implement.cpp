#include "Description.h"
//
//Episode::Episode() : viewerNumber(0), viewSum(0), viewMax(0) {}
//
//Episode::Episode(int one, double two, double three) : viewerNumber(one), viewSum(two), viewMax(three) {}
//
//Episode::Episode(int one, double two, double three, Description four) :
//	viewerNumber(one), viewSum(two), viewMax(three), opis(four) {}
//
//Episode::~Episode() {
//
//}
//
//
//void Episode::addView(double n) {
//	viewerNumber++;
//	n = generateRandomScore();
//	viewSum += n;
//	if (n > viewMax)
//		viewMax = n;
//
//}
//Description Episode::getDescription()const {
//	return opis;
//}
//
//double Episode::getMaxScore()const {
//	return viewMax;
//}
//double Episode::getAverageScore() const {
//	return (double)viewSum / viewerNumber;
//}
//int Episode::getViewerCount()const {
//	return viewerNumber;
//}
//
//void Episode::setViewerNumber(int n){
//	viewerNumber = n;
//}
//
//void Episode::setViewSum(double n) {
//	viewSum = n;
//}
//
//void Episode::setViewMax(double n) {
//	viewMax = n;
//}
//
//void Episode::setOpis(Description n) {
//	opis = n;
//}
//void Episode::setAverageScore(double n) {
//	averageScore = n;
//}
//
//
//Description::Description(int a, double b, std::string c):brojEpizode(a),trajanje(b),ime(c){}
//
//Description::Description(){}
//
//Description::~Description() {
//
//}
//
//
//int Description::getBrojepizode()const {
//	return brojEpizode;
//}
//
//double Description::getTrajanje()const {
//	return trajanje;
//}
//
//std::string Description::getIme()const {
//	return ime;
//}
//
//void Description::setBrojepizode(int a) {
//	brojEpizode = a;
//}
//
//
//void Description::setTrajanje(double a) {
//	trajanje = a;
//}
//
//
//void Description::setIme(std::string a) {
//	ime = a;
//}
//
//
//bool operator<(const Episode& ref1, const  Episode& ref2) {
//	return (90 - ref1.getDescription().getIme().at(0) < 90 - ref2.getDescription().getIme().at(0));
//}
//
//std::ostream& operator<< (std::ostream& izlaz, Description& ref)
//{
//	izlaz << ref.brojEpizode << "," << ref.trajanje << "," << ref.ime<< std::endl;
//	return izlaz;
//}
//
//std::ostream& operator<< (std::ostream& izlaz, Episode& ref){
//	izlaz << ref.viewMax << "," << ref.viewerNumber << "," << ref.averageScore << "," <<
//		ref.opis.getBrojepizode() << "," << ref.opis.getTrajanje() << "," << ref.opis.getIme() << std::endl;
//	return izlaz;
//}
//
//std::istream& operator>> (std::istream& ulaz, Episode& ref){
//	ulaz >> ref.viewMax >> ref.viewerNumber >> ref.averageScore;
//		//>> ref.opis.getBrojepizode() >> ref.opis.getTrajanje() >> ref.opis.getIme();
//	return ulaz;
//}
//
//void print(Episode** episode, int n) {
//	for (int i = 0; i < n; i++) {
//		std::cout << *episode[i] << std::endl;
//	}
//}
//void sort(Episode** episode, int n) {
//	int i, j;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - i - 1; j++)
//			if (*episode[j] < *episode[j + 1])
//				swap(*episode[j], *episode[j + 1]);
//}
//void swap(Episode& xp, Episode& yp){
//	Episode temp = xp;
//	xp = yp;
//	yp = temp;
//}
//
//void persistToFile(std::string ime, Episode** episodes, const int count) {
//	std::ofstream izlaz(ime);
//	for (int i = 0; i < count; i++) {
//		izlaz << *episodes[i] << std::endl;
//	}
//}
//
//double generateRandomScore() {
//	return (double)rand() / RAND_MAX * 10.0;
//}

//class Description {
//	int brojEpizode;
//	double trajanje;
//	std::string ime;
//	friend std::istream& operator>>(std::istream&, Description&);
//	friend std::ostream& operator<< (std::ostream&, Description&);
//public:
//	Description();
//	Description(int, double, std::string);
//	~Description();
//	int getBrojepizode()const;
//	double getTrajanje()const;
//	std::string getIme()const;
//	void setBrojepizode(int);
//	void setTrajanje(double);
//	void setIme(std::string);
//};
//
//class Episode {
//private:
//	int viewerNumber;
//	double viewSum;
//	double viewMax;
//	double averageScore;
//	Description opis;
//	friend std::ostream& operator<< (std::ostream&, Episode&);
//	friend std::ostream& operator<< (std::ostream&, Description&);
//	friend std::istream& operator>> (std::istream&, Episode&);
//
//	friend void sort(Episode**, int);
//	friend bool operator<(const Episode&, const Episode&);
//public:
//	void addView(double);
//	double getMaxScore()const;
//	double getAverageScore()const;
//	int getViewerCount()const;
//	double getViewSum()const;
//	Description getDescription()const;
//	void setViewerNumber(int);
//	void setViewSum(double);
//	void setViewMax(double);
//	void setOpis(Description);
//	void setAverageScore(double);
//	Episode();
//	Episode(int, double, double);
//	Episode(int, double, double, Description);
//	~Episode();
//};
//
//double generateRandomScore();
//std::ostream& operator<< (std::ostream&, Description&);
//std::ostream& operator<< (std::ostream&, Episode&);
//std::istream& operator>> (std::istream&, Episode&);
//std::istream& operator>>(std::istream&, Description&);
//void swap(Episode&, Episode&);
//void print(Episode**, int);
//void sort(Episode**, int);
//bool operator<(const Episode&, const Episode&);
//void persistToFile(std::string ime, Episode** episodes, const int count);



//Baca neke errore kad odvojim implementaciju u novi file

Episode::Episode() : viewerNumber(0), viewSum(0), viewMax(0) {}

Episode::Episode(int one, double two, double three) : viewerNumber(one), viewSum(two), viewMax(three) {}

Episode::Episode(int one, double two, double three, Description four) :
	viewerNumber(one), viewSum(two), viewMax(three), opis(four) {}

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
	return (double)viewSum / viewerNumber;
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


Description::Description(int a, double b, std::string c) :brojEpizode(a), trajanje(b), ime(c) {}

Description::Description() {}

Description::~Description() {

}


int Description::getBrojepizode()const {
	return brojEpizode;
}

double Description::getTrajanje()const {
	return trajanje;
}

std::string Description::getIme()const {
	return ime;
}

void Description::setBrojepizode(int a) {
	brojEpizode = a;
}


void Description::setTrajanje(double a) {
	trajanje = a;
}


void Description::setIme(std::string a) {
	ime = a;
}


bool operator<(const Episode& ref1, const  Episode& ref2) {
	return (ref1.opis.getIme().at(0) < (ref2.opis.getIme().at(0)));
}

std::ostream& operator<< (std::ostream& izlaz, Description& ref)
{
	izlaz << ref.brojEpizode << "," << ref.trajanje << "," << ref.ime;
	return izlaz;
}

std::ostream& operator<< (std::ostream& izlaz, Episode& ref) {
	izlaz << ref.getViewerCount() << "," << ref.getViewSum() << "," << ref.getMaxScore() << "," <<
		ref.opis.getBrojepizode() << "," << ref.opis.getTrajanje() << "," << ref.opis.getIme();
	return izlaz;
}

std::istream& operator>>(std::istream& ulaz, Description& ref) {
	ulaz >> ref.brojEpizode >> ref.trajanje >> ref.ime;
	return ulaz;
}

std::istream& operator>>(std::istream& ulaz, Episode& ref) {
	ulaz >> ref.viewMax >> ref.viewerNumber >> ref.averageScore >>
		ref.opis;
	return ulaz;
}

void print(Episode** episode, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << *episode[i] << std::endl;
	}
}
void sort(Episode** episode, int n) {
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (*episode[j + 1] < *episode[j])
				swap(*episode[j], *episode[j + 1]);
}
void swap(Episode& xp, Episode& yp) {
	Episode temp = xp;
	xp = yp;
	yp = temp;
}

void persistToFile(std::string ime, Episode** epizode, const int count) {
	std::ofstream izlaz(ime);
	for (int i = 0; i < count; i++) {
		izlaz << *epizode[i] << std::endl;
	}
}

double generateRandomScore() {
	return (double)rand() / RAND_MAX * 10.0;
}