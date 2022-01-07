#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>

class human
{
protected:
	int status;
	//std::string name;

public:
	//human() {};
	human(int st) { status = st; };
	int return_status() {return status; };
	virtual std::string create_status() = 0;
};

