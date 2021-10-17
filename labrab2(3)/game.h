#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
struct game
{
	char league_name[50];
	char home_team[50];
	char visitor_team[50];
	char result[10];
	//////////////////////////func
	game() {};
	game(char* name, char* rez, char* vis, char* home)
	{
		strcpy(league_name,name);
		strcpy(home_team,home);
		strcpy(visitor_team,vis);
		strcpy(result,rez);
	};
	void change_name(game a, char* name1)
	{
		strcpy(a.league_name, name1);
	};
	void change_home_team(game a, char* home_team1)
	{
		strcpy(a.home_team, home_team1);
	};
	void change_visitor_team(game a, char* visitor_team1)
	{
		strcpy(a.visitor_team, visitor_team1);
	};
	void change_result(game a, char* result1)
	{
		strcpy(a.result, result1);
	};

};

