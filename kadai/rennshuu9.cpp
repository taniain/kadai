#include <iostream>
using namespace std;
#include<stdio.h>

int main()
{
    int n;
    int total = 0;
    cout << "�e�X�g�̓_������͂��Ă��������B(0�ŏI��)\n";
    while (1)
    {
        cin >> n;
        if(n == 0)break;
        total += n;
        
    }
    cout << "�e�X�g�̍��v�_��"<< total << "�ł��B\n";
    return 0;
}
