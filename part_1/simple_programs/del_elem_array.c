#include <stdio.h>

void del(int arr[], int *n, int key) {
  
    // n* = 5, key = 30, arr[] = {10, 20, 30, 40, 50}

  	// Find the element
  	int i = 0;
  	while (arr[i] != key) i++; //?woah! here just find index of elem
    //   printf("%d ", arr[i]);
    // i = 2

    
    // 10 20 [30]
    
  	
    // Shifting the right side elements one
  	// position towards left

    //pointer algebra 

    // for ( j = 2; 2 < 5 - 1; 2++)
    for (int j = i; j < *n - 1; j++) {
        // on this Step just delete all  value to 4
        // 10 & 20 ignored -> 30 = 40; 40 = 50 -END OF LOOP- 
        //index: 3, 4 
        arr[j] = arr[j + 1];
    }
  
  	// Decrease the size

    //without = 10 20 40 50 [50]-extra 
    (*n)--;

}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

  	// Delete the key from array
    del(arr, &n, key);
  
  	for (int i = 0; i < n; i++)
      	printf("%d ", arr[i]);

    return 0;
}