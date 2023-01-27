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
  int arr[] = {1, 2, 3, 4, 5};
  DoublyLinkList list;
  list.add_items(arr, 5);
  list.print_items();

  return EXIT_SUCCESS;
}