//Sort the given unsorted array 'arr' of size 'N' in non-decreasing order using the selection sort algorithm.
void selectionSort(vector<int>&arr) { // finds the minimum and swaps with the ith element
    int n = arr.size();

    for(int i=0; i < n - 1; i++) {
        int minimum = i;
        for(int j=i+1; j < n; j++) {
            if(arr[j] < arr[minimum] ) {
                minimum = j;
            }
        }
        int temp = arr[minimum];
        arr[minimum] = arr[i];
        arr[i] = temp;
    }
}

// Bubble Sort: pushes the max to the lasr by adjacent swaps
void bubbleSort(vector<int>& arr, int n) 
{
   for (int i = n - 1; i >= 0; i--) {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0) {
            break;
        }
    }
}

//Insertion sort - takes an element and place it on its correct order
void insertionSort(int arr[], int n)
{
    for(int i=0; i<= n-1; i++) {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j] ) {
            int temp  = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

//recursive- insertion sort
void insertionSort(int arr[], int n)
{
    // Base case: if array size is 1 or less, it's already sorted
    if (n <= 1)
        return;

    // Sort first n-1 elements recursively
    insertionSort(arr, n - 1);

    // Insert last element at its correct position in sorted array
    int last = arr[n - 1];
    int j = n - 2;

    // Move elements greater than last to one position ahead
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    // Insert last at its correct position
   
//Merge Sort:
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    vector<int>temp;
    int left=l;
    int right=mid+1;

    while(left<=mid && right <=r){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
            temp.push_back(arr[left]);
            left++;
    }

    while(right<=r){
            temp.push_back(arr[right]);
            right++;
    }

    for(int i =l;i<=r;i++){
        arr[i]=temp[i-l];
    }
}

void mergeSort(int arr[], int l, int r) {

    if(l>=r){
        return;
    }
    int mid = (l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}

void mergeSort(vector<int>& arr, int l, int r) {
    int n = arr.size();
    int* arrPtr = &arr[0];
    mergeSort(arrPtr, l, r);
}
//Space complexity: O(n)  
//Time complexity: O(nlogn) 


