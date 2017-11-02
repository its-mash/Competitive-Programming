#include <bits/stdc++.h>
using namespace std;
long long l,m,x;
int ct=0;

void combinationUtil(int arr[], int data[], int start, int end,
                     int index, int r)
{
    if (index == r)
    {
        int sum=0;
        for (int j=0; j<r; j++){
            sum+=data[j];
            //cout<<data[j]<<" ";
        }
       // cout<<endl;
        if(sum>=l && sum<=m && (data[r-1]-data[0])>=x){
           // cout<<" true "<<endl;
            ct++;
        }

        return;
    }
    for (int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}

int main()
{
    long long n;
    cin>>n>>l>>m>>x;
    int ex[n];
    for(int i=0;i<n;i++)
        cin>>ex[i];
    sort(ex,ex+n);
    for(int r=2;r<=n;r++){
        int data[r];
        combinationUtil(ex, data, 0, n-1, 0, r);
    }
    cout<<ct<<endl;
}
