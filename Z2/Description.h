#pragma once
#include <iostream>
#include <fstream>
#include <string>

#ifndef DESCRIPTION_H
#define DESCRIPTION_H


class Description {
private:
	int brojEpizode;
	double trajanje;
	std::string ime;
	friend std::istream& operator>>(std::istream& , Description& );
	friend std::ostream& operator<< (std::ostream& , Description& );
public:
	Description();
	Description(int, double, std::string);
	~Description();
	int getBrojepizode()const;
	double getTrajanje()const;
	std::string getIme()const;
	void setBrojepizode(int);
	void setTrajanje(double);
	void setIme(std::string);
};

#endif DESCRIPTION_H