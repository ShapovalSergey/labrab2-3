#include "team.h"
#include "Class.h"
#include "game.h"
#include "field_player.h"
#include "goalkeeper.h"
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
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
        league a,*b; 
        printf("Выберите с каким типом переменных вы хотите работать 1 - статический, 2 - динамический");
        scanf("%d",&mode);
        while (mode==1)
        {
            printf("Выберите, что вы хотите сделать\n1)Ввести данные лиги\n2)Изменить имя лиги\n3)Изменить количество команд\n4)Изменить сезон лиги\n5)Изменить страну лиги\n6)Вывести данные лиги\n");
            scanf("%d",&action);
            if (action ==1)
            {

            }
            if (action == 2)
            {

            }
            if (action == 3)
            {

            }
            if (action == 4)
            {

            }
            if (action == 5)
            {

            }
            if (action == 6)
            {

            }








        }

        while (mode ==2)
        {

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
        //func1
    }
    if (mode == 2)
    {
        //func2
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


