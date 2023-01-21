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
  std::unordered_map<char, std::vector<int>> umap = matches("hello");
  std::unordered_map<char, std::vector<int>>::iterator itr;
  for (itr = umap.begin(); itr != umap.end(); itr++){
    std::cout << itr->first << " - ";
    for (auto index : itr->second){
      std::cout << index << " ";
    }
    std::cout << "\n";
  }

  return EXIT_SUCCESS;
}