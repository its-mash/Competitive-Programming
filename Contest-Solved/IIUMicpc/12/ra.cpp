#include <iostream>
using namespace std;
int main()
{
	int T,n,k,Z;
	cin>>T;

	for(int i=1;i<=T;i++)
	{
		cin>>n>>k;
		cout<<"Case "<<i<<" : ";
		n++;
		cout<<n;
        for(int j=n+n;j<=k;j=j+n)
        {
				cout<<","<<j;

        }
        cout<<endl;


	}
	return 0;
}
