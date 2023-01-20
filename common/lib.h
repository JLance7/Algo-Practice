#ifndef LIB_H
#define LIB_H
#include <string>
#include <vector>
#include "node.h"

//function prototypes
//common.cpp
int fibonacci(int);
std::string reverse_string(std::string);
bool check_palindrome(std::string);
void reverse_list(int**);
std::vector<std::string> fizz_buzz(int);

//lists.cpp
std::vector<node*> link_list(int[], int);
node* reverse_list(node*);
void print_list(node*);
node* doubly_link_list(node*);

//sorting.cpp

//graphs.cpp

#endif