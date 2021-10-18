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

league a1("РПЛ",16,"2020-2021","Россия");
team b1(a1,"Динамо", 10,9,1,15,3,"Москва");


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
                a.change_name(im);
                printf("Введите количество команд\n");
                scanf("%d",&i);
                a.change_value(i);
                printf("Введите сезон лиги\n");
                scanf("%s",&season);
                a.change_years( season);
                printf("Введите страну лиги\n");
                scanf("%s",&loc);
                a.change_loc(loc);
               
                
            }
            if (action == 2)
            {
                char im[50];
                printf("Введите название лиги\n");
                scanf("%s", &im);
                a.change_name(im);
            }
            if (action == 3)
            {
                int i;
                printf("Введите количество команд\n");
                scanf("%d", &i);
                a.change_value(i);

            }
            if (action == 4)
            {
                char season[9];
                printf("Введите сезон лиги\n");
                scanf("%s", &season);
                a.change_years(season);
            }
            if (action == 5)
            {
                char  loc[50];
                printf("Введите страну лиги\n");
                scanf("%s", &loc);
                a.change_loc(loc);
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
                b->change_name(im);
                printf("Введите количество команд\n");
                scanf("%d", &i);
                b->change_value(i);
                printf("Введите сезон лиги\n");
                scanf("%s", &season);
                b->change_years(season);
                printf("Введите страну лиги\n");
                scanf("%s", &loc);
                b->change_loc(loc);


            }
            if (action == 2)
            {
                char im[50];
                printf("Введите название лиги\n");
                scanf("%s", &im);
                b->change_name(im);
            }
            if (action == 3)
            {
                int i;
                printf("Введите количество команд\n");
                scanf("%d", &i);
                b->change_value(i);

            }
            if (action == 4)
            {
                char season[9];
                printf("Введите сезон лиги\n");
                scanf("%s", &season);
                b->change_years(season);
            }
            if (action == 5)
            {
                char  loc[50];
                printf("Введите страну лиги\n");
                scanf("%s", &loc);
                b->change_loc(loc);
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
        team a(a1);
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
                a.change_name(im);
                printf("Введите количество побед\n");
                scanf("%d", &i);
                a.change_wins(i);
                printf("Введите количество поражений\n");
                scanf("%d", &i);
                a.change_defeats(i);
                printf("Введите количество ничьих\n");
                scanf("%d", &i);
                a.change_draws(i);
                printf("Введите количество полевых игроков\n");
                scanf("%d", &i);
                a.change_value_of_field_players(i);
                printf("Введите количество вратарей\n");
                scanf("%d", &i);
                a.change_value_of_goalkeepers(i);
                printf("Введите город команды\n");
                scanf("%s", &loc);
                a.change_location(loc);


            }
            if (action == 2)
            {
                char im[50];
                printf("Введите название команды\n");
                scanf("%s", &im);
                a.change_name(im);
            }
            if (action == 3)
            {
                int i;
                printf("Введите количество побед\n");
                scanf("%d", &i);
                a.change_wins(i);

            }
            if (action == 4)
            {
                int i;
                printf("Введите количество поражений\n");
                scanf("%d", &i);
                a.change_defeats(i);
            }
            if (action == 5)
            {
                int i;
                printf("Введите количество ничьих\n");
                scanf("%d", &i);
                a.change_draws(i);
            }
            if (action == 6)
            {
                int i;
                printf("Введите количество полевых игроков\n");
                scanf("%d", &i);
                a.change_value_of_field_players(i);
            }
            if (action == 7)
            {
                int i;
                printf("Введите количество вратарей\n");
                scanf("%d", &i);
                a.change_value_of_goalkeepers(i);

            }
            if (action == 8)
            {
                char loc[50];
                printf("Введите город команды\n");
                scanf("%s", &loc);
                a.change_location(loc);
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
                b->change_name(im);
                printf("Введите количество побед\n");
                scanf("%d", &i);
                b->change_wins(i);
                printf("Введите количество поражений\n");
                scanf("%d", &i);
                b->change_defeats(i);
                printf("Введите количество ничьих\n");
                scanf("%d", &i);
                b->change_draws(i);
                printf("Введите количество полевых игроков\n");
                scanf("%d", &i);
                b->change_value_of_field_players(i);
                printf("Введите количество вратарей\n");
                scanf("%d", &i);
                b->change_value_of_goalkeepers(i);
                printf("Введите город команды\n");
                scanf("%s", &loc);
                b->change_location(loc);


            }
            if (action == 2)
            {
                char im[50];
                printf("Введите название команды\n");
                scanf("%s", &im);
                b->change_name(im);
            }
            if (action == 3)
            {
                int i;
                printf("Введите количество побед\n");
                scanf("%d", &i);
                b->change_wins(i);

            }
            if (action == 4)
            {
                int i;
                printf("Введите количество поражений\n");
                scanf("%d", &i);
                b->change_defeats(i);
            }
            if (action == 5)
            {
                int i;
                printf("Введите количество ничьих\n");
                scanf("%d", &i);
                b->change_draws(i);
            }
            if (action == 6)
            {
                int i;
                printf("Введите количество полевых игроков\n");
                scanf("%d", &i);
                b->change_value_of_field_players(i);
            }
            if (action == 7)
            {
                int i;
                printf("Введите количество вратарей\n");
                scanf("%d", &i);
                b->change_value_of_goalkeepers(i);
            }
            if (action == 8)
            {
                char loc[50];
                printf("Введите город команды\n");
                scanf("%s", &loc);
                b->change_location(loc);
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
                a.change_name(im);
                printf("Введите возраст\n");
                scanf("%d", &i);
                a.change_age(i);
                printf("Введите количество голов вратаря\n");
                scanf("%d", &i);
                a.change_goals(i);
                printf("Введите количество асистов вратаря\n");
                scanf("%d", &i);
                a.change_assists(i);
                printf("Введите количество красных карточек\n");
                scanf("%d", &i);
                a.change_red_cards(i);
                printf("Введите количество желтых карточек\n");
                scanf("%d", &i);
                a.change_yellow_cards(i);
                printf("Введите количество пропущенных мячей\n");
                scanf("%d", &i);
                a.change_missed_balls(i);
                printf("Введите национальность вратаря\n");
                scanf("%s", &loc);
                a.change_nation(loc);
                printf("Введите вес вратаря\n");
                scanf("%d", &i);
                a.change_weight(i);
                printf("Введите рост вратаря\n");
                scanf("%d", &i);
                a.change_height(i);
            }
            if (action == 2)
            {
                char im[50];
                printf("Введите имя вратаря\n");
                scanf("%s", &im);
                a.change_name(im);
            }
            if (action == 3)
            {
                int i;
                printf("Введите возраст\n");
                scanf("%d", &i);
                a.change_age(i);

            }
            if (action == 4)
            {
                int i;
                printf("Введите количество голов вратаря\n");
                scanf("%d", &i);
                a.change_goals(i);
            }
            if (action == 5)
            {
                int i;
                printf("Введите количество асистов вратаря\n");
                scanf("%d", &i);
                a.change_assists(i);
            }
            if (action == 6)
            {
                int i;
                printf("Введите количество красных карточек\n");
                scanf("%d", &i);
                a.change_red_cards(i);
            }
            if (action == 7)
            {
                int i;
                printf("Введите количество желтых карточек\n");
                scanf("%d", &i);
                a.change_yellow_cards(i);

            }
            if (action == 8)
            {
                int i;
                printf("Введите количество пропущенных мячей\n");
                scanf("%d", &i);
                a.change_missed_balls(i);
            }
            if (action==9)
            {
                char loc[50];
                printf("Введите национальность вратаря\n");
                scanf("%s", &loc);
                a.change_nation(loc);
            }
            if (action == 10)
            {
                int i;
                printf("Введите вес вратаря\n");
                scanf("%d", &i);
                a.change_height(i);

            }
            if (action == 11)
            {
                int i;
                printf("Введите рост вратаря\n");
                scanf("%d", &i);
                a.change_height(i);

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
                b->change_name(im);
                printf("Введите возраст\n");
                scanf("%d", &i);
                b->change_age(i);
                printf("Введите количество голов вратаря\n");
                scanf("%d", &i);
                b->change_goals(i);
                printf("Введите количество асистов вратаря\n");
                scanf("%d", &i);
                b->change_assists(i);
                printf("Введите количество красных карточек\n");
                scanf("%d", &i);
                b->change_red_cards(i);
                printf("Введите количество желтых карточек\n");
                scanf("%d", &i);
                b->change_yellow_cards(i);
                printf("Введите количество пропущенных мячей\n");
                scanf("%d", &i);
                b->change_missed_balls(i);
                printf("Введите национальность вратаря\n");
                scanf("%s", &loc);
                b->change_nation(loc);
                printf("Введите вес вратаря\n");
                scanf("%d", &i);
                b->change_weight(i);
                printf("Введите рост вратаря\n");
                scanf("%d", &i);
                b->change_height(i);
            }
            if (action == 2)
            {
                char im[50];
                printf("Введите имя вратаря\n");
                scanf("%s", &im);
                b->change_name(im);
            }
            if (action == 3)
            {
                int i;
                printf("Введите возраст\n");
                scanf("%d", &i);
                b->change_age(i);

            }
            if (action == 4)
            {
                int i;
                printf("Введите количество голов вратаря\n");
                scanf("%d", &i);
                b->change_goals(i);
            }
            if (action == 5)
            {
                int i;
                printf("Введите количество асистов вратаря\n");
                scanf("%d", &i);
                b->change_assists(i);
            }
            if (action == 6)
            {
                int i;
                printf("Введите количество красных карточек\n");
                scanf("%d", &i);
                b->change_red_cards(i);
            }
            if (action == 7)
            {
                int i;
                printf("Введите количество желтых карточек\n");
                scanf("%d", &i);
                b->change_yellow_cards(i);

            }
            if (action == 8)
            {
                int i;
                printf("Введите количество пропущенных мячей\n");
                scanf("%d", &i);
                b->change_missed_balls(i);
            }
            if (action == 9)
            {
                char loc[50];
                printf("Введите национальность вратаря\n");
                scanf("%s", &loc);
                b->change_nation(loc);
            }
            if (action == 10)
            {
                int i;
                printf("Введите вес вратаря\n");
                scanf("%d", &i);
                b->change_height(i);

            }
            if (action == 11)
            {
                int i;
                printf("Введите рост вратаря\n");
                scanf("%d", &i);
                b->change_height(i);
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
                a.change_name(im);
                printf("Введите возраст\n");
                scanf("%d", &i);
                a.change_age(i);
                printf("Введите количество голов полевого игрока\n");
                scanf("%d", &i);
                a.change_goals(i);
                printf("Введите количество асистов полевого игрока\n");
                scanf("%d", &i);
                a.change_assists(i);
                printf("Введите количество красных карточек\n");
                scanf("%d", &i);
                a.change_red_cards(i);
                printf("Введите количество желтых карточек\n");
                scanf("%d", &i);
                a.change_yellow_cards(i);
                printf("Введите позицию\n");
                scanf("%s", &pos);
                a.change_position(pos);
                printf("Введите национальность полевого игрока\n");
                scanf("%s", &loc);
                a.change_nation(loc);
                printf("Введите вес полевого игрока\n");
                scanf("%d", &i);
                a.change_weight(i);
                printf("Введите рост полевого игрока\n");
                scanf("%d", &i);
                a.change_height(i);
            }
            if (action == 2)
            {
                char im[50];
                printf("Введите имя полевого игрока\n");
                scanf("%s", &im);
                a.change_name(im);
            }
            if (action == 3)
            {
                int i;
                printf("Введите возраст\n");
                scanf("%d", &i);
                a.change_age(i);

            }
            if (action == 4)
            {
                int i;
                printf("Введите количество голов полевого игрока\n");
                scanf("%d", &i);
                a.change_goals(i);
            }
            if (action == 5)
            {
                int i;
                printf("Введите количество асистов полевого игрока\n");
                scanf("%d", &i);
                a.change_assists(i);
            }
            if (action == 6)
            {
                int i;
                printf("Введите количество красных карточек\n");
                scanf("%d", &i);
                a.change_red_cards(i);
            }
            if (action == 7)
            {
                int i;
                printf("Введите количество желтых карточек\n");
                scanf("%d", &i);
                a.change_yellow_cards(i);

            }
            if (action == 8)
            {
                char pos[15];
                printf("Введите позицию\n");
                scanf("%s", &pos);
                a.change_position(pos);
            }
            if (action == 9)
            {
                char loc[50];
                printf("Введите национальность полевого игрока\n");
                scanf("%s", &loc);
                a.change_nation(loc);
            }
            if (action == 10)
            {
                int i;
                printf("Введите вес полевого игрока\n");
                scanf("%d", &i);
                a.change_height(i);

            }
            if (action == 11)
            {
                int i;
                printf("Введите рост полевого игрока\n");
                scanf("%d", &i);
                a.change_height(i);

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
                b->change_name(im);
                printf("Введите возраст\n");
                scanf("%d", &i);
                b->change_age(i);
                printf("Введите количество голов полевого игрока\n");
                scanf("%d", &i);
                b->change_goals(i);
                printf("Введите количество асистов полевого игрока\n");
                scanf("%d", &i);
                b->change_assists(i);
                printf("Введите количество красных карточек\n");
                scanf("%d", &i);
                b->change_red_cards(i);
                printf("Введите количество желтых карточек\n");
                scanf("%d", &i);
                b->change_yellow_cards(i);
                printf("Введите позицию\n");
                scanf("%s", &pos);
                b->change_position(pos);
                printf("Введите национальность полевого игрока\n");
                scanf("%s", &loc);
                b->change_nation(loc);
                printf("Введите вес полевого игрока\n");
                scanf("%d", &i);
                b->change_weight(i);
                printf("Введите рост полевого игрока\n");
                scanf("%d", &i);
                b->change_height(i);
            }
            if (action == 2)
            {
                char im[50];
                printf("Введите имя полевого игрока\n");
                scanf("%s", &im);
                b->change_name(im);
            }
            if (action == 3)
            {
                int i;
                printf("Введите возраст\n");
                scanf("%d", &i);
                b->change_age(i);

            }
            if (action == 4)
            {
                int i;
                printf("Введите количество голов полевого игрока\n");
                scanf("%d", &i);
                b->change_goals(i);
            }
            if (action == 5)
            {
                int i;
                printf("Введите количество асистов полевого игрока\n");
                scanf("%d", &i);
                b->change_assists(i);
            }
            if (action == 6)
            {
                int i;
                printf("Введите количество красных карточек\n");
                scanf("%d", &i);
                b->change_red_cards(i);
            }
            if (action == 7)
            {
                int i;
                printf("Введите количество желтых карточек\n");
                scanf("%d", &i);
                b->change_yellow_cards(i);

            }
            if (action == 8)
            {
                char pos[15];
                printf("Введите позицию\n");
                scanf("%s", &pos);
                b->change_position(pos);
            }
            if (action == 9)
            {
                char loc[50];
                printf("Введите национальность полевого игрока\n");
                scanf("%s", &loc);
                b->change_nation(loc);
            }
            if (action == 10)
            {
                int i;
                printf("Введите вес полевого игрока\n");
                scanf("%d", &i);
                b->change_height(i);

            }
            if (action == 11)
            {
                int i;
                printf("Введите рост полевого игрока\n");
                scanf("%d", &i);
                b->change_height(i);
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
        //func5
    }
    printf("Вы хотите продолжить? 1 - да, 0 - нет ");
    scanf("%d",&check);
    }
    _getch();
}


