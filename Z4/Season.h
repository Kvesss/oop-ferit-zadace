#pragma once
#include "functions.h"

#ifndef SEASON_H
#define SEASON_H
class Season {
	int mCount;
	std::vector<Episode> episodes;
public:
	//friend std::ostream& operator<< (std::ostream&, const Episode&);
	//const Season(const Season&);
	//Season(Episode**, int);
	Season(std::vector<Episode>);
	//Season();
	//~Season();
	//const Episode& operator[](int)const;
	//Episode& operator[](int);
	//double getAverageRating()const;
	//int getTotalViews()const;
	//Episode& getBestEpisode()const;
	int getMCount()const;
	void add(Episode);
	void remove(std::string);
	std::vector<Episode> getEpisodes()const;

};

#endif SEASON_H


