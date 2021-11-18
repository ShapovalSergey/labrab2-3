#include "team.h"
#include "Class.h"
#include "game.h"
#include "field_player.h"
#include "goalkeeper.h"
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <conio.h>


void func1() 
{
    int check = 1; int mode; int action ;
    while (check == 1)
    {
        league a; 
        printf("Выберите с каким типом переменных вы хотите работать 1 - статический, 2 - динамический ");
        scanf("%d",&mode);
        while (mode==1)
        {
            printf("Выберите, что вы хотите сделать\n1)Ввести данные лиги\n2)Изменить имя лиги\n3)Изменить количество команд\n4)Изменить сезон лиги\n5)Изменить страну лиги\n6)Вывести данные лиги\n");
            scanf("%d",&action);
            if (action ==1)
            {
                char im[50],loc[50],season[9]; int i;
                printf("Введите название лиги\n");
                scanf("%s",&im);
                league_change_name(&a,im);
                printf("Введите количество команд\n");
                scanf("%d",&i);
                league_change_value(&a,i);
                printf("Введите сезон лиги\n");
                scanf("%s",&season);
                league_change_years(&a, season);
                printf("Введите страну лиги\n");
                scanf("%s",&loc);
                league_change_loc(&a,loc);
               
                
            }
            if (action == 2)
            {
                char im[50];
                printf("Введите название лиги\n");
                scanf("%s", &im);
                league_change_name(&a,im);
            }
            if (action == 3)
            {
                int i;
                printf("Введите количество команд\n");
                scanf("%d", &i);
                league_change_value(&a,i);

            }
            if (action == 4)
            {
                char season[9];
                printf("Введите сезон лиги\n");
                scanf("%s", &season);
                league_change_years(&a,season);
            }
            if (action == 5)
            {
                char  loc[50];
                printf("Введите страну лиги\n");
                scanf("%s", &loc);
                league_change_loc(&a,loc);
            }
            if (action == 6)
            {
                printf("%s %d %s %s\n",a.name,a.value_of_teams,a.years,a.location);
            }
            _getch();
            printf("Вы хотите продолжить с этим типом данных? 1 - да, 0 - нет ");
            scanf("%d", &mode);

        }
        league* b = (league*)malloc(sizeof(league));
        while (mode ==2)
        {
            
            printf("Выберите, что вы хотите сделать\n1)Ввести данные лиги\n2)Изменить имя лиги\n3)Изменить количество команд\n4)Изменить сезон лиги\n5)Изменить страну лиги\n6)Вывести данные лиги\n");
            scanf("%d", &action);
            if (action == 1)
            {
                char im[50], loc[50], season[9]; int i;
                printf("Введите название лиги\n");
                scanf("%s", &im);
                league_change_name(b,im);
                printf("Введите количество команд\n");
                scanf("%d", &i);
                league_change_value(b,i);
                printf("Введите сезон лиги\n");
                scanf("%s", &season);
                league_change_years(b, season);
                printf("Введите страну лиги\n");
                scanf("%s", &loc);
                league_change_loc(b, loc);


            }
            if (action == 2)
            {
                char im[50];
                printf("Введите название лиги\n");
                scanf("%s", &im);
                league_change_name(b, im);
            }
            if (action == 3)
            {
                int i;
                printf("Введите количество команд\n");
                scanf("%d", &i);
                league_change_value(b, i);

            }
            if (action == 4)
            {
                char season[9];
                printf("Введите сезон лиги\n");
                scanf("%s", &season);
                league_change_years(b, season);
            }
            if (action == 5)
            {
                char  loc[50];
                printf("Введите страну лиги\n");
                scanf("%s", &loc);
                league_change_loc(b, loc);
            }
            if (action == 6)
            {
                printf("%s %d %s %s\n", b->name, b->value_of_teams, b->years, b->location);
            }
            _getch();
            printf("Вы хотите продолжить с этим типом данных? 2 - да, 0 - нет ");
            scanf("%d", &mode);

        }




        printf("Вы хотите продолжить c этим классом? 1 - да, 0 - нет ");
        scanf("%d", &check);
    }
};


