// Bubble sort

// Includes
#include <bits/stdc++.h>

// Prototyping of function
void sort(int arr[], int arrSize);
void printArr(int arr[], int arrSize);
void swap(int *a, int *b);

// Main function
int main() {
	int arr[] = {10,1,5,9,3,2,76};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arrSize);
	printArr(arr, arrSize);
	return 0;
}

// swapping function
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Main sorting array
void sort(int arr[], int arrSize) {
	int a=0, b=0, temp=0;
	for(a=0;a<arrSize-1;a++) {
		for(b=0;b<arrSize-a-1;b++) {
			if(arr[b] > arr[b+1]) {
				swap(&arr[b], &arr[b+1]);
			}
		}
	}
}

// Array Printing function
void printArr(int arr[], int arrSize) {
	int a=0;
	for(a=0;a<arrSize;a++) {
		std::cout << arr[a] << " ";
	}
	std::cout << "\n";
}