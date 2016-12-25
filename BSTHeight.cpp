#include <iostream>
#include <cstddef>
using namespace std;    

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
        Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }


int getHeight(Node* root){
            // if null, return nothing
            if (root == NULL){
                return 0;
            }
            // if nothing below me, return myself.
            if (root->left == NULL && root->right == NULL){
                return 0;
            }
            // check left, check right.
            int left = getHeight(root->left);
            int right = getHeight(root->right);
            if (left > right){
                return 1 + left;
            }
            return 1 + right;
        }
}; //End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;

    return 0;
}