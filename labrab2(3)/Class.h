#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <Windows.h>
#include "team.h"
class team;
class league
{ 
private:
	std::string name ;
	int value_of_teams;
	std::string years;
	std::string location;
	//////////////////////////func
public:
	//std::vector<team*> tm;
	team tm;
	void Addteam(team* a) 
	{ 
		tm = *a;
	};
	league() {};
	league(std::string name1, int value_of_teams1,  std::string years1,  std::string location1)
	{
		name=name1;
		value_of_teams = value_of_teams1;
		years= years1;
		location= location1;
	};
	void change_name( std::string name1) 
	{
		this->name= name1;
	};
	void change_value( int value)
	{
		value_of_teams = value;
	};
	void change_years( std::string years1)
	{
		years= years1;
	};
	void change_loc( std::string location1)
	{
		location= location1;
	};
	std::string return_name() 
	{
		return name;
	};
	int return_value() 
	{ 
		return value_of_teams;
	};
	std::string return_years()
	{
		return years;
	};
	std::string return_location()
	{
		return location;
	};
	//~league();
	void teamvivod() 
	{
		printf("%s\n",/* i + 1*/tm.return_name()); 
	};
	team& return_team() { return tm; };
	void vivod() { std::cout<<name<<" "<<value_of_teams<<" "<<years<<" "<<location<<" "; };
};



