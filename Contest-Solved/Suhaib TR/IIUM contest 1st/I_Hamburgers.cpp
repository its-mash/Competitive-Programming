#include <bits/stdc++.h>
using namespace std;

long long int r;

void check(int *x,int *y,int *z,int *nc,int *pc,int *ns,int *ps,int c,int s){

    if(((*y)*s-(*ns))*(*ps)<=r){
            *ns=(*y)*s;
            *z=(*ns)/s;
            r-=((*y)*s-(*ns))*(*ps);
            if((*x-*z)*s*(*ps)+(*x-*y)*(*pc)*c<=r){
                    *ns+=(*x)*s;
                    (*z)=(*ns)/s;
                    (*nc)+=(*x)*c;
                    (*y)=(*nc)/c;
                    r-=(*x-*z)*s*(*ps)+(*x-*y)*(*pc)*c;
            }
            else{
                    int cc=r/(s*(*ps)+(*pc)*c);
                    (*ns)+=cc*s;
                    (*z)=(*ns)/s;
                    (*nc)+=cc*c;
                    (*y)=(*nc)/c;
                    r=r%(s*(*ps)+(*pc)*c);
                }
    }
    else{
            (*ns)+=r/(*ps);
            (*z)=(*ns)/s;
            r=r%(*ps);
    }
}


int main(){
    string ex;
    cin>>ex;
    int b,s,c;
    long long ans=0;

    b=count(ex.begin(),ex.end(),'B');
    s=count(ex.begin(),ex.end(),'S');
    c=count(ex.begin(),ex.end(),'C');

    int nb,ns,nc,pb,ps,pc;

    cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;

    int x=nb/(b+(b==0)),y=nc/(c+(c==0)),z=ns/(s+(s==0));
    ans=min(x,min(y,z));
    x-=ans;
    y-=ans;
    z-=ans;
    nb-=ans*b;
    nc-=ans*c;
    ns-=ans*s;

    if(x >= y && x>=z){
        if(y>=z){
            check(&x,&y,&z,&nc,&pc,&ns,&ps,c,s);
        }
        else{
            check(&x,&z,&y,&ns,&ps,&nc,&pc,s,c);
        }
    }
    else if(y>=x && y>=z){
        if(x>=z){
            check(&y,&x,&z,&nb,&pb,&ns,&ps,b,s);
        }
        else{
            check(&y,&z,&x,&ns,&ps,&nb,&pb,s,b);
        }
    }
    else{
        if(x>=y){
            check(&z,&x,&y,&nb,&pb,&nc,&pc,b,c);
        }
        else{
            check(&z,&y,&x,&nc,&pc,&nb,&pb,c,b);
        }
    }
    ans+= min(x,min(y,z))+ r/(pb*b+pc*c+ps*s);
    cout<<ans<<endl;
}
