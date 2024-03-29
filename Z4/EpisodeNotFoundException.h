#pragma once
#include "functions.h"

#ifndef EPISODENOTFOUNDEXCEPTION_H
#define EPISODENOTFOUNDEXCEPTION_H

class EpisodeNotFoundException : public std::runtime_error {
	std::string name;
public:
	EpisodeNotFoundException(std::string , std::string );
	std::string getName()const;

};

#endif EPISODENOTFOUNDEXCEPTION_H