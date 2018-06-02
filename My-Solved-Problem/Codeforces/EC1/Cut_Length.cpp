#binclude <iostream>
using namespace std;

int main(){
	double students[3][4];
	string names[]={"Xany","Orion","Fahad"};
	string subjectNames[]={"Dicrete","C++","Database","CGPA"};
	for(int i=0;i<3;i++){
		double totalMarks=0;
		cout<<"Entered the details for "<<names[i]<<endl;
		for(int j=0;j<3;j++){
			cout<<"Marks for "<<subjectNames[j]<<":"<<endl;
			cin>>students[i][j];
			totalMarks+=students[i][j];			
		}
		students[i][3]=totalMarks/3;
		cout<<"CGPA"<<students[i][3]<<endl;
	}
	for(int i=0;i<3;i++){
		cout<<"Name : "<<names[i]<<" ";
		for(int j=0;j<4;j++){
			cout<<";"<<subjectNames[j]<<" : ";
			cout<<students[i][j];		
		}
		cout<<endl;
	}
}

// Name: Xany; Discrete:75 ;C++: 79; Database:65;CGPA:3.88;
// Name: Orion; Discrete:85 ;C++: 95; Database:85;CGPA:3.92;

// int main(){
// 	string names[]={"Malaysia","Irfan","Bucky",
// 				"Pathan","Xany","Orion"
// 				};
// 	for(int i=0;i<6;i++){
// 		cout<<"Hi "<<names[i]<<"!"<<endl;
// 	}

// }


















// #include <bits/stdc++.h>
// using namespace std;

// void takeInput(double fx[],int n){
// 	for(int i=0;i<n;i++){
// 		cin>>fx[i];
// 	}
// }

// double display(double ex[],int n){
// 	int sum=0;
// 	for(int i=0;i<n;i++){
// 		cout<<ex[i]<<" ";
// 		sum+=ex[i];
// 	}
// 	cout<<endl;
// 	return sum*1.0/n;
// }


// int main(){
// 	double ex[5],sum=0;
// 	int n;
// 	cout<<"ENter the size"<<endl;
// 	cin>>n;

// 	takeInput(ex,n);

// 	display(ex,n);
// }
