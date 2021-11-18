#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "Class.h"
struct team 
{
	char name[50];
	int wins;
	int defeats;
	int draws;
	int value_of_field_players;
	int value_of_goalkeepers;
	char location[50];
	team() {};
};

void team_change_name(team *a, char* name1);
void team_change_defeats(team *a, int defeats1);
void team_change_draws(team *a, int draws1);
void team_change_value_of_field_players(team *a, int value_of_field_players1);
void team_change_value_of_goalkeepers(team *a, int value_of_goalkeepers1);
void team_change_wins(team *a, int wins1);
void team_change_location(team *a, char* location1);