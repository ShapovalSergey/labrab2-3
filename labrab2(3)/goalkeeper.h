#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#pragma once
#include "team.h"
struct goalkeeper:team
{

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
	//////////////////////////func
	goalkeeper(const team &a, char* name1,int age1,int games1,int goals1, int assists1,int red1,int yellow1,int miss1, char* nation1, int weig1, int heig1 ): team(a)
	{
		strcpy(name,name1);
		strcpy(nation,nation1);
		age = age1;
		games = games1;
		goals = goals1;
		assists = assists1;
		red_cards = red1;
		yellow_cards = yellow1;
		missed_balls = miss1;
		weight = weig1;
		height = heig1;
	};
	void change_name(goalkeeper a, char* name1 )
	{
		strcpy(a.name, name1);
	};
	void change_nation(goalkeeper a, char* nation1)
	{
		strcpy(a.nation, nation1);
	};
	void change_games(goalkeeper a, int games1)
	{
		a.games = games1;
	};
	void change_goals(goalkeeper a, int goals1)
	{
		a.goals = goals1;
	};
	void change_age(goalkeeper a, int age1)
	{
		a.age = age1;
	};
	void change_red_cards(goalkeeper a, int red_cards1)
	{
		a.red_cards = red_cards1;
	};
	void change_yellow_cards(goalkeeper a, int yellow_cards1)
	{
		a.yellow_cards = yellow_cards1;
	};
	void change_missed_balls(goalkeeper a, int missed_balls1)
	{
		a.missed_balls = missed_balls1;
	};
	void change_weight(goalkeeper a, int weight1)
	{
		a.weight = weight1;
	};
	void change_height(goalkeeper a, int height1)
	{
		a.height = height1;
	};
	void change_assists(goalkeeper a, int assists1)
	{
		a.assists = assists1;
	};


};

