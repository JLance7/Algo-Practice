#ifndef LIB_H
#define LIB_H
#include <string>
#include <vector>
#include <unordered_map>
#include "node.hpp"
#include "DoublyLinkList.hpp"

//function prototypes
//common.cpp
int fibonacci(int);
std::string reverse_string(std::string);
bool check_palindrome(std::string);
void reverse_list(int**);
std::vector<std::string> fizz_buzz(int);
std::unordered_map<char, std::vector<int>> matches(std::string);
bool is_prime(unsigned int);
void print_primes(int);
void print_primes_sieves(int);

//lists.cpp
std::vector<node*> link_list(int[], int);
node* reverse_list(node*);
void print_list(node*);

//tree_searching
node* createBinarySearchTree(std::vector<int>);
void addToTree(node*& head, int num);
void BFS(node*);
void preorder(node*);
void inorder(node*);
void postorder(node*);
void invertBinarySearchTree(node*&);

//searching
int linear_search(int[], int, int);
int binary_search(int[], int, int);

//sorting.cpp
void selection_sort(int[], int);
void bubble_sort(int[], int);
void insertion_sort(int[], int);
void quicksort(int[], int);
void mergesort(int[], int);

//graphs.cpp
void dijikstra();

#endif