void func2() 
{
    int check = 1; int mode; int action;
    while (check == 1)
    {
        team a;
        printf("Выберите с каким типом переменных вы хотите работать 1 - статический, 2 - динамический ");
        scanf("%d", &mode);
        while (mode == 1)
        {
            printf("Выберите, что вы хотите сделать\n1)Ввести данные команды\n2)Изменить название команды\n3)Изменить количество побед команды\n4)Изменить количество поражений команды\n5)Изменить количество ничьих команды\n6)Изменить количество полевых игроков\n7)Изменить количество вратарей\n8)Изменить город команды\n9)Вывести данные команды\n");
            scanf("%d", &action);
            if (action == 1)
            {
                char im[50], loc[50]; int i;
                printf("Введите название команды\n");
                scanf("%s", &im);
                team_change_name(&a,im);
                printf("Введите количество побед\n");
                scanf("%d", &i);
                team_change_wins(&a,i);
                printf("Введите количество поражений\n");
                scanf("%d", &i);
                team_change_defeats(&a,i);
                printf("Введите количество ничьих\n");
                scanf("%d", &i);
                team_change_draws(&a,i);
                printf("Введите количество полевых игроков\n");
                scanf("%d", &i);
                team_change_value_of_field_players(&a,i);
                printf("Введите количество вратарей\n");
                scanf("%d", &i);
                team_change_value_of_goalkeepers(&a,i);
                printf("Введите город команды\n");
                scanf("%s", &loc);
                team_change_location(&a,loc);


            }
            if (action == 2)
            {
                char im[50];
                printf("Введите название команды\n");
                scanf("%s", &im);
                team_change_name(&a,im);
            }
            if (action == 3)
            {
                int i;
                printf("Введите количество побед\n");
                scanf("%d", &i);
                team_change_wins(&a, i);

            }
            if (action == 4)
            {
                int i;
                printf("Введите количество поражений\n");
                scanf("%d", &i);
                team_change_defeats(&a, i);
            }
            if (action == 5)
            {
                int i;
                printf("Введите количество ничьих\n");
                scanf("%d", &i);
                team_change_draws(&a, i);
            }
            if (action == 6)
            {
                int i;
                printf("Введите количество полевых игроков\n");
                scanf("%d", &i);
                team_change_value_of_field_players(&a, i);
            }
            if (action == 7)
            {
                int i;
                printf("Введите количество вратарей\n");
                scanf("%d", &i);
                team_change_value_of_goalkeepers(&a, i);

            }
            if (action == 8)
            {
                char loc[50];
                printf("Введите город команды\n");
                scanf("%s", &loc);
                team_change_location(&a, loc);
            }
            if (action == 9)
            {
                printf("%s %d %d %d %d %d %s \n", a.name, a.wins, a.defeats, a.draws,a.value_of_field_players,a.value_of_goalkeepers,a.location);
            }
            _getch();
            printf("Вы хотите продолжить с этим типом данных? 1 - да, 0 - нет ");
            scanf("%d", &mode);

        }
        team* b = (team*)malloc(sizeof(team));
        while (mode == 2)
        {
            printf("Выберите, что вы хотите сделать\n1)Ввести данные команды\n2)Изменить название команды\n3)Изменить количество побед команды\n4)Изменить количество поражений команды\n5)Изменить количество ничьих команды\n6)Изменить количество полевых игроков\n7)Изменить количество вратарей\n8)Изменить город команды\n9)Вывести данные команды\n");
            scanf("%d", &action);
            if (action == 1)
            {
                char im[50], loc[50]; int i;
                printf("Введите название команды\n");
                scanf("%s", &im);
                team_change_name(b,im);
                printf("Введите количество побед\n");
                scanf("%d", &i);
                team_change_wins(b, i);
                printf("Введите количество поражений\n");
                scanf("%d", &i);
                team_change_defeats(b, i);
                printf("Введите количество ничьих\n");
                scanf("%d", &i);
                team_change_draws(b, i);
                printf("Введите количество полевых игроков\n");
                scanf("%d", &i);
                team_change_value_of_field_players(b, i);
                printf("Введите количество вратарей\n");
                scanf("%d", &i);
                team_change_value_of_goalkeepers(b, i);
                printf("Введите город команды\n");
                scanf("%s", &loc);
                team_change_location(b, loc);


            }
            if (action == 2)
            {
                char im[50];
                printf("Введите название команды\n");
                scanf("%s", &im);
                team_change_name(b, im);
            }
            if (action == 3)
            {
                int i;
                printf("Введите количество побед\n");
                scanf("%d", &i);
                team_change_wins(b, i);

            }
            if (action == 4)
            {
                int i;
                printf("Введите количество поражений\n");
                scanf("%d", &i);
                team_change_defeats(b, i);
            }
            if (action == 5)
            {
                int i;
                printf("Введите количество ничьих\n");
                scanf("%d", &i);
                team_change_draws(b, i);
            }
            if (action == 6)
            {
                int i;
                printf("Введите количество полевых игроков\n");
                scanf("%d", &i);
                team_change_value_of_field_players(b, i);
            }
            if (action == 7)
            {
                int i;
                printf("Введите количество вратарей\n");
                scanf("%d", &i);
                team_change_value_of_goalkeepers(b, i);
            }
            if (action == 8)
            {
                char loc[50];
                printf("Введите город команды\n");
                scanf("%s", &loc);
                team_change_location(b, loc);
            }
            if (action == 9)
            {
                printf("%s %d %d %d %d %d %s \n", b->name, b->wins, b->defeats, b->draws, b->value_of_field_players, b->value_of_goalkeepers,b->location);
            }
            _getch();
            printf("Вы хотите продолжить с этим типом данных? 2 - да, 0 - нет ");
            scanf("%d", &mode);
        }
        printf("Вы хотите продолжить c этим классом? 1 - да, 0 - нет ");
        scanf("%d", &check);
    }
};

