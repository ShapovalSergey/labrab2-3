#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "team.h"
struct field_player
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
	field_player() {};
};

void fp_change_name(field_player *a, char* name1);
void fp_change_position(field_player *a, char* position1);
void fp_change_nation(field_player *a, char* nation1);
void fp_change_games(field_player *a, int games1);
void fp_change_goals(field_player *a, int goals1);
void fp_change_age(field_player *a, int age1);
void fp_change_red_cards(field_player *a, int red_cards1);
void fp_change_yellow_cards(field_player *a, int yellow_cards1);
void fp_change_weight(field_player *a, int weight1);
void fp_change_height(field_player *a, int height1);
void fp_change_assists(field_player *a, int assists1);
