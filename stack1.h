#ifndef STACK1_H_

#include <iostream>
using namespace std;

class stack1
{
private:

    int head = 0; //��������� �� "������" �����
    char body[100]; //���������� ���� ����� ��� ��������
    char input[100], output[100]; //���������� ��������� � ��������� ������
    int iterator, j = 0; //���������� �������

public:

    bool empty(); //��������� ���� �� ����

    char get_head_element(); //���������� ��������� �������

    int prior(char x); //��������� � ���

    int head_prior(); //���������� ��������� 

    void push(char x); //��������� � ����

    char pop(); //������� �� �����

    void RPN(); //������������ ����

    void StackOut(); //����� �����

    void Run(); //���������� ���������
};

#endif STACK1_H_