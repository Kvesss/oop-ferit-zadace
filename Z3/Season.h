#pragma once
#include "functions.h"
#ifndef SEASON_H
#define SEASON_H
class Season {
	int mCount;
	Episode** episodes;
public:
	const Season(const Season&);
	Season(Episode**, int);
	Season();
	~Season();
	const Episode& operator[](int)const;
	Episode& operator[](int);
	double getAverageRating()const;
	int getTotalViews()const;
	Episode& getBestEpisode()const;
};

#endif SEASON_H


