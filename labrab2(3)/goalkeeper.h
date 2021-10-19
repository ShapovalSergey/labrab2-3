#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#pragma once
#include "team.h"
class goalkeeper:team
{
private:
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
public:
	goalkeeper() {};
	goalkeeper(const team& a) :team(a) {};
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
	void change_name( char* name1 )
	{
		strcpy(name, name1);
	};
	void change_nation( char* nation1)
	{
		strcpy(nation, nation1);
	};
	void change_games( int games1)
	{
		games = games1;
	};
	void change_goals( int goals1)
	{
		goals = goals1;
	};
	void change_age( int age1)
	{
		age = age1;
	};
	void change_red_cards( int red_cards1)
	{
		red_cards = red_cards1;
	};
	void change_yellow_cards( int yellow_cards1)
	{
		yellow_cards = yellow_cards1;
	};
	void change_missed_balls( int missed_balls1)
	{
		missed_balls = missed_balls1;
	};
	void change_weight( int weight1)
	{
		weight = weight1;
	};
	void change_height( int height1)
	{
		height = height1;
	};
	void change_assists( int assists1)
	{
		assists = assists1;
	};
	char* return_name() { return name; };
	char* return_nation() { return nation; };
	int return_age() { return age; };
	int return_games() { return games; };
	int return_goals() { return goals; };
	int return_assists() {return assists;};
	int return_red_cards() {return red_cards;};
	int return_yellow_cards() { return yellow_cards; };
	int return_missed_balls() { return missed_balls; };
	int return_weight() {return weight;};
	int return_height() { return height; };
	//~goalkeeper();
};

