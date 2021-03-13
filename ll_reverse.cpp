// Program to reverse a singly linked list

#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

struct LinkedList{
    Node *head;

    Node* reverse(){
        Node *current = head, *prev = NULL, *next = NULL;

        while(current != NULL){
            next = current->next;

            current->next = prev;
            prev = current;
            current = next;


        }
        head = prev;
        return head;
    }

    void append(int data){
        // in LL insert new node at end

        Node * curr = new Node(data);
        curr->next = NULL;
        if(head == NULL){
            head = curr;
            return;
        }

        Node *temp = head;

        //bring temp pointer to last node
        while(temp->next != NULL){
            temp=temp->next;
        }

        temp->next = curr;
    }

    void print(){
        Node *temp = head;
        while (temp != NULL){
            cout << temp->data << "->";
            temp=temp->next;
        }
       cout << "\n";
    }

};

int main(){
    LinkedList ll;

    ll.append(1);
    ll.append(2);
    ll.append(3);
    ll.append(4);
    ll.append(5);
    ll.append(6);


    ll.print();
    cout << "After reversal\n";
    ll.reverse();
    ll.print();

}