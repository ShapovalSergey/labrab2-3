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
	goalkeeper(const team &a ): team(a)
	{
	




	};

};

