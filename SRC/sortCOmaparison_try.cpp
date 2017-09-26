#include <bits/stdc++.h>

using namespace std;

#define eps 0.001

struct Frog{
    double h,w,j;
    int i;
    Frog(){}
    Frog(double _h, double _w, double _j, int _i ){
        h=_h; w=_w; j=_j; i=_i;
    }
    /*bool operator()(const Frog& a, const Frog& b){
        if(a.h < b.h)
            return false;
        else if(abs(a.h-b.h)<eps){
            if(a.w>b.w)
                return false;
            else if(abs(a.w-b.w)<eps){
                if(a.j<b.j)
                    return false;
                else if(abs(a.j-b.j)<eps){
                    return a.i<b.i;
                }

            }
        }
        return true;
    }*/
};

bool compare(const Frog& a, const Frog& b){
        if(a.h < b.h)
            return false;
        else if(abs(a.h-b.h)<eps){
            if(a.w>b.w)
                return false;
            else if(abs(a.w-b.w)<eps){
                if(a.j<b.j)
                    return false;
                else if(abs(a.j-b.j)<eps){
                    return a.i<b.i;
                }

            }
        }
        return true;
}
int main(){
    int n;
    cin>>n;
    vector<Frog> ex;
    for(int i=0;i<n;i++){
        double h,w,j;
        cin>>h>>w>>j;
        ex.push_back(Frog(h,w,j,i+1));
    }
    sort(ex.begin(),ex.end(),compare);
    for(int i=0;i<ex.size();i++){
        printf("ID:%d H:%.2f W:%.2f L:%.2f\n", ex[i].i,ex[i].h,ex[i].w,ex[i].j);
    }
}
