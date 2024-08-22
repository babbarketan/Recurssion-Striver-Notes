int lengthofall(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
/*
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int lengthofall(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
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
int main(){
    vector<int> arr = {1,4,2,3};
    Node* head = convertArr2LL(arr);
    cout<<head->data<<endl;
    Node* temp = head;
    head = deleteTail(head);
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}
*/
