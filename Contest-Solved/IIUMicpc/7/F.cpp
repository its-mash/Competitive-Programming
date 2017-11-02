#include <bits/stdc++.h>
using namespace std;


int  main(){
    ios_base::sync_with_stdio(false);
    string ex[]={"Kosong","Satu","Dua","Tiga","Empat","Lima","Enam","Tujuh","Lapan","Sembilan","Sepuluh","Sebelas","Dua Belas" , "Tiga Belas" , "Empat Belas" , "Lima Belas" , "Enam Belas" , "Tujuh Belas" , "Lapan Belas" , "Sembilan Belas"};

    for(int i=0;i<1001;i++){
        int n=i;
        string ans="";
        if(n<=19)
            cout<<ex[n]<<endl;
        else if(n==1000)
            cout<<"Seribu"<<endl;
        else{
            bool b=false;
            if(n>=100){
                ans+=(n/100==1)? "Seratus": (ex[n/100]+" Ratus");
                b=true;
            }
            n%=100;
            if(n<=19 && n!=0){
                ans+=(" "+ex[n]);
            }
            else if(n>19){
                if(b)
                    ans+=" ";
                ans+=(ex[n/10]+" Puluh");
                n%=10;
                if(n!=0)
                ans+=(" "+ex[n]);
            }
            cout<<ans<<endl;
        }

    }
}
