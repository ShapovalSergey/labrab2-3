#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <conio.h>
#include <iostream>
class game
{
private:
	std::string league_name;
	std::string home_team;
	std::string visitor_team;
	std::string result;
	//////////////////////////func
public:
	
	game() {};
	game(std::string name, std::string rez, std::string vis, std::string home)
	{
		league_name=name;
		home_team=home;
		visitor_team=vis;
		result=rez;
	};
	void change_name( std::string name1)
	{
		league_name= name1;
	};
	void change_home_team( std::string home_team1)
	{
		home_team= home_team1;
	};
	void change_visitor_team( std::string visitor_team)
	{
		this->visitor_team= visitor_team;
	};
	void change_result( std::string result1)
	{
		result= result1;
	};
	std::string return_name() { return league_name; };
	std::string return_home_team() { return home_team; };
	std::string return_visitor_team() { return visitor_team; };
	std::string return_result() { return result; };
	void vivod() { std::cout << league_name<<" "<<home_team<<" "<<result<<" "<< visitor_team<<"\n"; };
	//~game();
};

