#include <iostream>

//linear search lol, O(N)
int linear_search(int arr[], int n, int num){
  for (int i=0; i<n; i++){
    if (arr[i] == num) 
      return i;
    else 
      return -1;
  }
}

//Must be sorted in ascending order
//binary search, O(Log2N)
//check middle element, if it is element return index, else if it is less than, split arr in lower half, else upper half
int binary_search(int arr[], int n, int num){
  int minIndex = 0;
  int maxIndex = n-1;
  
  while (true){
    int middleIndex = (maxIndex+minIndex)/2;
    if (arr[middleIndex] == num){
      return middleIndex;
    }
    else if (arr[middleIndex] < num){
      minIndex = middleIndex + 1;
    }
    else if (arr[middleIndex] > num){
      maxIndex = middleIndex - 1;
    }
    else if (minIndex == maxIndex) return -1;
  }
}