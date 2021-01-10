// Linear Search

// Includes
#include <bits/stdc++.h>

// Function prototypes
int search(int arr[], int n, int x);

// Main function
int main() {
	int arr[] = {1,2,3,4,20};
	int x = 3;
	int n = sizeof(arr)/sizeof(arr[0]);
	int result = search(arr, n, x);
	std::cout << result;
	return 0;
}

// Linear search function
// If found returns index of the element
// else returns -1
int search(int arr[], int n, int x) {
	int index = -1, i = 0;
	for(i=0;i<n;i++) {
		if(arr[i] == x) {
			index = i+1;
			return index;
		}
	}
	return index;
}