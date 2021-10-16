#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>

struct team
{
	struct league;
	char name[50];
	int wins;
	int defeats;
	int draws;
	int value_of_field_players;
	int value_of_goalkeepers;
	char location[50];
	//////////////////////////func
	team(const league &a, char* name1, int wins1, int defeats1, int draws1, int val_of_fp, int val_of_gk, char* location1)
	{
		league : a;
		strcpy(name,name1);
		wins = wins1;
		defeats = defeats1;
		draws = draws1;
		value_of_field_players = val_of_fp;
		value_of_goalkeepers = val_of_gk;
		strcpy(location,location1);
	};
	void change_name(team a,char* name1)
	{
		strcpy(a.name,name1);
	};
	void change_defeats(team a, int defeats1)
	{
		a.defeats = defeats1;
	};
	void change_draws(team a, int draws1)
	{
		a.draws = draws1;
	};
	void change_value_of_field_players(team a, int value_of_field_players1)
	{
		a.value_of_field_players = value_of_field_players1;
	};
	void change_value_of_goalkeepers(team a, int value_of_goalkeepers1)
	{
		a.value_of_goalkeepers = value_of_goalkeepers1;
	};
	void change_wins(team a, int wins1)
	{
		a.wins = wins1;
	};
	void change_location(team a, char* location1)
	{
		strcpy(a.location, location1);
	};



};

