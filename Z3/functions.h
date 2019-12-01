#pragma once
#include "Episode.h"
#include "Season.h"

#ifndef FUNCTIONS_H
#define FUNCTIONS_H



double generateRandomScore();
void swap(Episode&, Episode&);
void print( Episode** ,const int );
void persistToFile(std::string , Episode** , const int );
Episode** loadEpisodesFromFile(std::string , int );


#endif FUNCTIONS_H
