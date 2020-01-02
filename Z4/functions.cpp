#include "functions.h"





void print( Episode** episode, const int n) {
	for (int i = 0; i < n; i++) {
		std::cout << *episode[i] << std::endl;
	}
}

void swap(Episode& xp, Episode& yp) {
	Episode temp = xp;
	xp = yp;
	yp = temp;
}

void persistToFile(std::string name, Episode** epizode, const int count) {
	std::ofstream output(name);
	if (output.is_open() == false) {
		perror("File is closed!");
		std::cin.get();
		exit(0);
	}
	for (int i = 0; i < count; i++) {
		output << *epizode[i] << std::endl;
	}
	output.close();
}

double generateRandomScore() {
	return (double)(rand() / RAND_MAX) * 10.0;
}

std::vector<Episode> loadEpisodesFromFile(std::string filename) {
	//Episode** episodes = new Episode *[COUNT];

	std::ifstream input(filename);
	/*if (input.is_open() == false) {
		perror("File is closed!");
		std::cin.get();
		exit(0);
	}
	for (int i = 0; i < COUNT; i++) {
		episodes[i] = new Episode();
		input >> **(episodes + i);

	}*/
	std::vector<Episode> episodes(10);
	for (int i = 0; input.peek() != EOF; i++)
		input >> episodes[i];
	input.close();
	return episodes;
}