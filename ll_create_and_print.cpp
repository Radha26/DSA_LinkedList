#include <bits/stdc++.h>

using namespace std;

//Create a LL of n nodes and print it

class Node{
    public:
    int data;
    Node *next;

    Node(int d){
        data = d;
    }
};

Node* createLinkedList(int n){
    Node * head, *temp;
    
    int data;
    cin >> data;
    head = new Node(data);
    head->next = NULL;
    temp = head;

    for(int i = 1; i < n; i++){
        cin >> data;
        Node *n = new Node(data);
        n->next=NULL;

        temp->next = n;
        temp = n;
    }

    return head;
}

void printLinkedList(Node *head){
    while(head != NULL){
        cout << head->data << "->";
        head = head->next;
    }
}
int main(){
    int n;
    cin >> n;

    Node *head = createLinkedList(n);
    printLinkedList(head);

    return 0;
}