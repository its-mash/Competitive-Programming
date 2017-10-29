#include <bits/stdc++.h>

using namespace std;


template<class T>
struct Node
{
	T value;
	Node<T>* next;

	Node(T _value){
		value=_value;
		next=NULL;
	}	
};

template<class T>
class List{
	private:
		Node<T>* root;
	public:
		List(){
			root=NULL;
		}
		void insert(T value){
			if(root==NULL){
				root=new Node<T>(value);
			}
			else{
				Node<T>* temp=root;
				while(temp->next!=NULL)
					temp=temp->next;
				temp->next=new Node<T>(value);
			}
		}
		void display(){
			Node<T>* temp=root;
			if(!isEmpty()){
				do{
					cout<<temp->value<<" ";
					temp=temp->next;
				}while(temp!=NULL);

				cout<<endl;
			}
			else 
				cout<<"List is empty"<<endl;

		}
		bool isEmpty(){
			return root==NULL;
		}
};

int main(){
	List<int> ex;
	ex.insert(5);
	ex.insert(3);
	ex.insert(6);
	ex.insert(4);
	ex.display();
}