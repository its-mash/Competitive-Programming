#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double


int cmp( const void * aa, const void * bb)
{
    int *a=(int * )aa;
    int *b=(int *)bb;
    const int col=0;//will sort base on third element
    // cout<<a[col]<<" --- "<<b[col]<<endl;
    if (a[col]>b[col])//a[col]>a[col] for descending order
        return 1;
    else if (a[col]==b[col]){
    	if(a[col+1]>b[col+1])
    		return 1;
    	else if(a[col+1]==b[col+1])
        	return 0;
        else
        	return -1;
    }
    else
        return -1;

}

int main()
{  
	// freopen("in","r",stdin);
	int n,x;
	cin>>n>>x;
	int ex[n][2];
	for(int i=0;i<n;i++){
		cin>>ex[i][0]>>ex[i][1];
	}
	qsort(ex,n,sizeof(ex[0]),cmp);
	// for(int i=0;i<n;i++)
	// 	cout<<ex[i][0]<<" "<<ex[i][1]<<endl;

	int tt=0,cr=1,i=0;
	for(i=0;i<n && ex[i][0]<=x;i++){
		if(cr<ex[i][0]){
			tt+=ex[i][0]-cr-1;	
			cr=ex[i][1];
		}

			
		// cout<<i<<"-- "<<cr<<" cc "<<tt<<endl;
	}
	cout<<tt<<endl;
}



