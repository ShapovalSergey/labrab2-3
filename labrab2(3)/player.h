#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include "human.h"
class player:public human
{
protected:
	std::string name;
	int age;
	std::string nation;
public:
	/*player& operator=(const player& pl) 
	{
		name = pl.name;
		age = pl.age;
		nation = pl.nation;
	};*/
	virtual std::string return_position() { return "Неизвестно"; };
	player(std::string name1, int age1, std::string nation1) :human(1)
	{
		name = name1;
		age = age1;
		nation = nation1;
	};
	player():human(1) {};
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
	virtual std::string create_status() { return "Профессиональный игрок"; };
};