void func3() 
{
    int check = 1; int mode; int action;
    while (check == 1)
    {
        goalkeeper a;
        printf("Выберите с каким типом переменных вы хотите работать 1 - статический, 2 - динамический ");
        scanf("%d", &mode);
        while (mode ==1)
        {
            printf("Выберите, что вы хотите сделать\n1)Ввести  данные вратаря\n2)Изменить имя вратаря\n3)Изменить возраст вратаря\n4)Изменить количество голов вратаря\n5)Изменить количество асистов вратаря\n6)Изменить количество красных карточек\n7)Изменить количество желтых карточек\n8)Изменить количество пропущенных мячей\n9)Изменить национальность вратаря\n10)Изменить вес вратаря\n11)Изменить рост вратаря\n12)Вывести данные вратаря\n");
            scanf("%d", &action);
            if (action == 1)
            {
                char im[50], loc[50]; int i;
                printf("Введите имя вратаря\n");
                scanf("%s", &im);
                gp_change_name(&a,im);
                printf("Введите возраст\n");
                scanf("%d", &i);
                gp_change_age(&a, i);
                printf("Введите количество голов вратаря\n");
                scanf("%d", &i);
                gp_change_goals(&a, i);
                printf("Введите количество асистов вратаря\n");
                scanf("%d", &i);
                gp_change_assists(&a, i);
                printf("Введите количество красных карточек\n");
                scanf("%d", &i);
                gp_change_red_cards(&a, i);
                printf("Введите количество желтых карточек\n");
                scanf("%d", &i);
                gp_change_yellow_cards(&a, i);
                printf("Введите количество пропущенных мячей\n");
                scanf("%d", &i);
                gp_change_missed_balls(&a, i);
                printf("Введите национальность вратаря\n");
                scanf("%s", &loc);
                gp_change_nation(&a, loc);
                printf("Введите вес вратаря\n");
                scanf("%d", &i);
                gp_change_weight(&a, i);
                printf("Введите рост вратаря\n");
                scanf("%d", &i);
                gp_change_height(&a, i);
            }
            if (action == 2)
            {
                char im[50];
                printf("Введите имя вратаря\n");
                scanf("%s", &im);
                gp_change_name(&a, im);
            }
            if (action == 3)
            {
                int i;
                printf("Введите возраст\n");
                scanf("%d", &i);
                gp_change_age(&a, i);

            }
            if (action == 4)
            {
                int i;
                printf("Введите количество голов вратаря\n");
                scanf("%d", &i);
                gp_change_goals(&a, i);
            }
            if (action == 5)
            {
                int i;
                printf("Введите количество асистов вратаря\n");
                scanf("%d", &i);
                gp_change_assists(&a, i);
            }
            if (action == 6)
            {
                int i;
                printf("Введите количество красных карточек\n");
                scanf("%d", &i);
                gp_change_red_cards(&a, i);
            }
            if (action == 7)
            {
                int i;
                printf("Введите количество желтых карточек\n");
                scanf("%d", &i);
                gp_change_yellow_cards(&a, i);

            }
            if (action == 8)
            {
                int i;
                printf("Введите количество пропущенных мячей\n");
                scanf("%d", &i);
                gp_change_missed_balls(&a, i);
            }
            if (action==9)
            {
                char loc[50];
                printf("Введите национальность вратаря\n");
                scanf("%s", &loc);
                gp_change_nation(&a, loc);
            }
            if (action == 10)
            {
                int i;
                printf("Введите вес вратаря\n");
                scanf("%d", &i);
                gp_change_height(&a, i);

            }
            if (action == 11)
            {
                int i;
                printf("Введите рост вратаря\n");
                scanf("%d", &i);
                gp_change_height(&a, i);

            }
            if (action == 12)
            {
                printf("%s %d %d %d %d %d %s %d %d %d\n", a.name, a.age, a.goals, a.assists, a.red_cards, a.yellow_cards, a.nation,a.missed_balls,a.weight,a.height);
            }
            _getch();
            printf("Вы хотите продолжить с этим типом данных? 1 - да, 0 - нет ");
            scanf("%d", &mode);
        }
        goalkeeper* b = (goalkeeper*)malloc(sizeof(goalkeeper));
        while (mode==2)
        {
            printf("Выберите, что вы хотите сделать\n1)Ввести  данные вратаря\n2)Изменить имя вратаря\n3)Изменить возраст вратаря\n4)Изменить количество голов вратаря\n5)Изменить количество асистов вратаря\n6)Изменить количество красных карточек\n7)Изменить количество желтых карточек\n8)Изменить количество пропущенных мячей\n9)Изменить национальность вратаря\n10)Изменить вес вратаря\n11)Изменить рост вратаря\n12)Вывести данные вратаря\n");
            scanf("%d", &action);
            if (action == 1)
            {
                char im[50], loc[50]; int i;
                printf("Введите имя вратаря\n");
                scanf("%s", &im);
                gp_change_name(b, im);
                printf("Введите возраст\n");
                scanf("%d", &i);
                gp_change_age(b, i);
                printf("Введите количество голов вратаря\n");
                scanf("%d", &i);
                gp_change_goals(b, i);
                printf("Введите количество асистов вратаря\n");
                scanf("%d", &i);
                gp_change_assists(b, i);
                printf("Введите количество красных карточек\n");
                scanf("%d", &i);
                gp_change_red_cards(b, i);
                printf("Введите количество желтых карточек\n");
                scanf("%d", &i);
                gp_change_yellow_cards(b, i);
                printf("Введите количество пропущенных мячей\n");
                scanf("%d", &i);
                gp_change_missed_balls(b, i);
                printf("Введите национальность вратаря\n");
                scanf("%s", &loc);
                gp_change_nation(b, loc);
                printf("Введите вес вратаря\n");
                scanf("%d", &i);
                gp_change_weight(b, i);
                printf("Введите рост вратаря\n");
                scanf("%d", &i);
                gp_change_height(b, i);
            }
            if (action == 2)
            {
                char im[50];
                printf("Введите имя вратаря\n");
                scanf("%s", &im);
                gp_change_name(b, im);
            }
            if (action == 3)
            {
                int i;
                printf("Введите возраст\n");
                scanf("%d", &i);
                gp_change_age(b, i);

            }
            if (action == 4)
            {
                int i;
                printf("Введите количество голов вратаря\n");
                scanf("%d", &i);
                gp_change_goals(b, i);
            }
            if (action == 5)
            {
                int i;
                printf("Введите количество асистов вратаря\n");
                scanf("%d", &i);
                gp_change_assists(b, i);
            }
            if (action == 6)
            {
                int i;
                printf("Введите количество красных карточек\n");
                scanf("%d", &i);
                gp_change_red_cards(b, i);
            }
            if (action == 7)
            {
                int i;
                printf("Введите количество желтых карточек\n");
                scanf("%d", &i);
                gp_change_yellow_cards(b, i);

            }
            if (action == 8)
            {
                int i;
                printf("Введите количество пропущенных мячей\n");
                scanf("%d", &i);
                gp_change_missed_balls(b, i);
            }
            if (action == 9)
            {
                char loc[50];
                printf("Введите национальность вратаря\n");
                scanf("%s", &loc);
                gp_change_nation(b, loc);
            }
            if (action == 10)
            {
                int i;
                printf("Введите вес вратаря\n");
                scanf("%d", &i);
                gp_change_height(b, i);

            }
            if (action == 11)
            {
                int i;
                printf("Введите рост вратаря\n");
                scanf("%d", &i);
                gp_change_height(b,i);
            }
            if (action == 12)
            {
                printf("%s %d %d %d %d %d %s %d %d %d\n", b->name, b->age, b->goals, b->assists, b->red_cards, b->yellow_cards, b->nation, b->missed_balls, b->weight, b->height);
            }
            _getch();
            printf("Вы хотите продолжить с этим типом данных? 2 - да, 0 - нет ");
            scanf("%d", &mode);
        }
    printf("Вы хотите продолжить? 1 - да, 0 - нет ");
    scanf("%d", &check);
}
};

