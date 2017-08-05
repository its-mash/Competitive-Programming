
#include <bits/stdc++.h>

using namespace std;

#define eps 0.001

// This is the custom data container for this solution
struct Frog{
    double h,w,l; // h->height, w->weight, l->length of jump
    int i; // i-> position in the original list
    //Frog(){} // Empty Constructor, it is needed for sorting using sort function
    Frog(double _h, double _w, double _l, int _i){ h = _h; w = _w; l = _l; i = _i;} // Constructor for initializing
    // The following function defines the nature of the operator overloading
    // In this case the operator is the comparison function, defined by "()" symbol
    bool operator()(const Frog& a, const Frog& b){
        // The follwing conditions decides whether 'a' should go before 'b' or not
        if(a.h<b.h){
            return false;
        }else if(abs(a.h-b.h)<eps){
            if(a.w>b.w){
                return false;
            }else if(abs(a.w-b.w)<eps){
                if(a.l<b.l){
                    return false;
                }else if(abs(a.l-b.l)<eps){
                    return a.i<b.i;
                }
            }
        }
        return true;
    }
};

int main(){
    int n;
    scanf("%d",&n);
    vector<Frog> frogs;
    double h,w,l;
    for(int i=0;i<n;i++){
        scanf("%lf %lf %lf",&h,&w,&l);
        frogs.push_back(Frog(h,w,l,i+1)); // We store the list in a vector
    }
    sort(frogs.begin(), frogs.end(), Frog()); // We use the built-in sort function with our custom comparator to sort the list
    // Now we just simply print out the while list
    for(int i=0;i<frogs.size();i++){
        printf("ID:%d H:%.2lf W:%.2lf L:%.2lf\n",frogs[i].i,frogs[i].h,frogs[i].w,frogs[i].l);
    }
    return 0;
}
