#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "team.h"
struct field_player:team
{
	
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
	//////////////////////////func
	field_player(const team &a) :team(a){};
	field_player(const team& a, char* name1, int age1, int games1, int goals1, int assists1, int red1, int yellow1, char* position1, char* nation1, int weig1, int heig1) : team(a)
	{
		strcpy(name, name1);
		strcpy(nation, nation1);
		age = age1;
		games = games1;
		goals = goals1;
		assists = assists1;
		red_cards = red1;
		yellow_cards = yellow1;
		strcpy(position,position1);
		weight = weig1;
		height = heig1;
	};
	void change_name(field_player a, char* name1)
	{
		strcpy(a.name, name1);
	};
	void change_position(field_player a, char* position1)
	{
		strcpy(a.position, position1);
	};
	void change_nation(field_player a, char* nation1)
	{
		strcpy(a.nation, nation1);
	};
	void change_games(field_player a, int games1)
	{
		a.games = games1;
	};
	void change_goals(field_player a, int goals1)
	{
		a.goals = goals1;
	};
	void change_age(field_player a, int age1)
	{
		a.age = age1;
	};
	void change_red_cards(field_player a, int red_cards1)
	{
		a.red_cards = red_cards1;
	};
	void change_yellow_cards(field_player a, int yellow_cards1)
	{
		a.yellow_cards = yellow_cards1;
	};
	void change_weight(field_player a, int weight1)
	{
		a.weight = weight1;
	};
	void change_height(field_player a, int height1)
	{
		a.height = height1;
	};
	void change_assists(field_player a, int assists1)
	{
		a.assists = assists1;
	};

};

