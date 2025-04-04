#include<iostream>
using namespace std;
class Node{
  public:
    int data;
    Node* next;
    Node(int x){
      data = x;
      next = NULL;
    }
};

void print(Node* head){
  Node* ptr = head;
  while(ptr != NULL){
    cout << ptr -> data << " ";
    ptr = ptr -> next;
  }
  cout << endl;
}

void insertAtBeginning(Node*& head, int val){
  Node* newNode = new Node(val);
  newNode -> next = head;
  head = newNode;
}
void insertAtEnd(Node*& head, int val){
  Node* newNode = new Node(val);
  if(head == NULL){
    head = newNode;
    return;
  }
  Node* ptr = head;
  while(ptr -> next != NULL){
    ptr = ptr -> next;
  }
  ptr -> next = newNode;
}

void deleteFromBeginning(Node*& head){
  if(head == NULL){
    return;
  }
  Node* temp = head;
  head = head -> next;
  delete(temp);
}

void deleteFromEnd(Node*& head){
  if(head == NULL){
    return;
  }
  Node* ptr = head;
  while(ptr -> next -> next){
    ptr = ptr -> next;
  }
  Node* temp = ptr -> next;
  ptr -> next = NULL;
  delete temp;
}
                                                                                                                                            
int main()                  
{
  // Node* head = NULL;
  Node* head = new Node(10);
  Node* temp1 = new Node(20);
  Node* temp2 = new Node(30);
  head -> next = temp1;
  temp1 -> next = temp2;
  print(head);
  insertAtBeginning(head, 1);
  print(head);
  insertAtEnd(head, 40);
  print(head);
  deleteFromBeginning(head);
  print(head);
  deleteFromEnd(head);
  print(head);
  return 0;
}