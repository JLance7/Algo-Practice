#ifndef DOUBLY_LINK_LIST_H
#define DOUBLY_LINK_LIST_H
#include "node.h"

//alternative class style doubly linked list example
class DoublyLinkList{
  private:
    node* head,*tail;
  public:
    inline DoublyLinkList(){ head = NULL; tail = NULL; }
    inline ~DoublyLinkList(){
      while (head != NULL){
        node* temp = head;
        delete head;
        head = temp;
      }
    }

    node* add_items(int arr[], int n);
    void print_items();

    inline node* get_head(){ return head; }
    inline node* get_tail(){ return tail; }
};
#endif