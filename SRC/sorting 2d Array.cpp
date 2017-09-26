
#include <bits/stdc++.h>
using namespace std;
/*
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
*/
int compare( const void *aa, const void  *bb)
{
    const int col=1;//will sort base on third element
    int *a=(int *)aa;
    int *b=(int *)bb;
    if (a[col]<b[col])//a[col]>a[col] for descending order
        return -1;
    else if (a[col]==b[col])
        return 0;
    else
        return 1;

}

int cmp( const void * aa, const void * bb)
{
    int *a=(int * )aa;
    int *b=(int *)bb;
    const int col=0;//will sort base on third element
    cout<<a[col]<<" --- "<<b[col]<<endl;
    if (a[col]>b[col])//a[col]>a[col] for descending order
        return 1;
    else if (a[col]==b[col])
        return 0;
    else
        return -1;

}
int main()
{
    const int row=3,col=5;
    int ex[row][col]={2,5,1,4,7,7,2,5,3,4,4,41,32,5,3};
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++)
            cout<<ex[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    qsort(ex,row,sizeof(ex[0]),cmp);
    cout<<"After"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
            cout<<ex[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
