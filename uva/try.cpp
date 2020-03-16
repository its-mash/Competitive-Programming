#include <bits/stdc++.h>
using namespace std;

int main(){
    double h,u,d,f;
    while(cin>>h>>u>>d>>f && h!=0){
        f=u*f/100;
        double a=f,b=2*d-2*u-f,c=2*(h-d);
        double m=b*b-4*a*c;
        if(m>=0){
            double ans1=(-b-sqrt(m))/(2*a);
            double ans2=(-b+sqrt(m))/(2*a);
            //cout<<ans1<<" 5 "<<ans2<<endl;
            double ans=min(ans1,ans2);
            if(ans==int(ans)){
                ans++;
                if(ans*u-ans*d-(ans*(ans-1))/2 > h)
                    cout<<"success on day +"<<ans<<endl;
                else
                {
                    m=b*b+4*a*2*d;
                    double ans1=(-b-sqrt(m))/(2*a);
                    double ans2=(-b+sqrt(m))/(2*a);
                    cout<<"failure on day y "<<ceil(max(ans1,ans2))<<endl;
                }
                
            }
            else
                cout<<"success on day "<<ceil(min(ans1,ans2))<<endl;
        }
        else{
            m=b*b+4*a*2*d;
            double ans1=(-b-sqrt(m))/(2*a);
            double ans2=(-b+sqrt(m))/(2*a);
           // cout<<ans1<<" 6 "<<ans2<<endl;
            cout<<"failure on day x "<<ceil(max(ans1,ans2))<<endl;
        }
    }
}