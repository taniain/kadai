#include <iostream>
using namespace std;
#include<stdio.h>

int main()
{
    int i;
    cout << "何個表示しますか?:";
    cin >> i;
    while (i > 0)
{
cout << "★";
i--;
}
return 0;
}