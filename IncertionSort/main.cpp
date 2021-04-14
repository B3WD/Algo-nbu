#include <iostream>

void fillArr(int arr[], int sz, int start = 0, int end = 100){
  std::srand(time(NULL));

  for(int i = 0; i < sz; i++){
    arr[i] = std::rand() % (end-start) + start;
  }
}


void printArr(int* arr, int sz){
  for(int i = 0; i < sz; i++){
    std::cout << arr[i] << " ";
  }
}


int minElemIndex(int arr[], int start, int sz){
  int indexOfMin = start;

  for(int i = start; i < sz; i++){
    if(arr[i] < arr[indexOfMin]){
      indexOfMin = i;
    }
  }

  return indexOfMin;
}


void swap(int& a, int& b){
  int tmp;
  tmp = b;
  b = a;
  a = tmp;
}


void sort(int arr1[], int sz){
  int indexMin;

  for(int i = 0; i < sz - 1; i++){
    indexMin = minElemIndex(arr1, i, sz);
    swap(arr1[i], arr1[indexMin]);
  }
}


int main() {
  
  const int sz = 100;

  int arr1[sz];

  fillArr(arr1, sz, 0, 1000);
  printArr(arr1, sz);

  sort(arr1, sz);

  std::cout << "\n-->\n";
  printArr(arr1, sz);
}