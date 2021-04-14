import numpy as np

def search_sorted(num, arr):

  l = 0
  r = len(arr)-1

  while(l<=r):
    mid = int((l+r)/2)

    if num > arr[mid]:
      l = mid + 1
    else:
      r = mid - 1

    if(arr[mid] == num):
      return mid

  return None


arr = np.arange(0, 100, 3);
num = int(input())

index = search_sorted(num, arr)

print(f"Searched for {num}, found it at index {index}.")