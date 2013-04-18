#include "file.h"

file::file(std::string fn){
	file::filename = fn;
}

void file::open(){
	output.open(file::filename.c_str(), std::ios::app);
}

void file::close(){
	output.close();
}

/**
	To output data to a file
**/
void file::writeToFile(std::string message){
	file::open();

	output << message;

	file::close();
}

/**
	To output lines to a log file
**/
void file::writeLog(std::string message){
		file::open();
		
		std::string time = currentTime();

		output << time << " " << message << "\n";

		file::close();
}

/**
	Gets current date and time so we can have a time stamp for our logs
	Outputs in the following format
	YYYY-MM-DD.HH:MM:SS:MS
**/
const std::string file::currentTime(){
	time_t now = time(0);
	struct  tm tstruct;
	char buf[80];
	tstruct = *localtime(&now);
	strftime(buf,sizeof(buf), "%Y-%m-%d.%X", &tstruct);

	return buf;
}