#include <iostream>
using namespace std;

int main(){
	double fruits[5][3];
	string fruitsName[5]={"Mango","Orange","Banana","Apple","Grape"};
	string type[3]={"price","weight","total Price"};
	for(int i=0;i<5;i++){
		cout<<"Enter the details for "<<fruitsName[i]<<endl;
		for(int j=0;j<2;j++){
			cout<<type[j]<<":"<<endl;
			cin>>fruits[i][j];
		}
	}
}









// #include <iostream>
// using namespace std;

// void takeInput(double fx[],int n){
// 	for(int i=0;i<n;i++)
// 		cin>>fx[i];
// }
// void display(double rx[],int n){
// 	for(int i=0;i<n;i++)
// 		cout<<rx[i]<<" ";
// 	cout<<endl; 
// }
// double sumIt(double ex[],int n){
// 	double sum=0;
// 	for(int i=0;i<n;i++)
// 		sum+=ex[i];
// 	return sum;
// }

// int main(){

// 	// double ex[5]={4.4,5.5,3.3,2.2,1.5};
// 	// double ex[5]={4.4};
// 	// double ex[5]={};
// 	int n;
// 	cout<<"Enter the array length :"<<endl;
// 	cin>>n;
// 	double ex[n];
// 	takeInput(ex,n);
// 	display(ex,n);
// 	cout<<"Sum : "<<sumIt(ex,n)<<endl;
// 	cout<<"Average : "<<sumIt(ex,n)/n<<endl;


// 	// double ex[n];
// 	// for(int i=0;i<n;i++)
// 	// 	cin>>ex[i];
// 	// int sum=0;	
// 	// for(int i=0;i<n;i++){
// 	// 	cout<<ex[i]<<" ";
// 	// 	sum+=ex[i];
// 	// }
// 	// cout<<endl<<sum<<endl;
// 	// cout<<"Average : "<<sum*1.0/n<<endl;

// }
