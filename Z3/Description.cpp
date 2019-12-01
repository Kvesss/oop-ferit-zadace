#include "functions.h"


Description::Description(int a, double b, std::string c) :episodeNumber(a), length(b), name(c) {}

Description::Description(): episodeNumber(0), length(0), name("JohnDoe") {}

Description::~Description() {

}


int Description::getEpisodeNumber()const {
	return episodeNumber;
}

double Description::getLength()const {
	return length;
}

std::string Description::getName()const {
	return name;
}

void Description::setEpisodeNumber(int a) {
	episodeNumber = a;
}


void Description::setLength(double a) {
	length = a;
}


void Description::setName(std::string a) {
	name = a;
}

bool operator==(const Description& des1, const Description& des2) {
	return(des1.getEpisodeNumber() == des2.getEpisodeNumber() &&
		des1.getLength() == des2.getLength() && des1.getName() == des2.getName());
}


std::ostream& operator<< (std::ostream& output, const Description& ref) {
	output << ref.episodeNumber << "," << ref.length << "," << ref.name;
	return output;
}



std::istream& operator>>(std::istream& input, Description& ref) {
	char a, b;
	input >> ref.episodeNumber >> a >> ref.length >> b;
	std::getline(input, ref.name);
	return input;
}

Description& Description::operator=(const Description& ref) {
	if (&ref == this)
		return *this;
	this->episodeNumber = ref.episodeNumber;
	this->length = ref.length;
	this->name = ref.name;
	return *this;
}
