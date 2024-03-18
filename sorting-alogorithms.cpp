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
