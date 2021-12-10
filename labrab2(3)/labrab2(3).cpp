#define _CRT_SECURE_NO_WARNINGS
//#include "team.h"
#include "Class.h"
#include "game.h"
//#include "field_player.h"
//#include "goalkeeper.h"
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <conio.h>

league a1("РПЛ",16,"2020-2021","Россия");
team b1("Динамо", 10, 9, 1, 15, 3, "Москва");
void input_full_league(league *a) 
{
char im[50],loc[50],season[15]; int i;
                printf("Введите название лиги\n");
                scanf("%s",&im);
                a->change_name(im);
                printf("Введите количество команд\n");
                scanf("%d",&i);
                a->change_value(i);
                printf("Введите сезон лиги\n");
                scanf("%s",&season);
                a->change_years( season);
                printf("Введите страну лиги\n");
                scanf("%s",&loc);
                a->change_loc(loc);
};
team operator + (team team1, team team2);
field_player& operator++(field_player fp);
field_player operator++(field_player fp,int i);

goalkeeper& operator++(goalkeeper fp);
goalkeeper operator++(goalkeeper fp, int i);
void input_full_team(team* a)
{
    char im[50], loc[50]; int i;
    printf("Введите название команды\n");
    scanf("%s", &im);
    a->change_name(im);
    printf("Введите количество побед\n");
    scanf("%d", &i);
    a->change_wins(i);
    printf("Введите количество поражений\n");
    scanf("%d", &i);
    a->change_defeats(i);
    printf("Введите количество ничьих\n");
    scanf("%d", &i);
    a->change_draws(i);
    printf("Введите количество полевых игроков\n");
    scanf("%d", &i);
    a->change_value_of_field_players(i);
    printf("Введите количество вратарей\n");
    scanf("%d", &i);
    a->change_value_of_goalkeepers(i);
    printf("Введите город команды\n");
    scanf("%s", &loc);
    a->change_location(loc);
};

void input_full_gp(goalkeeper* a) 
{
    char im[50], loc[50]; int i;
    printf("Введите имя вратаря\n");
    scanf("%s", &im);
    a->change_name(im);
    printf("Введите возраст\n");
    scanf("%d", &i);
    a->change_age(i);
    printf("Введите количество матчей вратаря\n");
    scanf("%d", &i);
    a->change_games(i);
    printf("Введите количество голов вратаря\n");
    scanf("%d", &i);
    a->change_goals(i);
    printf("Введите количество асистов вратаря\n");
    scanf("%d", &i);
    a->change_assists(i);
    printf("Введите количество красных карточек\n");
    scanf("%d", &i);
    a->change_red_cards(i);
    printf("Введите количество желтых карточек\n");
    scanf("%d", &i);
    a->change_yellow_cards(i);
    printf("Введите количество пропущенных мячей\n");
    scanf("%d", &i);
    a->change_missed_balls(i);
    printf("Введите национальность вратаря\n");
    scanf("%s", &loc);
    a->change_nation(loc);
    printf("Введите вес вратаря\n");
    scanf("%d", &i);
    a->change_weight(i);
    printf("Введите рост вратаря\n");
    scanf("%d", &i);
    a->change_height(i);
};

void input_full_fp(field_player* a) 
{
    char im[50], loc[50]; int i; char pos[15];
    printf("Введите имя полевого игрока\n");
    scanf("%s", &im);
    a->change_name(im);
    printf("Введите возраст\n");
    scanf("%d", &i);
    a->change_age(i);
    printf("Введите количество голов полевого игрока\n");
    scanf("%d", &i);
    a->change_goals(i);
    printf("Введите количество матчей полевого игрока\n");
    scanf("%d", &i);
    a->change_games(i);
    printf("Введите количество асистов полевого игрока\n");
    scanf("%d", &i);
    a->change_assists(i);
    printf("Введите количество красных карточек\n");
    scanf("%d", &i);
    a->change_red_cards(i);
    printf("Введите количество желтых карточек\n");
    scanf("%d", &i);
    a->change_yellow_cards(i);
    printf("Введите позицию\n");
    scanf("%s", &pos);
    a->change_position(pos);
    printf("Введите национальность полевого игрока\n");
    scanf("%s", &loc);
    a->change_nation(loc);
    printf("Введите вес полевого игрока\n");
    scanf("%d", &i);
    a->change_weight(i);
    printf("Введите рост полевого игрока\n");
    scanf("%d", &i);
    a->change_height(i);
};

