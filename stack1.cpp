#include "stack1.h"

bool stack1::empty()
{
    return head == 0;
}

char stack1::get_head_element()
{
    return body[head];
}

int stack1::prior(char x)
{
    if ((x == '(') || (x == ')')) return 0;
    if ((x == '+') || (x == '-')) return 1;
    if ((x == '*') || (x == '/')) return 2;
}

int stack1::head_prior()
{
    return prior(body[head]);
}

void stack1::push(char x)
{
    head++;
    body[head] = x;
}

char stack1::pop()
{
    head--;
    return body[head + 1];
}

void stack1::RPN()
{
    for (iterator = 0; iterator < strlen(input); iterator++) //������������ ������� ������
    {
        if (input[iterator] == '(') push(input[iterator]);


        else if ((input[iterator] == '+') || (input[iterator] == '-') || (input[iterator] == '/') || (input[iterator] == '*')) //���������
        {
            while ((!empty()) && (head_prior() > prior(input[iterator]))) //���������� �� ���������
            {
                j++;
                output[j] = pop();
            }
            push(input[iterator]);
        }


        else if (input[iterator] == ')')
        {
            while ((!empty()) && (get_head_element() != '(')) //��������� �� �����
            {
                j++;
                output[j] = pop();
            }
            pop();
        }


        else //��������� �� ����� �����
        {
            j++;
            output[j] = input[iterator];
        }

    }


    while (!empty()) //��������� ��������� ������� �� �����
    {
        j++;
        output[j] = pop();
    }
}

void stack1::StackOut()
{
    for (iterator = 1; iterator <= j; iterator++) cout << output[iterator]; 
    cout << endl;
}

void stack1::Run()
{
    cin >> input;
    RPN();
    StackOut();
}
