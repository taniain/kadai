#include <iostream>
using namespace std;
#include<stdio.h>

int main()
{
    int a;
    cout << "0����99�̐��𓖂Ăĉ������B\n";

    do
    {
    cout << "�����ł��傤\n";
    cin >> a;

    if (a > 50)
    cout << "�����Ə�����������B\n";
    else if(a < 50)
    cout << "�����Ƒ傫��������B\n";
    } while (a != 50);   
    cout << "����!\n";

    return 0;
}