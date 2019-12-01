#include "functions.h"
#include "Season.h"

Season::Season() :episodes(NULL), mCount(0) {}

Season::Season(const Season& season) : mCount(season.mCount) {
	episodes = new Episode*[mCount];
	for (int i = 0; i < mCount; i++) {
		episodes[i] = new Episode();
		*episodes[i] = *season.episodes[i];
	}
}

Season::~Season() {
	for (int i = 0; i < mCount; i++)
		delete episodes[i];
	delete[] episodes;
}


Season::Season(Episode** EPISODES, int COUNT) :mCount(COUNT) {
	episodes = new Episode*[mCount];
	for (int i = 0; i < mCount; i++) {
		episodes[i] = new Episode();
		*episodes[i] = *EPISODES[i];
	}
}

double Season::getAverageRating()const {
	double sum = 0;
	for (int i = 0; i < mCount; i++) {
		//sum += episodes[i]->getViewSum()/episodes[i]->getViewerCount();
		sum += episodes[i]->getAverageScore();
	}
	return (double)(sum / mCount);
}

int Season::getTotalViews()const {
	int sum = 0;
	for (int i = 0; i < mCount; i++) {
		sum += episodes[i]->getViewerCount();
	}
	return sum;
}

Episode& Season::getBestEpisode()const {
	double max = 0;
	int index;
	for (int i = 0; i < mCount; i++) {
		if (episodes[i]->getMaxScore() > max) {
			max = episodes[i]->getMaxScore();
			index = i;
		}
	}
	return *episodes[index];
}


const Episode& Season::operator[](int index)const {
	if (index >= mCount){
		std::cout << "Array index out of bound!"<<std::endl;
		exit(0);
	}
	return *this->episodes[index];
}

Episode& Season::operator[](int index){
	if (index >= mCount) {
		std::cout << "Array index out of bound!" << std::endl;
		exit(0);
	}
	return *this->episodes[index];
}