void input_full_game(game* a) 
{
    char im[50];
    printf("Введите название лиги\n");
    scanf("%s", &im);
    a->change_name(im);
    printf("Введите команду - хозяев\n");
    scanf("%s", &im);
    a->change_home_team(im);
    printf("Введите команду - гостей\n");
    scanf("%s", &im);
    a->change_visitor_team(im);
    printf("Введите результат матч\n");
    scanf("%s", &im);
    a->change_result(im);
};

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
                input_full_league(&a);
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
                char season[15];
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
                a.vivod();
            }
            _getch();
            printf("\nВы хотите продолжить с этим типом данных? 1 - да, 0 - нет ");
            scanf("%d", &mode);
        }
        league* b = new league();
        while (mode ==2)
        {
            printf("Выберите, что вы хотите сделать\n1)Ввести данные лиги\n2)Изменить имя лиги\n3)Изменить количество команд\n4)Изменить сезон лиги\n5)Изменить страну лиги\n6)Вывести данные лиги\n");
            scanf("%d", &action);
            if (action == 1)
            {
                input_full_league(b);
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
                char season[15];
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
                b->vivod();
            }
            _getch();
            printf("\nВы хотите продолжить с этим типом данных? 2 - да, 0 - нет ");
            scanf("%d", &mode);
        }
        printf("Вы хотите продолжить c этим классом? 1 - да, 0 - нет ");
        scanf("%d", &check); 
        delete b;
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
                input_full_team(&a);
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
                team t3; t3 = operator+(a,b1);
                t3.vivod();
            }
            _getch();
            printf("\nВы хотите продолжить с этим типом данных? 1 - да, 0 - нет ");
            scanf("%d", &mode);
        }
        team* b = new team();
        while (mode == 2)
        {
            printf("Выберите, что вы хотите сделать\n1)Ввести данные команды\n2)Изменить название команды\n3)Изменить количество побед команды\n4)Изменить количество поражений команды\n5)Изменить количество ничьих команды\n6)Изменить количество полевых игроков\n7)Изменить количество вратарей\n8)Изменить город команды\n9)Вывести данные команды\n");
            scanf("%d", &action);
            if (action == 1)
            {
                input_full_team(b);
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
                b->vivod();
            }
            _getch();
            printf("\nВы хотите продолжить с этим типом данных? 2 - да, 0 - нет ");
            scanf("%d", &mode);
        }
        printf("Вы хотите продолжить c этим классом? 1 - да, 0 - нет ");
        scanf("%d", &check);
        delete b;        
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
                input_full_gp(&a);
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
                a.vivod();
            }
            _getch();
            printf("\nВы хотите продолжить с этим типом данных? 1 - да, 0 - нет ");
            scanf("%d", &mode);
        }
        goalkeeper* b = new goalkeeper();;
        while (mode==2)
        {
            printf("Выберите, что вы хотите сделать\n1)Ввести  данные вратаря\n2)Изменить имя вратаря\n3)Изменить возраст вратаря\n4)Изменить количество голов вратаря\n5)Изменить количество асистов вратаря\n6)Изменить количество красных карточек\n7)Изменить количество желтых карточек\n8)Изменить количество пропущенных мячей\n9)Изменить национальность вратаря\n10)Изменить вес вратаря\n11)Изменить рост вратаря\n12)Вывести данные вратаря\n");
            scanf("%d", &action);
            if (action == 1)
            {
                input_full_gp(b);
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
                b->vivod();
            }
            _getch();
            printf("\nВы хотите продолжить с этим типом данных? 2 - да, 0 - нет ");
            scanf("%d", &mode);
        }
        delete b;
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
                input_full_fp(&a);
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
                a.vivod();
            }
            _getch();
            printf("\nВы хотите продолжить с этим типом данных? 1 - да, 0 - нет ");
            scanf("%d", &mode);
        }
        field_player* b = new field_player();
        while (mode == 2)
        {
            printf("Выберите, что вы хотите сделать\n1)Ввести  данные полевого игрока\n2)Изменить имя полевого игрока\n3)Изменить возраст полевого игрока\n4)Изменить количество голов полевого игрока\n5)Изменить количество асистов полевого игрока\n6)Изменить количество красных карточек\n7)Изменить количество желтых карточек\n8)Изменить позицию\n9)Изменить национальность полевого игрока\n10)Изменить вес полевого игрока\n11)Изменить рост полевого игрока\n12)Вывести данные полевого игрока\n");
            scanf("%d", &action);
            if (action == 1)
            {
                input_full_fp(b);
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
                b->vivod();
            }
            _getch();
            printf("\nВы хотите продолжить с этим типом данных? 2 - да, 0 - нет ");
            scanf("%d", &mode);
        }
        delete b;
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
                input_full_game(&a);
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
                char im[50];
                printf("Введите команду - хозяев\n");
                scanf("%s", &im);
                a.change_home_team(im);
            }
            if (action == 4)
            {
                char im[50];
                printf("Введите команду - гостей\n");
                scanf("%s", &im);
                a.change_visitor_team(im);
            }
            if (action == 5)
            {
                char im[50];
                printf("Введите результат матч\n");
                scanf("%s", &im);
                a.change_result(im);
            }
            if (action == 6)
            {
                a.vivod();
            }
            _getch();
            printf("\nВы хотите продолжить с этим типом данных? 1 - да, 0 - нет ");
            scanf("%d", &mode);
        }
        game* b = new game();;
        while (mode == 2)
        {
            printf("Выберите, что вы хотите сделать\n1)Ввести данные матча\n2)Изменить название лиги\n3)Изменить команду - хозяев\n4)Изменить команду - гостей\n5)Изменить результат матча\n6)Вывести данные матча\n");
            scanf("%d", &action);
            if (action == 1)
            {
                input_full_game(b);
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
                char im[50];
                printf("Введите команду - хозяев\n");
                scanf("%s", &im);
                b->change_home_team(im);
            }
            if (action == 4)
            {
                char im[50];
                printf("Введите команду - гостей\n");
                scanf("%s", &im);
                b->change_visitor_team(im);
            }
            if (action == 5)
            {
                char im[50];
                printf("Введите результат матч\n");
                scanf("%s", &im);
                b->change_result(im);
            }
            if (action == 6)
            {
                b->vivod();
            }
            _getch();
            printf("\nВы хотите продолжить с этим типом данных? 2 - да, 0 - нет ");
            scanf("%d", &mode);
        }
        delete b;
        printf("Вы хотите продолжить c этим классом? 1 - да, 0 - нет ");
        scanf("%d", &check);
    }
};

