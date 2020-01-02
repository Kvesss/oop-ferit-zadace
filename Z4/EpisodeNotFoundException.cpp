#include "EpisodeNotFoundException.h"

std::string EpisodeNotFoundException::getName()const {
	return name;
}

EpisodeNotFoundException::EpisodeNotFoundException(std::string msg, std::string Name) :
	name(Name), runtime_error(msg) {}