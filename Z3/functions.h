#pragma once
#include "Episode.h"
#ifndef FUNCTIONS_H
#define FUNCTIONS_H



double generateRandomScore();
std::ostream& operator<< (std::ostream& , Description& );
std::ostream& operator<< (std::ostream& , Episode& );
std::istream& operator>> (std::istream& , Episode& );
std::istream& operator>>(std::istream&, Description&);
void swap(Episode&, Episode&);
void print( Episode** ,const int );
void sort( Episode** ,const int );
bool operator<(const Episode& , const Episode& );
void persistToFile(std::string ime, Episode** episodes, const int count);

#endif FUNCTIONS_H
