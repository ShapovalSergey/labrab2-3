#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
class player
{
private:
	std::string name;
	int age;
	std::string nation;
public:
	void change_name(std::string name1)
	{
		name = name1;
	};
	void change_nation(std::string nation1)
	{
		nation = nation1;
	};
	void change_age(int age1)
	{
		age = age1;
	};
	std::string return_name() { return name; };
	std::string return_nation() { return nation; };
	int return_age() { return age; };
};

