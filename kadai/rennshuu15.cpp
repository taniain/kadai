#include <iostream>
using namespace std;
#include<stdio.h>

int main()
{
    int a;
    cout << "0‚©‚ç99‚Ì”‚ð“–‚Ä‚Ä‰º‚³‚¢B\n";

    do
    {
    cout << "‚¢‚­‚Â‚Å‚µ‚å‚¤\n";
    cin >> a;

    if (a > 50)
    cout << "‚à‚Á‚Æ¬‚³‚¢”‚¾‚æB\n";
    else if(a < 50)
    cout << "‚à‚Á‚Æ‘å‚«‚¢”‚¾‚æB\n";
    } while (a != 50);   
    cout << "³‰ð!\n";

    return 0;
}