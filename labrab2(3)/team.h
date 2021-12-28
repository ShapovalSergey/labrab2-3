#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "field_player.h"
#include "goalkeeper.h"
#include <string.h>
#include <vector>
#include <iostream>
class field_player;
class goalkeeper;

class team
{
	static int n;
private:
	std::string name;
	int wins;
	int defeats;
	int draws;
	int value_of_field_players;
	int value_of_goalkeepers;
	std::string location;
	//////////////////////////func
public:
	static int getN() { return n; };
	team() { n++; };
	team(const char* name1, int wins1, int defeats1, int draws1, int val_of_fp, int val_of_gk, const char* location1) 
	{

		name = name1;
		wins = wins1;
		defeats = defeats1;
		draws = draws1;
		value_of_field_players = val_of_fp;
		value_of_goalkeepers = val_of_gk;
		location = location1;
		n++;
	};
	
	static void minN() { n--; };
	std::vector<field_player*> fp;
	std::vector<goalkeeper*> gp;
	void Addgoalkeeper(goalkeeper* a) 
	{
		gp.push_back(a);
	};
	void Addfp(field_player* a)
	{
		fp.push_back(a);
	};
	
	void change_name(std::string name1)
	{
		name = name1;
	};
	void change_defeats(int defeats1)
	{
		defeats = defeats1;
	};
	void change_draws(int draws1)
	{
		draws = draws1;
	};
	void change_value_of_field_players(int value_of_field_players1)
	{
		value_of_field_players = value_of_field_players1;
	};
	void change_value_of_goalkeepers(int value_of_goalkeepers1)
	{
		value_of_goalkeepers = value_of_goalkeepers1;
	};
	void change_wins(int wins1)
	{
		wins = wins1;
	};
	void change_location(std::string location1)
	{
		location= location1;
	};
	std::string  return_name() { return name; };
	int return_defeats() { return defeats; };
	int return_wins() { return wins; };
	int return_draws() { return draws; };
	int return_value_of_field_players() { return value_of_field_players; };
	int return_value_of_goalkeepers() { return value_of_goalkeepers; };
	std::string return_location() { return location; };
	void goalkeeper_vivod()
	{
		for (int i = 0; i < gp.capacity(); i++)
		{
			printf("%d)%s\n", i + 1, gp[i]->return_name());
		}
	}
	void fp_vivod()
	{
		for (int i = 0; i < fp.capacity(); i++)
		{
			printf("%d)%s\n", i + 1, fp[i]->return_name());
		}
	}	
	//~team();
	void vivod() { std::cout << name<<" "<< location; printf("\n%d %d %d %d %d %d", defeats, wins, draws, value_of_field_players, value_of_goalkeepers, stat(*this)); };
	friend int stat(team &tm);
};

