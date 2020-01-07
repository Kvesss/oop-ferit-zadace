#include "functions.h"

void ConsolePrinter::print(Season season) {
	std::cout << "********************************" << std::endl;
	for (int i = 0; i < season.getMCount(); i++) {
		std::cout << season.getEpisodes().at(i) << std::endl;
	}
	std::cout << "********************************" << std::endl;

}

FilePrinter::FilePrinter(std::string filename) :name(filename) {}

void FilePrinter::print(Season season) {
	std::ofstream output(name, std::ios_base::app);
	output<< "********************************\n";

	for (int i = 0; i < season.getMCount(); i++) {
		output << season.getEpisodes().at(i) << std::endl;
	}
	output << "********************************\n";

}