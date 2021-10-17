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

void func1() 
{
    int check = 1;
    while (check == 1)
    {
        league a,*b; 









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


