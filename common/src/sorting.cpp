#include <iostream>

//O(n)
int selection_sort(int arr[], int n){
  for (int i=0; i<n-1; i++){
    for (int j=i+1; j<n; j++){
      if (arr[j] < arr[i]){
        std::swap(arr[j], arr[i]);
      }
    }
  }
}

int bubble_sort(int arr[], int n){

}

int quicksort(int arr[], int n){

}


int merge_sort(int arr[], int n){
  
}

int insertion_sort(int arr[], int n){
  
}