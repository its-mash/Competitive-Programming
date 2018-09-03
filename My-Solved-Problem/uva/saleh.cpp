#include<iostream>
#include<stdlib.h>
#include<string.h>
 
using namespace std;
 void GenSequence(char str[], int m, int len, char *seq);
 void GetSequence();
void selectedSequence(char seq[]);
 
int main()
{
	int n, m, len, i;
	char str[100];
	cout<<"Enter the base string: ";
	cin>>str;
 
	cout<<"\nEnter the number of strings to be generated from the Base string: ";
	cin>>n;
 
	cout<<"\nEnter the length of each string to be generated: ";
	cin>>m;
 
	len = strlen(str);
 	cout<<endl;
	// Print the generated sequence.
	char seq[m];
	for(i = 0; i < n; i++)
	{
		
		GenSequence(str, m, len, seq);
		cout<<"Sequence "<<i+1<<": "<<seq<<endl;
	}
	cout<<endl;
 	selectedSequence(seq);
	return 0;

}

// A function to generate a random sequence of the given length from a given string.
void GenSequence(char str[], int m, int len, char *seq)
{
	int i, j=0, k, index;
	for(i = 0; i < m; i++)
	{
		// Use rand() to generate random indexes.
		// Store the very first character directly into the sequence.
		if(j == 0)
			seq[j++] = str[rand()%len];
		// Check for the repetitions.
	}
	// End the sequence with null character.
	seq[j] = '\0';
}

void selectedSequence(char seq[]){
	
	cout<<"Selected sequence is "<<seq<<endl;
	int iseq=rand()%100,ACK=rand()%100;
//	cout<<iseq<<endl;
	cout<<"Hos A: ------>> Seq = "<<iseq<<", ACK = "<<ACK<<", data= "<<seq<<" ----->>Host B"<<endl;
	cout<<"Hos A: <<------ Seq = "<<ACK<<", ACK = "<<++iseq<<", data= "<<seq<<"----- Host B"<<endl;
	cout<<"Hos A: ------>> Seq = "<<iseq<<", ACK = "<<++ACK<<"----->>Host B"<<endl;
} 