#include<stdio.h>
int main()
{
    int N,second,minute,hour;
    scanf("%d",&N);
    hour=N/3600;
    N%=3600;
    minute = N/60;
    second = N%60;
    printf("%d:%d:%d",hour,minute,second);
    return 0;
}

