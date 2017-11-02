#include <bits/stdc++.h>
using namespace std;

int main() {

    int p[10], N = 5; for (int i = 0; i < N; i++) p[i] = i;
    //char ex[10]="ASH";
    //sort(ex,ex+3);
    do {
        for (int i = 0; i < N; i++)
            printf("%c ", 'A' + p[i]);
        printf("\n");
        //cout<<ex<<endl;
    }
    while (next_permutation(p, p + 5));
}

