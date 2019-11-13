#include <iostream>
#include <fstream>
#include <string>


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

double generateRandomScore();
std::ostream& operator<< (std::ostream& , Description& );
std::ostream& operator<< (std::ostream& , Episode& );
std::istream& operator>> (std::istream& , Episode& );
std::istream& operator>>(std::istream&, Description&);
void swap(Episode&, Episode&);
void print( Episode** ,const int );
void sort( Episode& ,const int );
bool operator<(const Episode& , const Episode& );
void persistToFile(std::string ime, Episode** episodes, const int count);

