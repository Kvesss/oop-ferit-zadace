#pragma once
#include "functions.h"
class Season {
	int mCount;
	Episode* episodes;
public:
	const Season(const Season&);
	Season(Episode**, int);
	Season();
	const Episode& operator[](int index)const{
		return episodes[index];
	}
	double getAverageRating()const {
		double sum = 0;
		for (int i = 0; i < mCount; i++) {
			sum += episodes[i].getAverageScore();
		}
		return (double)(sum / mCount);
	}
	int getTotalViews()const {
		int sum = 0;
		for (int i = 0; i < mCount; i++) {
			sum += episodes[i].getViewerCount();
		}
		return sum;
	}
	Episode& getBestEpisode()const {
		double max = 0;
		int index;
		for (int i = 0; i < mCount;i++) {
			if (episodes[i].getMaxScore() > max)
				max = episodes[i].getMaxScore();
			index = i;
		}
		return episodes[index];
	}
};

Season::Season(){}

Season::Season(const Season& season): mCount(season.mCount) {
	Episode* episodes = new Episode[mCount];
	for (int i = 0; i < mCount; i++) {
		this->episodes[i] = season.episodes[i];
	}
}

Season::Season(Episode** EPISODES, int COUNT):mCount(COUNT) {
	episodes = new Episode[mCount];
	for (int i = 0; i < mCount; i++) {
		episodes[i] = *EPISODES[i];
	}
}



//	Episode** episodes = loadEpisodesFromFile(fileName, COUNT);

Episode** loadEpisodesFromFile(std::string filename, int COUNT) {
	Episode** episodes=new Episode *[COUNT];
	
	std::ifstream input(filename);
	if (input.is_open() == false)
		perror("File is closed!");
	for (int i = 0; i < COUNT; i++) {
		/*char a, b, c;
		filename >> *episodes[i].viewMax >> a >> *episodes[i].viewSum >> b >> *episodes[i].averageScore >> c >> *episodes[i].opis;*/
		input >> **(episodes+i);
		
	}
	input.close();
	return episodes;
}

bool operator ==(const Episode& ep1, const Episode& ep2) {
	return(ep1.getViewerCount() == ep2.getViewerCount() && ep1.getViewSum() == ep2.getViewSum()
		&& ep1.getMaxScore() == ep2.getMaxScore() && ep1.getAverageScore() == ep2.getAverageScore()
		&& ep1.getDescription() == ep2.getDescription());
}

