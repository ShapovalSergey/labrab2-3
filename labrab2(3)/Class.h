#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

class league
{ 
private:
	char name [50];
	int value_of_teams;
	char years[9];
	char location[50];
	//////////////////////////func
public:
	
	league() {};
	league(const char* name1, int value_of_teams1, const char* years1, const char* location1)
	{
		
		strcpy(name,name1);
		int value_of_teams = value_of_teams1;
		strcpy(years, years1);
		strcpy(location, location1);

	};
	void change_name( char* name1) 
	{
		strcpy(name, name1);
	};
	void change_value( int value)
	{
		value_of_teams = value;
	};
	void change_years( char* years1)
	{
		strcpy(years, years1);
	};
	void change_loc( char* location1)
	{
		strcpy(location, location1);
	};
	char* return_name() 
	{
		return name;
	};
	int return_value() 
	{ 
		return value_of_teams;
	};
	char* return_years()
	{
		return years;
	};
	char* return_location()
	{
		return location;
	};




};



