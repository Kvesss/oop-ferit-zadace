#pragma once
#include<iostream>
#include<fstream>
#include "functions.h"

#ifndef IPRINTER_H
#define IPRINTER_H

class IPrinter {
public:
	virtual void print(Season season) = 0;

	virtual ~IPrinter(){}

};

class ConsolePrinter: public IPrinter {
public:
	ConsolePrinter(){

	}
	virtual void print(Season);
	virtual ~ConsolePrinter(){}
};

class FilePrinter : public IPrinter {
	std::string name;
public:
	FilePrinter(std::string);
	virtual void print(Season);
	virtual ~FilePrinter(){}
};

#endif IPRINTER_H
