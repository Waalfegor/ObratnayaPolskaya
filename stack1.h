#ifndef STACK1_H_

#include <iostream>
using namespace std;

class stack1
{
private:

    int head = 0; //указывает на "голову" стека
    char body[100]; //определяет тело стэка для удобства
    char input[100], output[100]; //орпеделяем входящиме и выходящие данные
    int iterator, j = 0; //определяем индексы

public:

    bool empty(); //проверяет пуст ли стэк

    char get_head_element(); //возвращает последний элемент

    int prior(char x); //приоритет в опз

    int head_prior(); //определяет приоритет 

    void push(char x); //добавляет в стэк

    char pop(); //удаляет из стэка

    void RPN(); //обрабатывает стэк

    void StackOut(); //вывод стэка

    void Run(); //выполнение программы
};

#endif STACK1_H_