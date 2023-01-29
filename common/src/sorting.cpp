#include <iostream>

//O(n^2)
void selection_sort(int arr[], int n){
  for (int i=0; i<n-1; i++){
    for (int j=i+1; j<n; j++){
      if (arr[j] < arr[i]){
        std::swap(arr[j], arr[i]);
      }
    }
  }
}

//swap two adjacent elements, 
void bubble_sort(int arr[], int n){ 
  int i, j;
  for (i=0; i<n-1; i++){
    for (j=0; j<n-i-1; j++){
      if (arr[j] > arr[j+1]){
        std::swap(arr[j], arr[j+1]);
      }
    }
  }
}

//from current index, down to left bottom index, check if left item is bigger and swap
void insertion_sort(int arr[], int n){
  for (int i=1; i<n; i++){
    int j=i;
    while (j > 0 && arr[j-1] > arr[j]){
      std::swap(arr[j], arr[j-1]);
      j--;
    }
  }
}

void quicksort(int arr[], int n){

}


void merge_sort(int arr[], int n){
  
}
