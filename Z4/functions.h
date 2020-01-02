#pragma once
#include "Episode.h"
#include "Season.h"
#include "IPrinter.h"
#include "EpisodeNotFoundException.h"

#ifndef FUNCTIONS_H
#define FUNCTIONS_H



double generateRandomScore();
void swap(Episode&, Episode&);
void print( Episode** ,const int );
void persistToFile(std::string , Episode** , const int );
std::vector<Episode> loadEpisodesFromFile(std::string);


#endif FUNCTIONS_H
