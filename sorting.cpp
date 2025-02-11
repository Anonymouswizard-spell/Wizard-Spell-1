/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void bubbleSort(int arr[],int n) {
	for(int i =0; i<n-1; i++) {
		for(int j=0; j<n-i-1; j++) {
			if (arr[j]>arr[j+1]) {
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

void selectionSort(int arr[],int n) {
	for(int i =0; i<n-1; i++) { //beacuse of n-1 iterations
		int smallestIdx=i;//starting of unsorted part
		for (int j=i+1; j<n; j++) {
			if (arr[j]<arr[smallestIdx]) {
				smallestIdx=j;
			}
		}
		swap(arr[i],arr[smallestIdx]);
	}

}

void insertionSort(int arr[], int n) {
	for (int i=1; i<n; i++) {
		int curr = arr[i];
		int prev= i-1;
		while (prev>=0 && arr[prev] > curr) {
			arr[prev+1] =arr[prev];
			prev--;
		}
		arr[prev+1]=curr; //placing curr to its correct position
	}
}

void printArray(int arr[],int n) {
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int arr1[]= {5,6,8,2,1},arr2[]= {26,24,28,23,21,20},arr3[]= {12,14,16,19,10};
	int n1=sizeof(arr1)/sizeof(arr1[0]);
	cout<<"size of arr1 is " <<n1<<endl;
	int n2=sizeof(arr2)/sizeof(arr2[0]);
	cout<<"size of arr2 is " <<n2<<endl;
	int n3=sizeof(arr3)/sizeof(arr3[0]);
	cout<<"size of arr3 is " <<n3<<endl;
	bubbleSort(arr1,n1);
	selectionSort(arr2,n2);
	insertionSort(arr3,n3);
	printArray(arr1,n1);
	printArray(arr2,n2);
	printArray(arr3,n3);

	return 0;
}