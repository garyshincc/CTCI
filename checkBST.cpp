  bool checkBST(Node* root) {
        // need to check if bin tree is sorted or not
        if(root == NULL){
            return false;
        }
        int min = root->data;
        int max = root->data;
        return checkBSTHelper(root, -2147483647, 2147483647);
    }
    bool checkBSTHelper(Node * current,int min, int max){
        if(current == NULL){
            return true;
        }
        if(current->data < min || current->data > max){
            return false;
        }
        return checkBSTHelper(current->left,min,current->data-1) && checkBSTHelper(current->right,current->data+1,max);
    }
    