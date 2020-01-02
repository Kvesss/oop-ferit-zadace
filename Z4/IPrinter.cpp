#include "functions.h"

void ConsolePrinter::print(Season season) {
	for (int i = 0; i < season.getMCount(); i++) {
		std::cout << season.getEpisodes().at(i) << std::endl;
	}
}

FilePrinter::FilePrinter(std::string filename) :name(filename) {}

void FilePrinter::print(Season season) {
	std::ofstream input(name, std::ios_base::app);
	for (int i = 0; i < season.getMCount(); i++) {
		input << season.getEpisodes().at(i) << std::endl;
	}
}