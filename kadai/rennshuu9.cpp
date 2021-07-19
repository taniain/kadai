#include <iostream>
using namespace std;
#include<stdio.h>

int main()
{
    int n;
    int total = 0;
    cout << "テストの点数を入力してください。(0で終了)\n";
    while (1)
    {
        cin >> n;
        if(n == 0)break;
        total += n;
        
    }
    cout << "テストの合計点は"<< total << "です。\n";
    return 0;
}
