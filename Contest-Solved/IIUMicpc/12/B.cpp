#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,count=0;
        cin>>n;
        int arr[n];
        double sum=0,avg;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        avg=sum/n;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>avg)
                count++;
        }
        printf("%.3f\%\n",count*100.0/n);
    }
}
