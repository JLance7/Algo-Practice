#include <iostream>
#include "node.h"
#include <vector>


//create linked list
std::vector<node*> link_list(int arr[], int n){
  node* head, *tail, *current, *previous;
  for (int i=0; i<n; i++){
    current = new node;
    current->data = arr[i];
    if (i == 0) head = current;
    else previous->next = current;
    previous = current;
  }
  tail = current;
  std::vector<node*> list = {head, tail};
  return list;
}

//reverse linked list
node* reverse_list(node* head){  // 1 2 3
  node *prev = NULL, *curr = head, *next = NULL;
  while (curr != NULL){ 
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}

//print linked list
void print_list(node* head){
  while (head != NULL){
    std::cout << head->data << " ";
    head = head->next;
  }
  std::cout << std::endl;
}

//------------------------------------------------

//alternative class style doubly linked list example
class DoublyLinkList{
  private:
    node* head,*tail;
  public:
    DoublyLinkList(){ head = NULL; }

    node* add_items(int arr[], int n){
      node* current, *previous;
      for (int i=0; i<n; i++){
        current = new node;
        current->data = arr[i];
        if (i == 0){
          head = current; 
          head->next2 = NULL;
        } 
        else{
          previous->next = current;
        } 
        previous = current;
      }
    }

    node* get_head(){ return head; }
    node* get_tail(){ return tail; }
};