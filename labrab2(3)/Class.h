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
	league() {};
	league(const char* name1, int value_of_teams1, const char* years1, const char* location1)
	{
		
		strcpy(name,name1);
		int value_of_teams = value_of_teams1;
		strcpy(years, years1);
		strcpy(location, location1);
	};
};
void delete_league(league *var);
void league_change_name(league *var, char* name1);
void league_change_value(league *var, int value);
void league_change_years(league *var, char* years1);
void league_change_loc(league *var, char* location1);
