#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>

class field_player
{
	static int disq;
private:
	std::string name;
	int age;
	int games;
	int goals;
	int assists;
	int red_cards;
	int yellow_cards;
	std::string position;
	std::string nation;
	int weight;
	int height;
	
	//////////////////////////func
public:
	static int RetDisq() { return disq; };
	field_player() {};
	field_player( std::string name1, int age1, int games1, int goals1, int assists1, int red1, int yellow1, std::string position1, std::string nation1, int weig1, int heig1) 
	{
		name= name1;
		nation= nation1;
		age = age1;
		games = games1;
		goals = goals1;
		assists = assists1;
		red_cards = red1;
		yellow_cards = yellow1;
		position=position1;
		weight = weig1;
		height = heig1;
	};
	void change_name( std::string name1)
	{
		name =name1;
	};
	void change_position( std::string position1)
	{
		position= position1;
	};
	void change_nation( std::string nation1)
	{
		nation= nation1;
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
	std::string return_name() { return name; };
	std::string return_nation() { return nation; };
	int return_age() { return age; };
	int return_games() { return games; };
	int return_goals() { return goals; };
	int return_assists() { return assists; };
	int return_red_cards() { return red_cards; };
	int return_yellow_cards() { return yellow_cards; };
	std::string return_position() { return position; };
	int return_weight() { return weight; };
	int return_height() { return height; };
	//~field_player();
	void vivod() { std::cout<< name<<" "<< nation<<" "<< age<<" "<< games<<" "<< goals<<" "<< assists<<" "<< red_cards<<" "<< yellow_cards<<" "<< position<<" "<< weight<<" "<< height<<"\n"; };
	};

