#include<iostream>

using namespace std;

int main()
{
    string init;
    cin >> init;

    bool current = init == "ON";
    unsigned int num;
    cin >> num;

    int count = 0;
    for(int i=0;i<32;i++){
        bool on = (num & (1LL << i)) != 0;
        if(on != current){
            count++;
        }
        current = on;
    }

    cout << count;
}
