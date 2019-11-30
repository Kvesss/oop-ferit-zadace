#include "functions.h"


Description::Description(int a, double b, std::string c) :brojEpizode(a), trajanje(b), ime(c) {}

Description::Description():brojEpizode(0),trajanje(0),ime("JohnDoe") {}

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