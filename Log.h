#pragma once
#include <string>

class Log
{
public:
	Log(void);
	~Log(void);

	/**
	 * Make an entry to a log file 
	 * @param s
	 */
	void log(std::string message);
};