void func4()
{
    int check = 1; int mode; int action;
    while (check == 1)
    {
        field_player a;
        printf("Выберите с каким типом переменных вы хотите работать 1 - статический, 2 - динамический ");
        scanf("%d", &mode);
        while (mode == 1)
        {
            printf("Выберите, что вы хотите сделать\n1)Ввести  данные полевого игрока\n2)Изменить имя полевого игрока\n3)Изменить возраст полевого игрока\n4)Изменить количество голов полевого игрока\n5)Изменить количество асистов полевого игрока\n6)Изменить количество красных карточек\n7)Изменить количество желтых карточек\n8)Изменить позицию\n9)Изменить национальность полевого игрока\n10)Изменить вес полевого игрока\n11)Изменить рост полевого игрока\n12)Вывести данные полевого игрока\n");
            scanf("%d", &action);
            if (action == 1)
            {
                char im[50], loc[50]; int i; char pos[15];
                printf("Введите имя полевого игрока\n");
                scanf("%s", &im);
                fp_change_name(&a,im);
                printf("Введите возраст\n");
                scanf("%d", &i);
                fp_change_age(&a, i);
                printf("Введите количество голов полевого игрока\n");
                scanf("%d", &i);
                fp_change_goals(&a, i);
                printf("Введите количество асистов полевого игрока\n");
                scanf("%d", &i);
                fp_change_assists(&a, i);
                printf("Введите количество красных карточек\n");
                scanf("%d", &i);
                fp_change_red_cards(&a, i);
                printf("Введите количество желтых карточек\n");
                scanf("%d", &i);
                fp_change_yellow_cards(&a, i);
                printf("Введите позицию\n");
                scanf("%s", &pos);
                fp_change_position(&a, pos);
                printf("Введите национальность полевого игрока\n");
                scanf("%s", &loc);
                fp_change_nation(&a, loc);
                printf("Введите вес полевого игрока\n");
                scanf("%d", &i);
                fp_change_weight(&a, i);
                printf("Введите рост полевого игрока\n");
                scanf("%d", &i);
                fp_change_height(&a, i);
            }
            if (action == 2)
            {
                char im[50];
                printf("Введите имя полевого игрока\n");
                scanf("%s", &im);
                fp_change_name(&a, im);
            }
            if (action == 3)
            {
                int i;
                printf("Введите возраст\n");
                scanf("%d", &i);
                fp_change_age(&a, i);

            }
            if (action == 4)
            {
                int i;
                printf("Введите количество голов полевого игрока\n");
                scanf("%d", &i);
                fp_change_goals(&a, i);
            }
            if (action == 5)
            {
                int i;
                printf("Введите количество асистов полевого игрока\n");
                scanf("%d", &i);
                fp_change_assists(&a, i);
            }
            if (action == 6)
            {
                int i;
                printf("Введите количество красных карточек\n");
                scanf("%d", &i);
                fp_change_red_cards(&a, i);
            }
            if (action == 7)
            {
                int i;
                printf("Введите количество желтых карточек\n");
                scanf("%d", &i);
                fp_change_yellow_cards(&a, i);

            }
            if (action == 8)
            {
                char pos[15];
                printf("Введите позицию\n");
                scanf("%s", &pos);
                fp_change_position(&a, pos);
            }
            if (action == 9)
            {
                char loc[50];
                printf("Введите национальность полевого игрока\n");
                scanf("%s", &loc);
                fp_change_nation(&a, loc);
            }
            if (action == 10)
            {
                int i;
                printf("Введите вес полевого игрока\n");
                scanf("%d", &i);
                fp_change_height(&a, i);

            }
            if (action == 11)
            {
                int i;
                printf("Введите рост полевого игрока\n");
                scanf("%d", &i);
                fp_change_height(&a, i);

            }
            if (action == 12)
            {
                printf("%s %d %d %d %d %d %s %s %d %d\n", a.name, a.age, a.goals, a.assists, a.red_cards, a.yellow_cards, a.nation, a.position, a.weight, a.height);
            }
            _getch();
            printf("Вы хотите продолжить с этим типом данных? 1 - да, 0 - нет ");
            scanf("%d", &mode);
        }
        field_player* b = (field_player*)malloc(sizeof(field_player));
        while (mode == 2)
        {
            printf("Выберите, что вы хотите сделать\n1)Ввести  данные полевого игрока\n2)Изменить имя полевого игрока\n3)Изменить возраст полевого игрока\n4)Изменить количество голов полевого игрока\n5)Изменить количество асистов полевого игрока\n6)Изменить количество красных карточек\n7)Изменить количество желтых карточек\n8)Изменить позицию\n9)Изменить национальность полевого игрока\n10)Изменить вес полевого игрока\n11)Изменить рост полевого игрока\n12)Вывести данные полевого игрока\n");
            scanf("%d", &action);
            if (action == 1)
            {
                char im[50], loc[50]; int i;char pos[15];
                printf("Введите имя полевого игрока\n");
                scanf("%s", &im);
                fp_change_name(b,im);
                printf("Введите возраст\n");
                scanf("%d", &i);
                fp_change_age(b, i);
                printf("Введите количество голов полевого игрока\n");
                scanf("%d", &i);
                fp_change_goals(b, i);
                printf("Введите количество асистов полевого игрока\n");
                scanf("%d", &i);
                fp_change_assists(b, i);
                printf("Введите количество красных карточек\n");
                scanf("%d", &i);
                fp_change_red_cards(b, i);
                printf("Введите количество желтых карточек\n");
                scanf("%d", &i);
                fp_change_yellow_cards(b, i);
                printf("Введите позицию\n");
                scanf("%s", &pos);
                fp_change_position(b, pos);
                printf("Введите национальность полевого игрока\n");
                scanf("%s", &loc);
                fp_change_nation(b, loc);
                printf("Введите вес полевого игрока\n");
                scanf("%d", &i);
                fp_change_weight(b, i);
                printf("Введите рост полевого игрока\n");
                scanf("%d", &i);
                fp_change_height(b, i);
            }
            if (action == 2)
            {
                char im[50];
                printf("Введите имя полевого игрока\n");
                scanf("%s", &im);
                fp_change_name(b, im);
            }
            if (action == 3)
            {
                int i;
                printf("Введите возраст\n");
                scanf("%d", &i);
                fp_change_age(b, i);

            }
            if (action == 4)
            {
                int i;
                printf("Введите количество голов полевого игрока\n");
                scanf("%d", &i);
                fp_change_goals(b, i);
            }
            if (action == 5)
            {
                int i;
                printf("Введите количество асистов полевого игрока\n");
                scanf("%d", &i);
                fp_change_assists(b, i);
            }
            if (action == 6)
            {
                int i;
                printf("Введите количество красных карточек\n");
                scanf("%d", &i);
                fp_change_red_cards(b, i);
            }
            if (action == 7)
            {
                int i;
                printf("Введите количество желтых карточек\n");
                scanf("%d", &i);
                fp_change_yellow_cards(b, i);

            }
            if (action == 8)
            {
                char pos[15];
                printf("Введите позицию\n");
                scanf("%s", &pos);
                fp_change_position(b, pos);
            }
            if (action == 9)
            {
                char loc[50];
                printf("Введите национальность полевого игрока\n");
                scanf("%s", &loc);
                fp_change_nation(b, loc);
            }
            if (action == 10)
            {
                int i;
                printf("Введите вес полевого игрока\n");
                scanf("%d", &i);
                fp_change_height(b, i);

            }
            if (action == 11)
            {
                int i;
                printf("Введите рост полевого игрока\n");
                scanf("%d", &i);
                fp_change_height(b, i);
            }
            if (action == 12)
            {
                printf("%s %d %d %d %d %d %s %s %d %d\n", b->name, b->age, b->goals, b->assists, b->red_cards, b->yellow_cards, b->nation, b->position, b->weight, b->height);
            }
            _getch();
            printf("Вы хотите продолжить с этим типом данных? 2 - да, 0 - нет ");
            scanf("%d", &mode);
        }
        printf("Вы хотите продолжить? 1 - да, 0 - нет ");
        scanf("%d", &check);
    }
};

