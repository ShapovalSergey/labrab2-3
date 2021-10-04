#pragma once
#include <string.h>
struct league
{ 
	int id;
	char name [50];
	int value_of_teams;
	char years[9];
	char location[50];
	//////////////////////////
	league(int id1,char* name1, int value_of_teams1, char* years1, char* location1)
	{
		id = id1;
		strcpy(name,name1);
		int value_of_teams = value_of_teams1;
		strcpy(years, years1);
		strcpy(location, location1);

	};


};
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

};
struct field_player
{
	struct team;
	char name[30];
	int age;
	int games;
	int goals;
	int assists;
	int red_cards;
	int yellow_cards;
	char position[15];
	char nation[30];
	int weight;
	int height;

};
struct goalkeeper
{
	struct team;
	char name[30];
	int age;
	int games;
	int goals;
	int assists;
	int red_cards;
	int yellow_cards;
	int missed_balls;
	char nation[30];
	int weight;
	int height;

};
