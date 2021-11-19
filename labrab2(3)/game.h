#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <conio.h>
#include <iostream>
class game
{
private:
	char league_name[50];
	char home_team[50];
	char visitor_team[50];
	char result[10];
	//////////////////////////func
public:
	
	game() {};
	game(char* name, char* rez, char* vis, char* home)
	{
		strcpy(league_name,name);
		strcpy(home_team,home);
		strcpy(visitor_team,vis);
		strcpy(result,rez);
	};
	void change_name( char* name1)
	{
		strcpy(league_name, name1);
	};
	void change_home_team( char* home_team1)
	{
		strcpy(home_team, home_team1);
	};
	void change_visitor_team( char* visitor_team1)
	{
		strcpy(visitor_team, visitor_team1);
	};
	void change_result( char* result1)
	{
		strcpy(result, result1);
	};
	char* return_name() { return league_name; };
	char* return_home_team() { return home_team; };
	char* return_visitor_team() { return visitor_team; };
	char* return_result() { return result; };
	void vivod() { printf("%s\n%s %s %s\n", league_name,home_team,result, visitor_team); };
	//~game();
};

