#include <iostream>
using namespace std;

void display1();
void display2();

int main()
{
  display1();
  cout << endl;
  display2();
  cout << endl;
  
  return 0; 
}
  
void display1()
{ 
  int i, j;
  
  for(int j=0;j<5;j++)
  {
        for(int i=0;i<=j;i++)
            cout<<" 1 ";
        for(int i=4;i>j;i--)
            cout<<" 0 ";   
        cout << endl;
    }
  return;
}

void display2()
{
  int i, j;
  
  for(int j=0;j<5;j++)
  {  
        for(int i=4;i>j;i--)
            cout<<" 0 "; 
    for(int i=0;i<=j;i++)
            cout<<" 1 ";
        cout << endl;
    }
  return;
}