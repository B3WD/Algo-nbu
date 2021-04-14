#include <iostream>

void fillArr(int arr[], int sz){
  std::srand(time(NULL));

  for(int i = 0; i < sz; i++){
    arr[i] = std::rand() % 100;
  }
}


void printArr(int* arr, int sz){
  for(int i = 0;i < sz; i++){
    std::cout << arr[i] << " ";
  }
}


int maxElemIndex(int arr[], int sz){
  int indexOfMax = 0;

  for(int i = 0; i < sz; i++){
    if(arr[i] >= arr[indexOfMax]){
      indexOfMax = i;
    }
  }

  return indexOfMax;
}


int minElemIndex(int arr[], int sz){
  int indexOfMin = 0;

  for(int i = 0; i < sz; i++){
    if(arr[i] < arr[indexOfMin]){
      indexOfMin = i;
    }
  }

  return indexOfMin;
}


void sort(int arr1[], int arr2[], int sz){
  int indexMin;
  int maxValue = arr1[maxElemIndex(arr1, sz)];
  arr2[sz - 1] = maxValue;

  for(int i = 0; i < sz - 1; i++){
    indexMin = minElemIndex(arr1, sz);
    arr2[i] =  arr1[indexMin];
    arr1[indexMin] = maxValue;
  }
}


int main() {
  
  int arr1[10];
  int arr2[10];

  fillArr(arr1, 10);

  std::cout << "Array: ";
  printArr(arr1, 10);
  std::cout << "\n";

  sort(arr1, arr2, 10);

  std::cout << "Sorted array: ";
  printArr(arr2, 10);
}