// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int first = 0;
int last = size - 1;
int index = -1;
int mid;
while (first <= last) {
  mid = (first + last) / 2;
  if (arr[mid] == value) {
    index = mid;
    } else if (arr[mid] < value) {
      first = mid+1;
    } else if (arr[mid] > value) {
      last = mid - 1;
    }
}	
  if (index != -1) {
    int start = index;
    int count = 0;
    while (arr[index] == value) {
      count++;
      index--;
    }
    index = start + 1;
    while (arr[index] == value) {
      count++;
      index++;
    }
    return count;
  }
  return 0;
}
