#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
struct game
{
	char league_name[50];
	char home_team[50];
	char visitor_team[50];
	char result[10];
	game() {};
	game(char* name, char* rez, char* vis, char* home)
	{
		strcpy(league_name,name);
		strcpy(home_team,home);
		strcpy(visitor_team,vis);
		strcpy(result,rez);
	};
	
};
void game_change_name(game *a, char* name1);
void game_change_home_team(game *a, char* home_team1);
void game_change_visitor_team(game *a, char* visitor_team1);
void game_change_result(game *a, char* result1);