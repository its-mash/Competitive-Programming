#include <iostream>
#include <algorithm>

using namespace std;

int ex[10001];
bool vi[10001]={};

int ans(int n)
{
   
    if (n <= 3)
        return n;
    int res = n;
    if(!vi[n]){
		    for (int x = 1; x <= n; x++)
		    {
		        int temp = x*x;
		        if (temp > n)
		            break;
		        else{

		            res =  min(res, 1+ans(n - temp));
		        }
		    } 
		    ex[n]=res;
    		vi[n]=true;   	
    }

    return ex[n];
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<ans(n)<<endl;
	}
}