#include <iostream>
#include <vector>
#include "../headers/node.hpp"
void addToTree(node*&, int);

node* createBinarySearchTree(std::vector<int> list){
  node* head = NULL;
  for (unsigned int i=0; i<list.size(); i++){
    int num = list.at(i);
    // std::cout << num << " ";
    if (head == NULL){ 
      head = new node;
      head->data = num;
      continue;
    }
    addToTree(head, num);
  }
  return head;
}

void addToTree(node* &head, int num){
  if (head == NULL){
    head = new node;
    head->data = num;
    // std::cout << "Inserting: " << num << std::endl;
  }
  else if (num < head->data){
    addToTree(head->next2, num);
  }
  else if (num > head->data){
    addToTree(head->next, num);
  }
}
//--------------------------------------------
//breadth first traversal (level order)
void BFS(node* head){
  std::cout << head-> data << " ";
  if (head->next2 != NULL)
    BFS(head->next2);
  if (head->next != NULL)
    BFS(head->next);
}

//----------------------------------------
//Depth first search traversal
//inorder (left, root, right)
void inorder(node* head){
  if (!head){ return; }
  inorder(head->next2);
  std::cout << head->data << std::endl;
  inorder(head->next);
}

//preorder traversal (root, left, right)
void preorder(node* head){
  if (!head){ return; }
  std::cout << head->data << std::endl;
  preorder(head->next2);
  preorder(head->next);
}

//postorder traversal (left, right, root)
void postorder(node* head){
  if (!head){ return; }
  postorder(head->next2);
  postorder(head->next);
  std::cout << head-> data << std::endl;
}



