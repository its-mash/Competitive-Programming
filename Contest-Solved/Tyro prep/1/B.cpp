#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        string a,b,ex;
        cin>>a>>b;
        ex=a;

        int c,mid=b.length()/2,old,minn=2001;
       // cout<<mid<<" mid"<<endl;
        char ch=b[mid];
        c=a.find_first_of(ch);
        old=c;
        while(c!=string::npos){
            //cout<<"cc "<<c<<endl;
            int i=mid-1,left=mid,right=old;
            for(int j=old-1;j>=0 && i>=0;j--){
                if(b[i]==ex[j]){
                    i--;left=j;
                }
            }
           // cout<<"II "<<i<<" left "<<left<<endl;
            if(i==-1){

                i=mid+1;
                for(int j=old+1;j<ex.length() && i<b.length();j++){
                    if(b[i]==ex[j]){
                        i++;right=j;
                    }

                }
                if(i==b.length()){
                   // cout<<"right "<<right<<endl;
                    minn=min(minn,right-left+1);
                }
                //cout<<"T min "<<right-left+1<<endl;
            }
            a=a.substr(c+1);
            c=a.find_first_of(ch);
            old+=(c+1);
            //cout<<"old "<<old<<endl<<endl;
            //cout<<a.substr(c+1)<< " JJJJ "<<c<<endl;
        }
        cout<<minn<<endl;

    }
}

