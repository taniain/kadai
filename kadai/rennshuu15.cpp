#include <iostream>
using namespace std;
#include<stdio.h>

int main()
{
    int a;
    cout << "0から99の数を当てて下さい。\n";

    do
    {
    cout << "いくつでしょう\n";
    cin >> a;

    if (a > 50)
    cout << "もっと小さい数だよ。\n";
    else if(a < 50)
    cout << "もっと大きい数だよ。\n";
    } while (a != 50);   
    cout << "正解!\n";

    return 0;
}