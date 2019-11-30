#pragma once
#include "Description.h"
#ifndef EPISODE_H
#define EPISODE_H



class Episode {
private:
	int viewerNumber;
	double viewSum;
	double viewMax;
	double averageScore;
	Description opis;
	friend std::ostream& operator<< (std::ostream& , Episode& );
	friend std::ostream& operator<< (std::ostream&, Description&);
	friend std::istream& operator>> (std::istream& , Episode& );
	friend void sort(Episode** ,const int );
	friend bool operator<(const Episode&, const Episode&);
public:
	void addView(double);
	double getMaxScore()const;
	double getAverageScore()const;
	int getViewerCount()const;
	double getViewSum()const;
	Description getDescription()const;
	void setViewerNumber(int);
	void setViewSum(double);
	void setViewMax(double);
	void setOpis(Description);
	void setAverageScore(double);
	Episode();
	Episode(int , double , double );
	Episode(int , double , double , Description );
	~Episode();
};

#endif EPISODE_H