void func5() 
{
    int check = 1; int mode; int action;
    while (check == 1)
    {
        game a;
        printf("Выберите с каким типом переменных вы хотите работать 1 - статический, 2 - динамический ");
        scanf("%d", &mode);
        while (mode == 1)
        {
            printf("Выберите, что вы хотите сделать\n1)Ввести данные матча\n2)Изменить название лиги\n3)Изменить команду - хозяев\n4)Изменить команду - гостей\n5)Изменить результат матча\n6)Вывести данные матча\n");
            scanf("%d", &action);
            if (action == 1)
            {
                char im[50];
                printf("Введите название лиги\n");
                scanf("%s", &im);
                game_change_name(&a,im);
                printf("Введите команду - хозяев\n");
                scanf("%s", &im);
                game_change_home_team(&a, im);
                printf("Введите команду - гостей\n");
                scanf("%s", &im);
                game_change_visitor_team(&a, im);
                printf("Введите результат матч\n");
                scanf("%s", &im);
                game_change_result(&a, im);


            }
            if (action == 2)
            {
                char im[50];
                printf("Введите название лиги\n");
                scanf("%s", &im);
                game_change_name(&a, im);
            }
            if (action == 3)
            {
                char im[50];
                printf("Введите команду - хозяев\n");
                scanf("%s", &im);
                game_change_home_team(&a, im);

            }
            if (action == 4)
            {
                char im[50];
                printf("Введите команду - гостей\n");
                scanf("%s", &im);
                game_change_visitor_team(&a, im);
            }
            if (action == 5)
            {
                char im[50];
                printf("Введите результат матч\n");
                scanf("%s", &im);
                game_change_result(&a, im);
            }
            if (action == 6)
            {
                printf("%s\n%s %s %s\n", a.league_name, a.home_team, a.result, a.visitor_team);
            }
            _getch();
            printf("Вы хотите продолжить с этим типом данных? 1 - да, 0 - нет ");
            scanf("%d", &mode);

        }
        game* b = (game*)malloc(sizeof(game));
        while (mode == 2)
        {

            printf("Выберите, что вы хотите сделать\n1)Ввести данные матча\n2)Изменить название лиги\n3)Изменить команду - хозяев\n4)Изменить команду - гостей\n5)Изменить результат матча\n6)Вывести данные матча\n");
            scanf("%d", &action);
            if (action == 1)
            {
                char im[50];
                printf("Введите название лиги\n");
                scanf("%s", &im);
                game_change_name(b,im);
                printf("Введите команду - хозяев\n");
                scanf("%s", &im);
                game_change_home_team(b, im);
                printf("Введите команду - гостей\n");
                scanf("%s", &im);
                game_change_visitor_team(b, im);
                printf("Введите результат матч\n");
                scanf("%s", &im);
                game_change_result(b, im);


            }
            if (action == 2)
            {
                char im[50];
                printf("Введите название лиги\n");
                scanf("%s", &im);
                game_change_name(b, im);
            }
            if (action == 3)
            {
                char im[50];
                printf("Введите команду - хозяев\n");
                scanf("%s", &im);
                game_change_home_team(b, im);

            }
            if (action == 4)
            {
                char im[50];
                printf("Введите команду - гостей\n");
                scanf("%s", &im);
                game_change_visitor_team(b, im);
            }
            if (action == 5)
            {
                char im[50];
                printf("Введите результат матч\n");
                scanf("%s", &im);
                game_change_result(b, im);
            }
            if (action == 6)
            {
                printf("%s\n%s %s %s\n", b->league_name, b->home_team, b->result, b->visitor_team);
            }
            _getch();
            printf("Вы хотите продолжить с этим типом данных? 2 - да, 0 - нет ");
            scanf("%d", &mode);
        }
        printf("Вы хотите продолжить c этим классом? 1 - да, 0 - нет ");
        scanf("%d", &check);
    }
};
int main()
{
    setlocale(LC_ALL, "Russian"); int mode; int check = 1;
    while (check==1)
    {
    printf("Выберите с каким классом вы хотите работать\n1)Лига\n2)Команда\n3)Вратари\n4)Полевые\n5)Игры\n");
    scanf("%d",&mode);
    if (mode==1)
    {
        func1();
    }
    if (mode == 2)
    {
        func2();
    }
    if (mode == 3)
    {
        func3();
    }
    if (mode == 4)
    {
        func4();
    }
    if (mode == 5)
    {
        func5();
    }
    printf("Вы хотите продолжить? 1 - да, 0 - нет ");
    scanf("%d",&check);
    }
    _getch();
}


