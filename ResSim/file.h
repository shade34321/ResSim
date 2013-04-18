/**
	So I have a standardized way of opening and closing files. Don't have to worry about if a file is open or closed. Or messing with to many fstream objects
**/
#ifndef file_h
#define file_h

#include <fstream>
#include <iostream>
#include <string>
#include <time.h>
class file{
private:
	std::string filename;
	std::fstream output;
	void close();
	void open();
	const std::string  currentTime();
    
public:
	file(std::string);
	void writeToFile(std::string);
	void writeLog(std::string);
};

#endif