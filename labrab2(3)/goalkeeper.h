#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#pragma once
#include "team.h"
struct goalkeeper
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
	goalkeeper() {};
};

void gp_change_name(goalkeeper *a, char* name1);
void gp_change_nation(goalkeeper *a, char* nation1);
void gp_change_games(goalkeeper *a, int games1);
void gp_change_goals(goalkeeper *a, int goals1);
void gp_change_age(goalkeeper *a, int age1);
void gp_change_red_cards(goalkeeper *a, int red_cards1);
void gp_change_yellow_cards(goalkeeper *a, int yellow_cards1);
void gp_change_missed_balls(goalkeeper *a, int missed_balls1);
void gp_change_weight(goalkeeper *a, int weight1);
void gp_change_height(goalkeeper *a, int height1);
void gp_change_assists(goalkeeper *a, int assists1);
	