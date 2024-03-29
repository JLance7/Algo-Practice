#include <iostream>
#include <string>
#include <vector>
#include "headers/lib.hpp"
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

/*
  Runner for different algos
*/
int main(int argc, char** argv){
  // int arr[] = {1, 2, 3, 4, 5};
  // DoublyLinkList list;
  // list.add_items(arr, 5);
  // list.print_items();

  // std::vector<int> list{1, 0,-1, 3, 4, 2, 5};
  // node* head = createBinarySearchTree(list);
  // inorder(head);
  // std::cout << "\n";
  // invertBinarySearchTree(head);
  // inorder(head);


  int arr[] = {5, 3, 1, 2, 4};
  insertion_sort(arr, 5);
  for (int x: arr)
    std::cout << x << " ";
  std::cout << "\n";

  return EXIT_SUCCESS;
}