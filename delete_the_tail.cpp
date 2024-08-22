Node* deleteTail(Node* head){
    if(head->next == nullptr || head == nullptr) return nullptr;
    Node* temp = head;
    while(temp->next->next!=nullptr){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
}
