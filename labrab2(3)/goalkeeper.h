#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include "player.h"

class goalkeeper:public player
{
private:
	int games;
	int goals;
	int assists;
	int red_cards;
	int yellow_cards;
	int missed_balls;
	int weight;
	int height;
	//////////////////////////func
public:
	goalkeeper operator=(player pl)
	{
		change_name(pl.return_name());
		change_nation(pl.return_nation());
		change_age(pl.return_age());
		return *this;
	};
	goalkeeper() {};
	goalkeeper( std::string name1,int age1,int games1,int goals1, int assists1,int red1,int yellow1,int miss1, std::string nation1, int weig1, int heig1 )
	{
		player(name1, age1, nation1);
		games = games1;
		goals = goals1;
		assists = assists1;
		red_cards = red1;
		yellow_cards = yellow1;
		missed_balls = miss1;
		weight = weig1;
		height = heig1;
	};
	goalkeeper(std::string name1) { change_name(name1); };
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

	int return_games() { return games; };
	int return_goals() { return goals; };
	int return_assists() {return assists;};
	int return_red_cards() {return red_cards;};
	int return_yellow_cards() { return yellow_cards; };
	int return_missed_balls() { return missed_balls; };
	int return_weight() {return weight;};
	int return_height() { return height; };
	//~goalkeeper();
	//void vivod() { std::cout<<return_name()<<" "<<return_nation()<<" "<<return_age()<<" "<< games<<" "<< goals<<" "<< assists<<" "<< red_cards<<" "<< yellow_cards<<" "<< missed_balls<<" "<< weight<<" "<< height; };
	friend std::ostream& operator<<(std::ostream& os, goalkeeper gp)
	{
		os << gp.name <<" "<< gp.nation <<" "<< gp.age <<" "<< gp.games <<" "<< gp.goals <<" "<< gp.assists <<" "<< gp.red_cards <<" "<< gp.yellow_cards <<" "<< gp.missed_balls <<" "<< gp.weight <<" "<< gp.height;
		return os;
	};
};

