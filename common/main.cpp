#include <iostream>
#include <string>
#include <vector>
#include "lib.h"
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

/*
  Runner for different algos
*/
int main(int argc, char** argv){
  // std::vector<std::string> list = fizz_buzz(15);
  // for (unsigned int i=0; i<list.size(); i++){
  //   std::cout << list.at(i) <<  " ";
  // }
  // std::cout << std::endl;

  int arr[] = {1, 2, 3, 4, 5};
  std::vector<node*> list = link_list(arr, 5);
  node* head = list.at(0);
  node* tail = list.at(1);
  std::cout << tail->data << std::endl;
  print_list(head);
  node* head2 = reverse_list(head);
  print_list(head2);

  return EXIT_SUCCESS;
}