bool has_cycle(Node* head) {
    // Complete this function
    if (head == NULL){
        return false;
    }
    Node ** list = new Node*[100];
    int index = 0;
    for (Node * current = head; current != NULL; current = current->next){
        for (int i = 0; i < index; i++){
            if (current == list[i]){
                return true;
            }
        }
        list[index] = current;
        index++;
    }
    delete [] list;
    return false;
}