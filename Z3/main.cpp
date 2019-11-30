#include <iostream>
#include <string>
#include <fstream>
#include "functions.h"
#include "Season.h"




int main() {

	std::string fileName("shows.tv");
	const int COUNT = 10;
	Episode** episodes = loadEpisodesFromFile(fileName, COUNT);

	const Season* season = new Season(episodes, COUNT);
	Season* seasonCopy = new Season(*season);

	for (int i = 0; i < COUNT; i++) {
		delete episodes[i];
	}
	delete[] episodes;

	const Episode episode = (*season)[0];
	const Episode episodeCopy = (*seasonCopy)[0];

	std::cout << episode << std::endl;
	std::cout << episodeCopy << std::endl;

	if (episodeCopy == episode) {
		std::cout << "hw points++" << std::endl;
	}
	if (&seasonCopy[0] == &season[0]) {
		std::cout << "hw points--" << std::endl;
	}

	std::cout << "report:" << "\n\t"
		<< "avg rating: " << season->getAverageRating() << "\n\t"
		<< "total viewers: " << season->getTotalViews() << "\n\t"
		<< "best episode: " << season->getBestEpisode() << "\n\t"
		<< std::endl;

	delete season;
	delete seasonCopy;
}