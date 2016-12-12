#include <iostream>
#include <stdlib.h>

using namespace std;

int find(int const * const array, int const size, int const value);

int main(){
	int length;
	cout << "how long?" << endl;
	cin >> length;
	int value;
	cout << "find what?" << endl;
	cin >> value;
	int * array = new int[length];

	for (int i = 0; i < length; i++){
		array[i] = i;
	}
	cout << find(array,length,value) << endl;
	delete [] array;
	return 0;
}




int find(int const * const array, int const size, int const value){
	for (int i = 0; i < size; i++){
		if(array[i] == value){
			return i;
		}
	}
	return -1;
}

int findLL(node * head, int const value){
	if (head == NULL){
		return -1;
	}
	int counter = 0;
	for (node * current = head; node != NULL; node = node->next){
		if (node.getValue == value){
			return counter;
		}
		counter++;
	}
}

void inorder_tree_walk(node * x){
	if (x == NULL){
		return;
	}
	else{
		inorder_tree_walk(x->left);
		cout << value << endl;
		inorder_tree_walk(x->right);
	}
}

node * find(node * root, int const value){
	if(root == NULL){
		return NULL;
	}
	if(root.value == value){
		return root;
	}
	else if(root.value < value){
		return find(root->right, value);
	}
	else if(root.value > value){
		return find(root->left, value);
	}
	return NULL;
}

node * find(node * root, int const value){
	if (root == NULL){
		return NULL;
	}
	node * current = root;
	while (current != root){
		if (current->value == value){
			return current;
		}
		if (current->value > value){
			current = current->left;
		}
		else if (current->value < value){
			current = current->right;
		}
	}
	return NULL;
}





