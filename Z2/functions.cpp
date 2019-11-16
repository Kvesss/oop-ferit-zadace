#include "functions.h"



bool operator<(const Episode& ref1, const  Episode& ref2) {
	for (unsigned int i = 0; i < ref1.opis.getIme().length(); i++) { //warning C4018: '<': signed/unsigned mismatch // std::size_t 
		if (ref1.opis.getIme().at(i) < (ref2.opis.getIme().at(i)))	//Veæa slova imaju manju ASCII vrijednost
			return true;
		else if (ref1.opis.getIme().at(i) > (ref2.opis.getIme().at(i)))
			return false;
	}
	return false;
}

std::ostream& operator<< (std::ostream& izlaz, Description& ref){
	izlaz << ref.brojEpizode << "," << ref.trajanje << "," << ref.ime;
	return izlaz;
}

std::ostream& operator<< (std::ostream& izlaz, Episode& ref) {
	izlaz << ref.getMaxScore() << "," << ref.getViewSum() << "," << ref.getAverageScore() << "," <<
		ref.opis.getBrojepizode() << "," << ref.opis.getTrajanje() << "," << ref.opis.getIme();
	return izlaz;
}

std::istream& operator>>(std::istream& ulaz, Description& ref) {
	char a, b;
	ulaz >> ref.brojEpizode >> a >> ref.trajanje >> b;
	std::getline(ulaz, ref.ime);
	return ulaz;
}

std::istream& operator>>(std::istream& ulaz, Episode& ref) {
	char a, b, c;
	ulaz >> ref.viewMax >> a >> ref.viewSum >> b >> ref.averageScore >> c >> ref.opis;
	return ulaz;
}

void print( Episode** episode, const int n) {
	for (int i = 0; i < n; i++) {
		std::cout << *episode[i] << std::endl;
	}
}
void sort(Episode** episode,const int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (*episode[j + 1] < *episode[j]) {
				swap(*episode[j], *episode[j + 1]);
			}
		}
	}
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
	izlaz.close();
}

double generateRandomScore() {
	return (double)(rand() / RAND_MAX) * 10.0;
}