#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    bool row[9][10]={},col[9][10]={},block[9][10]={},f=true;
	    int x;
	    for(int i=0;i<9;i++){
	        for(int j=0;j<9;j++){
	            cin>>x;
	            if(x==0)continue;
	            if(row[i][x] || col[j][x] || block[i/3*3+j/3][x]){
	                f=false;
	            }
	            row[i][x] = col[j][x]=block[i/3*3+j/3][x]= true;
               
	        }
            
	    }
	    cout<<f<<endl;
	}
	return 0;
}