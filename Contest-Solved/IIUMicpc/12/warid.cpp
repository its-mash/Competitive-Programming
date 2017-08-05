#include <bits/stdc++.h>
#include "conio.h"
using namespace std;

int main()
{
    int i,j, data[4][5]={16,22,99,4,18,-258,4,101,5,98,105,6,15,2,45,33,88,72,16,3}, sorted[20];

    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
            cout << data[i][j] << "\t";
        cout << endl;
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
            sorted[i*5+j]=data[i][j];
    }
    sort(sorted,sorted+20);
    for(i=0; i<20; i++)
    {
        cout<<sorted[i]<<" ";
    }
    return 0;
}
