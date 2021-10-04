#pragma once
struct league
{ 
	char name [50];
	int value_of_teams;
	char years[9];
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

};
struct goalkeepers
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


};