void delete_league(league *var)
{
    strcpy(var->location, "deleted");
    var->value_of_teams = 0;
    strcpy(var->name, "deleted");
    strcpy(var->years, "deleted");
};
void league_change_name(league *var, char* name1)
{
    strcpy(var->name, name1);
};
void league_change_value(league *var, int value)
{
    var->value_of_teams = value;
};
void league_change_years(league *var, char* years1)
{
    strcpy(var->years, years1);
};
void league_change_loc(league *var, char* location1)
{
    strcpy(var->location, location1);
};


void game_change_name(game *a, char* name1)
{
    strcpy(a->league_name, name1);
};
void game_change_home_team(game *a, char* home_team1)
{
    strcpy(a->home_team, home_team1);
};
void game_change_visitor_team(game *a, char* visitor_team1)
{
    strcpy(a->visitor_team, visitor_team1);
};
void game_change_result(game *a, char* result1)
{
    strcpy(a->result, result1);
};


void gp_change_name(goalkeeper *a, char* name1)
{
    strcpy(a->name, name1);
};
void gp_change_nation(goalkeeper *a, char* nation1)
{
    strcpy(a->nation, nation1);
};
void gp_change_games(goalkeeper *a, int games1)
{
    a->games = games1;
};
void gp_change_goals(goalkeeper *a, int goals1)
{
    a->goals = goals1;
};
void gp_change_age(goalkeeper *a, int age1)
{
    a->age = age1;
};
void gp_change_red_cards(goalkeeper *a, int red_cards1)
{
    a->red_cards = red_cards1;
};
void gp_change_yellow_cards(goalkeeper *a, int yellow_cards1)
{
    a->yellow_cards = yellow_cards1;
};
void gp_change_missed_balls(goalkeeper *a, int missed_balls1)
{
    a->missed_balls = missed_balls1;
};
void gp_change_weight(goalkeeper *a, int weight1)
{
    a->weight = weight1;
};
void gp_change_height(goalkeeper *a, int height1)
{
    a->height = height1;
};
void gp_change_assists(goalkeeper *a, int assists1)
{
    a->assists = assists1;
};


