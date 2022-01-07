#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include "player.h"
class field_player:public player
{
	static int disq;
private:
	int games;
	int goals;
	int assists;
	int red_cards;
	int yellow_cards;
	std::string position;
	int weight;
	int height;
	
	//////////////////////////func
public:
	static int RetDisq() { return disq; };
	field_player() {};
	field_player( std::string name1, int age1, int games1, int goals1, int assists1, int red1, int yellow1, std::string position1, std::string nation1, int weig1, int heig1) 
	{
		player(name1, age1, nation1);//:human(1);
		games = games1;
		goals = goals1;
		assists = assists1;
		red_cards = red1;
		yellow_cards = yellow1;
		position=position1;
		weight = weig1;
		height = heig1;
	};
	//std::string return_position() { return position; };
	field_player(std::string name1) { change_name(name1); };
	void change_name(std::string name1) { player::change_name(name1); };
	void change_nation(std::string nation1) { nation = nation1;; };
	//void change_age(int age1) { change_age(age1); };
	void change_position( std::string position1)
	{
		position= position1;
	};
	void change_games( int games1)
	{
		games = games1;
	};
	void change_goals( int goals1)
	{
		goals = goals1;
	};
	void change_red_cards( int red_cards1)
	{
		red_cards = red_cards1;
	};
	void change_yellow_cards( int yellow_cards1)
	{
		yellow_cards = yellow_cards1;
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

	int return_games() { return games; };
	int return_goals() { return goals; };
	int return_assists() { return assists; };
	int return_red_cards() { return red_cards; };
	int return_yellow_cards() { return yellow_cards; };
	virtual std::string return_position() { return position; };
	int return_weight() { return weight; };
	int return_height() { return height; };
	//~field_player();
	void vivod() { std::cout<< return_name()<<" "<< return_nation()<<" "<< return_age()<<" "<< games<<" "<< goals<<" "<< assists<<" "<< red_cards<<" "<< yellow_cards<<" "<< position<<" "<< weight<<" "<< height<<"\n"; };
	};

