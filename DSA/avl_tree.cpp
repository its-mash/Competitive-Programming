#include <bits/stdc++.h>
using namespace std;

template<class T>
struct Node
{
    T value;
    Node<T> *left;
    Node<T> *right;
    Node<T> *parent;
    Node(){}
	Node(T _v,Node<T> *_parent){
		value = _v;
		left = NULL;
		right = NULL;
		parent=_parent;
	}
};
template <class T>
class AVL
{
    private:
        Node<T> *root;
    public:
        AVL()
        {
            root = NULL;
        }
        int height(Node<T> *temp)
        {
            int h = 0;
            if (temp != NULL)
            {
                int l_height = height (temp->left);
                int r_height = height (temp->right);
                int max_height = max (l_height, r_height);
                h = max_height + 1;
            }
            return h;
        }

        int diff(Node<T>  *temp)
        {
            int l_height = height (temp->left);
            int r_height = height (temp->right);
            int b_factor= l_height - r_height;
            return b_factor;
        }

        void rr_rotation(Node<T>* &parent)
        {
            Node<T>  *temp;
            temp = parent->right;
            parent->right = temp->left;
            temp->left = parent;
            parent=temp;
        }

        void ll_rotation(Node<T>* &parent)
        {
            Node<T>  *temp;
            temp = parent->left;
            parent->left = temp->right;
            temp->right = parent;
            parent=temp;
        }


        void lr_rotation(Node<T>* &parent)
        {
            Node<T>  *temp;
            temp = parent->left;
            rr_rotation (temp);
            parent->left = temp;
            ll_rotation (parent);
        }


        void rl_rotation(Node<T>*  &parent)
        {
            Node<T>  *temp;
            temp = parent->right;
            ll_rotation (temp);
            parent->right = temp;
            rr_rotation (parent);
        }

        void balance(Node<T>* &temp)
        {
            int bal_factor = diff (temp);
            if (bal_factor > 1)
            {
                if (diff (temp->left) > 0)
                    ll_rotation (temp);
                else
                    lr_rotation (temp);
            }
            else if (bal_factor < -1)
            {
                if (diff (temp->right) > 0)
                    rl_rotation (temp);
                else
                    rr_rotation (temp);
            }
            if (temp->parent != NULL) {
                balance(temp->parent);
            }
            else
                root=temp;
        }

        void insertHelper(Node<T>* &_parent,Node<T>* &current, T value)
        {

            if(current==NULL){current= new Node<T>(value,_parent);balance (_parent);}
            else if (value < current->value)
            {
                insertHelper(current,current->left, value);
            }
            else if (value >= current->value)
            {
                insertHelper(current,current->right, value);
            }
        }
        void insert(T value){
            if (root == NULL)
            {
                root = new Node<T>(value,NULL);return;
            }
            insertHelper(root->parent,root,value);
        }
        void displayPrefix(Node<T>* current){
			if(current!=NULL){
				cout<<current->value<<" ";
				displayPrefix(current->left);
				displayPrefix(current->right);
			}
		}
        void displayInfix(Node<T>* current){
			if(current!=NULL){
				displayInfix(current->left);
				cout<<current->value<<" ";
				displayInfix(current->right);
			}
		}

		void displayPostfix(Node<T>* current){
			if(current!=NULL){
				displayPostfix(current->left);
				displayPostfix(current->right);
				cout<<current->value<<" ";
			}
		}

		void display(int order=0){
			if(root==NULL){
				cout<<"Empty"<<endl;
				return;
			}
			if(order==0) displayPrefix(root);
			else if(order==1) displayInfix(root);
			else if(order==2) displayPostfix(root);
			cout<<endl;
		}
		void remove(T delKey) {
            if (root == NULL)
                return;
            Node<T>
                * n       = root,
                * parent  = root,
                * delNode = NULL,
                * child   = root;

            while (child != NULL) {
                parent = n;
                n = child;
                child = delKey >= n->value ? n->right : n->left;
                if (delKey == n->value)
                    delNode = n;
            }
            if (delNode != NULL) {
                delNode->value = n->value;

                child = n->left != NULL ? n->left : n->right;

                if (root->value == delKey) {
                    root = child;
                }
                else {
                    if (parent->left == n) {
                        parent->left = child;
                    }
                    else {
                        parent->right = child;
                    }

                    balance(parent);
                }
            }
        }

};

int main(){
	AVL<int> tree;

	int ex[]={2,1,4,3,5};
	for (int i = 0; i <sizeof(ex)/4; ++i)
        tree.insert(ex[i]);
	tree.display(1);
    tree.remove(3);
    tree.display(1);

}