void func6()
{
    int mode; int check = 1; game* b1 = new game; game* b2 = new game; int k; int action;
    game* b[2] = {b1,b2};
    while (check == 1)
    {   printf("Введите размерность динамического массива \n");
            scanf("%d", &k);
            game* mas = new game[k];
        printf("Выберите с чем вы хотите работать 1 - динамический массив, 2 - массив динамических объектов ");
        scanf("%d", &mode);
        while (mode == 1)
        {
            printf("Выберите, что вы хотите сделать\n1)Ввести данные матчей\n2)Изменить название лиги\n3)Изменить команду - хозяев\n4)Изменить команду - гостей\n5)Изменить результат матча\n6)Вывести данные матчей\n");
            scanf("%d", &action);
            if (action == 1)
            {
                char im[50];
                for (int i = 0; i < k; i++)
                {
                    input_full_game(&mas[i]);
                }
            }
                if (action == 2)
                {
                    char im[50]; int n;
                    printf("Введите номер элемента \n");
                    scanf("%d", &n);
                    printf("Введите название лиги\n");
                    scanf("%s", &im);
                    mas[n-1].change_name(im);
                }
                if (action == 3)
                {
                    char im[50]; int n;
                    printf("Введите номер элемента \n");
                    scanf("%d", &n);
                    printf("Введите команду - хозяев\n");
                    scanf("%s", &im);
                    mas[n-1].change_home_team(im);
                }
                if (action == 4)
                {
                    char im[50]; int n;
                    printf("Введите номер элемента \n");
                    scanf("%d", &n);
                    printf("Введите команду - гостей\n");
                    scanf("%s", &im);
                    mas[n-1].change_visitor_team(im);
                }
                if (action == 5)
                {
                    char im[50]; int n;
                    printf("Введите номер элемента \n");
                    scanf("%d", &n);
                    printf("Введите результат матч\n");
                    scanf("%s", &im);
                    mas[n-1].change_result(im);
                }
                if (action == 6)
                {
                    for (int i = 0; i < k; i++)
                    {
                        printf("%d) %s\n%s %s %s\n",i+1, mas[i].return_name(), mas[i].return_home_team(), mas[i].return_result(), mas[i].return_visitor_team());
                        printf("---------------------------------------------------------------------------------------------------------\n");
                    }
                }
                _getch();
                printf("Вы хотите продолжить с этим типом массива? 1 - да, 0 - нет ");
                scanf("%d", &mode);
                if (mode == 0)
                {
                    delete mas;
                }
            }
            while (mode == 2)
            {
                char im[50];
                printf("Введите название лиги\n");
                scanf("%s", &im);
                b[0]->change_name(im);
                printf("Введите команду - хозяев\n");
                scanf("%s", &im);
                b[0]->change_home_team(im);
                printf("Введите команду - гостей\n");
                scanf("%s", &im);
                b[0]->change_visitor_team(im);
                printf("Введите результат матч\n");
                scanf("%s", &im);
                b[0]->change_result(im);
                printf("\n-----------------------------------------------\n");
                printf("Введите название лиги\n");
                scanf("%s", &im);
                b[1]->change_name(im);
                printf("Введите команду - хозяев\n");
                scanf("%s", &im);
                b[1]->change_home_team(im);
                printf("Введите команду - гостей\n");
                scanf("%s", &im);
                b[1]->change_visitor_team(im);
                printf("Введите результат матч\n");
                scanf("%s", &im);
                b[1]->change_result(im);
                printf("\n-----------------------------------------------\n");
                printf("Вы ввели:\n");
                printf("-----------------------------------------------\n");
                for (int i = 0; i < 2; i++)
                {
                    printf("%d)%s\n%s %s %s\n", i + 1, b[i]->return_name(), b[i]->return_home_team(), b[i]->return_result(), b[i]->return_visitor_team());
                    printf("\n-----------------------------------------------\n");
                }
                _getch();
                printf("Вы хотите продолжить с этим типом массива? 2 - да, 0 - нет ");
                scanf("%d", &mode);
            }
            printf("Вы хотите продолжить c этим классом? 1 - да, 0 - нет ");
            scanf("%d", &check);
        }
};

