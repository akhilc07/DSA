//INSERTION SORT
#include <stdio.h>

void insertion_sort(int arr[], int length) {
  int i, j, k;
  
  for (i = 1; i < length; i++) {
    k= arr[i];
    j = i - 1;

    while (j >= 0 && arr[j] > k) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }

    arr[j + 1] = k;
  }
}

int main() {
  int length;

  // get the length of the array from the user
  printf("Enter the length of the array: ");
  scanf("%d", &length);

  int arr[length];

  // get the elements of the array from the user
  for (int i = 0; i < length; i++) {
    printf("Enter element %d: ", i);
    scanf("%d", &arr[i]);
  }

  insertion_sort(arr, length);

  // print the sorted array
  printf("Sorted array: ");
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
