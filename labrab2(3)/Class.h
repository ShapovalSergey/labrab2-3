#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

struct league
{ 
	char name [50];
	int value_of_teams;
	char years[9];
	char location[50];
	//////////////////////////
	league(char* name1, int value_of_teams1, char* years1, char* location1)
	{
		
		strcpy(name,name1);
		int value_of_teams = value_of_teams1;
		strcpy(years, years1);
		strcpy(location, location1);

	};
	void delete_league(league var) 
	{
		var.id = 0;
		strcpy(var.location ,"deleted");
		var.value_of_teams = 0;
		strcpy(var.name, "deleted");
		strcpy(var.years, "deleted");
	};

	void change_league(league var)
	{
		

	};

};