void association_pl_tm() 
{
    int check = 1; int val_team, val_player; int mode;
    printf("\nВведите количество команд "); scanf("%d",&val_team);team* kom=new team[val_team] ;
    printf("\nВведите количество полевых игроков "); scanf("%d", &val_player); field_player* igr = new field_player[val_player];
        for (int i = 0; i < val_team; i++)
        {
            printf("%d)", i + 1); input_full_team(&kom[i]); printf("\n----------------------------------------------\n");
        }
        for (int i = 0; i < val_player; i++)
        {
            printf("%d)", i + 1); input_full_fp(&igr[i]); printf("\n----------------------------------------------\n");
        }
    while (check==1)
    {
        
        printf("\nВыберите, что вы хотите сделать\n1)Вывести список всех игроков\n2)Вывести список команд\n3)Выполнить ассоциацию команда - игрок\n4)Вывести игроков команды\n");
        scanf("%d",&mode);
        if (mode == 1)
        {
            for (int i = 0; i < val_player; i++)
            {
                printf("%d) %s\n",i+1,igr[i].return_name());
            }
        }
        if (mode == 2)
        {
            for (int i = 0; i < val_team; i++)
            {
                printf("%d) %s\n", i + 1, kom[i].return_name());
            }
        }
        if (mode == 3)
        {
            int pl,tm; printf("Выберите игрока \n");
            for (int i = 0; i < val_player; i++)
            {
                printf("%d) %s\n", i + 1, igr[i].return_name());
            }
            scanf("%d", &pl); while ((pl<1)||(pl>val_player))
            {
                printf("Введите номер игрока из списка\n");
                scanf("%d", &pl);
            }
            printf("Введите номер команды\n");
            for (int i = 0; i < val_team; i++)
            {
                printf("%d) %s\n", i + 1, kom[i].return_name());
            }
            scanf("%d", &tm); while ((tm < 1) || (tm > val_team))
            {
                printf("Введите номер команды из списка\n");
                scanf("%d", &pl);
            }
             kom[tm - 1].Addfp(&igr[pl-1]);
            printf("Ассоциация выполненина\n");
        }
        if (mode == 4)
        {
            int tm; printf("Выберите команду \n");
            for (int i = 0; i < val_team; i++)
            {
                printf("%d) %s\n", i + 1, kom[i].return_name());
            }
            scanf("%d", &tm); while ((tm < 1) || (tm > val_team))
            {
                printf("Введите номер команды из списка\n");
                scanf("%d", &tm);
            }
            if (kom[tm-1].fp.empty())
            {
                printf("В команде нет игроков\n");
            }
            else
            {
                kom[tm - 1].fp_vivod();;
            }   
        }
        printf("\nВы хотите продолжить работать с данной ассоциацией 1 - да, 0 - нет ");
        scanf("%d", &check);
    }
};

