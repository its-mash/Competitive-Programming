#include <bits/stdc++.h>
using namespace std;

int main(){
    string dayName[]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    int day;
    cout<<"Enter the day(1-7) of a week : ";
    cin>>day;
    while(!(day>=1 &&day<=7)){
        cout<<"Invalid day .. try again "<<endl;
        cin>>day;
    }
    cout<<"It's "<<dayName[day%7]<<"!!"<<endl;

}
