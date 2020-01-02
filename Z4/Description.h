#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#ifndef DESCRIPTION_H
#define DESCRIPTION_H


class Description {
private:
	int episodeNumber;
	double length;
	std::string name;
	friend std::istream& operator>>(std::istream& , Description& );
	friend std::ostream& operator<< (std::ostream& ,const Description& );
	friend bool operator==(const Description& , const Description& );
public:
	Description();
	Description(int, double, std::string);
	~Description();
	int getEpisodeNumber()const;
	double getLength()const;
	std::string getName()const;
	void setEpisodeNumber(int);
	void setLength(double);
	void setName(std::string);
	Description& operator=(const Description&);
};

std::ostream& operator<< (std::ostream&, const Description&);
std::istream& operator>>(std::istream&, Description&);
bool operator==(const Description&, const Description&);
#endif DESCRIPTION_H