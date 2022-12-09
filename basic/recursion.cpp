#include <iostream>

int fibonacci(int n){
  if (n <= 1)
   return n;
  else {
    return n-1 + n-2;
  }
}