void association_tm_lg()
{
    int check = 1; int val_league, val_team; int mode;char nul [2]= "\0";
    printf("\nВведите количество лиг "); scanf("%d",&val_league);league* lea=new league[val_league] ;
    printf("\nВведите количество команд "); scanf("%d", &val_team); team* tm = new team[val_team];
        for (int i = 0; i < val_league; i++)
        {
            printf("%d)", i + 1); input_full_league(&lea[i]); lea[i].tm.change_name(nul); printf("\n----------------------------------------------\n");
        }
        for (int i = 0; i < val_team; i++)
        {
            printf("%d)", i + 1); input_full_team(&tm[i]); printf("\n----------------------------------------------\n");
        }
    while (check==1)
    {
        
        printf("\nВыберите, что вы хотите сделать\n1)Вывести список команд\n2)Вывести список лиг\n3)Выполнить ассоциацию лига - команда\n4)Вывести команды лиги\n");
        scanf("%d",&mode);
        if (mode == 1)
        {
            for (int i = 0; i < val_team; i++)
            {
                printf("%d) %s\n",i+1,tm[i].return_name());
            }
        }
        if (mode == 2)
        {
            for (int i = 0; i < val_league; i++)
            {
                printf("%d) %s\n", i + 1, lea[i].return_name());
            }
        }
        if (mode == 3)
        {
            int leag,team; printf("Выберите команду \n");
            for (int i = 0; i < val_team; i++)
            {
                printf("%d) %s\n", i + 1, tm[i].return_name());
            }
            scanf("%d", &team); while ((team<1)||(team>val_team))
            {
                printf("Введите номер команды из списка\n");
                scanf("%d", &team);
            }
            printf("Введите номер лиги\n");
            for (int i = 0; i < val_league; i++)
            {
                printf("%d) %s\n", i + 1, lea[i].return_name());
            }
            scanf("%d", &leag); while ((leag < 1) || (leag > val_league))
            {
                printf("Введите номер команды из списка\n");
                scanf("%d", &leag);
            }
            lea[leag - 1].Addteam(&tm[team-1]);
            printf("Ассоциация выполненина\n");
        }
        if (mode == 4)
        {
            int leag; printf("Выберите лигу \n");team km;
            for (int i = 0; i < val_league; i++)
            {
                printf("%d) %s\n", i + 1, tm[i].return_name());
            }
            scanf("%d", &leag); while ((leag < 1) || (leag > val_league))
            {
                printf("Введите номер лиги из списка\n");
                scanf("%d", &leag);
            }
            if (lea[leag-1].tm.return_name()[0]=='\0')
            {
                printf("В лиге нет команд\n");
            }
            else
            {
                km = lea[leag - 1].return_team();
                km.vivod();
               // lea[leag - 1].teamvivod();
            }   
        }
        printf("\nВы хотите продолжить работать с данной ассоциацией 1 - да, 0 - нет ");
        scanf("%d", &check);
    }
};