void fp_change_name(field_player *a, char* name1)
{
    strcpy(a->name, name1);
};
void fp_change_position(field_player *a, char* position1)
{
    strcpy(a->position, position1);
};
void fp_change_nation(field_player *a, char* nation1)
{
    strcpy(a->nation, nation1);
};
void fp_change_games(field_player *a, int games1)
{
    a->games = games1;
};
void fp_change_goals(field_player *a, int goals1)
{
    a->goals = goals1;
};
void fp_change_age(field_player *a, int age1)
{
    a->age = age1;
};
void fp_change_red_cards(field_player *a, int red_cards1)
{
    a->red_cards = red_cards1;
};
void fp_change_yellow_cards(field_player *a, int yellow_cards1)
{
    a->yellow_cards = yellow_cards1;
};
void fp_change_weight(field_player *a, int weight1)
{
    a->weight = weight1;
};
void fp_change_height(field_player *a, int height1)
{
    a->height = height1;
};
void fp_change_assists(field_player *a, int assists1)
{
    a->assists = assists1;
};

void team_change_name(team *a, char* name1)
{
    strcpy(a->name, name1);
};
void team_change_defeats(team *a, int defeats1)
{
    a->defeats = defeats1;
};
void team_change_draws(team *a, int draws1)
{
    a->draws = draws1;
};
void team_change_value_of_field_players(team *a, int value_of_field_players1)
{
    a->value_of_field_players = value_of_field_players1;
};
void team_change_value_of_goalkeepers(team *a, int value_of_goalkeepers1)
{
    a->value_of_goalkeepers = value_of_goalkeepers1;
};
void team_change_wins(team *a, int wins1)
{
    a->wins = wins1;
};
void team_change_location(team *a, char* location1)
{
    strcpy(a->location, location1);
};