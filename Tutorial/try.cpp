#include <iostream>
using namespace std;

double tax(int salary, double taxPercentages){
  return salary*(taxPercentages/100);
}


int main(){
  int salary;
  double taxPercentages;
  while(cin>>salary>>taxPercentages){
      cout<<tax(salary,taxPercentages)<<endl;
  }
}