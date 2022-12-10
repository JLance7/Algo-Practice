#include <iostream>
#include <string>
#include "lib.h"
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

/*
  Runner for different algos
*/
int main(int argc, char** argv){
  std::vector<std::string> list = fizz_buzz(15);
  for (unsigned int i=0; i<list.size(); i++){
    std::cout << list.at(i) <<  " ";
  }
  std::cout << std::endl;

  return EXIT_SUCCESS;
}