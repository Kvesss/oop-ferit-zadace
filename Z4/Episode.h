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
	Description description;
	friend std::ostream& operator<< (std::ostream& ,const Episode& );
	friend std::istream& operator>> (std::istream& , Episode& );
	friend void sort(Episode** ,const int );
	friend bool operator<(const Episode&, const Episode&);
	friend bool operator ==(const Episode& , const Episode& );
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
	void setDescription(Description);
	void setAverageScore(double);
	Episode();
	Episode(int , double , double );
	Episode(int , double , double , Description );
	~Episode();
	Episode& operator=(const Episode&);
};

std::ostream& operator<< (std::ostream&,const Episode&);
std::istream& operator>> (std::istream&, Episode&);
bool operator<(const Episode&, const Episode&);
bool operator ==(const Episode&, const Episode&);
void sort(Episode**, const int);


#endif EPISODE_H