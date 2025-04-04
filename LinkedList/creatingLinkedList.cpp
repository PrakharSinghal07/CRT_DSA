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
  if(head == NULL || head -> next == NULL){
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

// Node* deleteFromEnd(Node* head){
//   if(head == NULL || head -> next == NULL){
//     return head;
//   }
//   Node* ptr = head;
//   while(ptr -> next -> next){
//     ptr = ptr -> next;
//   }
//   Node* temp = ptr -> next;
//   ptr -> next = NULL;
//   delete temp;
//   return head;
// }
    
void deleteAtPos(Node*& head, int pos){
  if(pos == 1){
    deleteFromBeginning(head);
    return;
  }
  if(head == NULL){
    return;
  }
  Node* ptr = head;
  for(int i=1; i<=pos-2; i++){
    ptr = ptr -> next;
  }
  Node* temp = ptr -> next;
  ptr -> next = ptr -> next -> next;
  delete temp;
}

void insertAtPos(Node*& head, int pos, int val){
  if(pos == 1){
    insertAtBeginning(head, val);
    return;
  }
  Node* newNode = new Node(val);
  Node* ptr = head;
  for(int i=1; i<=pos-2; i++){
    ptr = ptr -> next;
    if(ptr == NULL){
      return;
    }
  }
  newNode -> next = ptr -> next;
  ptr -> next = newNode;
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
  deleteAtPos(head, 2);
  print(head);
  insertAtPos(head, 1, 33);
  print(head);
  return 0;
}