void func7() 
{
    int check = 1; int mode;
    while (check==1)
    {
       // league *a=new league("РПЛ", 16, "2020-2021", "Россия");
       // team *b=new team("Динамо", 10, 9, 1, 15, 3, "Москва");
       // b->AddLeague(a);
       // b->vivod();
       // b->league_vivod();
        printf("Выберите с чем вы хотите работать\n1)Ассоциация игрок - команда \n2)Ассоциация команда - лига\n");
        scanf("%d", &mode);
        if (mode ==1)
        {
            association_pl_tm();
        }
        if (mode = 2)
        {
            association_tm_lg();
        }
        printf("\nВы хотите продолжить работать с пунктом 7 (реализация ассоциаций)? 1 - да, 0 - нет ");
        scanf("%d",&check);
    }
};

int stat(team& tm)
{
    int points;
    points = tm.wins * 3 + tm.draws;
    //printf("\nКоличество очков команды = %d", points);
    return points;
};
team operator + (team team1, team team2) 
{ 
    team t3;
    t3.change_name(team1.return_name() + team2.return_name());
    t3.change_draws(team1.return_draws() + team2.return_draws());
    t3.change_defeats(team1.return_defeats() + team2.return_defeats());
    t3.change_wins(team1.return_wins() + team2.return_wins());
    t3.change_value_of_field_players(team1.return_value_of_field_players() + team2.return_value_of_field_players());
    t3.change_value_of_goalkeepers(team1.return_value_of_goalkeepers() + team2.return_value_of_goalkeepers());
    t3.change_location(team1.return_location() + team2.return_location());
    return t3;
};
field_player operator++(field_player fp,int i) 
{
   field_player fp1 = fp;
   fp.change_age(fp.return_age()+i);
   return fp1;
};
field_player& operator++(field_player fp)
{
    fp.change_age(fp.return_age() + 1);
    return fp;
};
goalkeeper operator++(goalkeeper fp, int i)
{
    goalkeeper fp1 = fp;
    fp.change_age(fp.return_age() + i);
    return fp1;
};
goalkeeper& operator++(goalkeeper fp)
{
    fp.change_age(fp.return_age() + 1);
    return fp;
};


int main()
 {
    setlocale(LC_ALL, "Russian"); int mode; int check = 1; SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    while (check==1)
    {
    printf("Выберите с каким классом вы хотите работать\n1)Лига\n2)Команда\n3)Вратари\n4)Полевые\n5)Игры\n6)Динамический массив или массив динамических объектов (класс game)\n7)Реализация ассоциаций\n");
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
    if (mode == 6)
    {
        func6();
    }
    if (mode == 7)
    {
        func7();
    }
    printf("Вы хотите продолжить? 1 - да, 0 - нет ");
    scanf("%d",&check);
    }
    _getch();
}


