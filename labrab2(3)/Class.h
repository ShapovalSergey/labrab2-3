#pragma once
#include <string.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <random>
#include <time.h>
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS
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
	void delete_league(league var) 
	{
		var.id = 0;
		strcpy(var.location ,"deleted");
		var.value_of_teams = 0;
		strcpy(var.name, "deleted");
		strcpy(var.years, "deleted");
	};

	void change_league(league var)
	{
		int i,check; char* str; SetConsoleCP(1251); SetConsoleOutputCP(1251);
		setlocale(LC_ALL, "Russian");
		printf("¬ы хотите изменить id лиги (на данный момент - %d)? (1-да, 0-нет)\n",var.id);
		scanf("%d",&check);
		if (check==1)
		{
			printf("¬ведите новый id лиги\n");
			scanf("%d",&i);
			var.id = i;
		}
		else
		{
			return;
		}
		printf("¬ы хотите изменить название лиги (на данный момент - %s)? (1-да, 0-нет)\n", var.name);
		scanf("%d", &check);
		if (check == 1)
		{
			printf("¬ведите новое им€ лиги\n");
			scanf("%s", &str);
			strcpy(var.name,str);
		}
		else
		{
			return;
		}
		printf("¬ы хотите изменить количество команд в лиге (на данный момент - %d)? (1-да, 0-нет)\n", var.value_of_teams);
		scanf("%d", &check);
		if (check == 1)
		{
			printf("¬ведите количество команд в лиге\n");
			scanf("%d", &i);
			var.value_of_teams = i;
		}
		else
		{
			return;
		}
		printf("¬ы хотите изменить сезон лиги (на данный момент - %s)? (1-да, 0-нет)\n", var.years);
		scanf("%d", &check);
		if (check == 1)
		{
			printf("¬ведите сезон лиги\n");
			scanf("%s", &str);
			strcpy(var.years,str);
		}
		else
		{
			return;
		}
		printf("¬ы хотите изменить страну лиги (на данный момент - %s)? (1-да, 0-нет)\n", var.location);
		scanf("%d", &check);
		if (check == 1)
		{
			printf("¬ведите сезон лиги\n");
			scanf("%s", &str);
			strcpy(var.location, str);
		}
		else
		{
			return;
		}

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
