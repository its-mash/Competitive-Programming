#include <bits/stdc++.h>

using namespace std;


template<class T>
struct Node{
	T val;
	Node<T>* next;
	Node(int _val){
		val=_val;
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
		void insert(T valueToInsert){
			if(root==NULL){
				root= new Node<T>(valueToInsert);	
			}
			else{
				Node<T>* temp= root;
				while(temp->next!=NULL){
					//cout<<temp->val<<endl;
					temp=temp->next;

				}
				temp=new Node<T>(valueToInsert);

			}
		}
		void display(){
			Node<T>* & temp=root;
			while(temp!=NULL){
				cout<<temp->val<<endl;
				temp=temp->next;
			}
		}
};




int main(){
	List<int> ex;
	ex.insert(5);
	

	ex.insert(6);

	ex.insert(7);

	ex.display();
	
}