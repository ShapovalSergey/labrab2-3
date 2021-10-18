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
        }




        printf("Вы хотите продолжить? 1 - да, 0 - нет ");
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
        //func3
    }
    if (mode == 4)
    {
        //func4
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


