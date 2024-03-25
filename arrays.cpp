//////////////////////////////Find the Largest element in an array
int largestElement(vector<int> &arr, int n) {
    //////brute force:Time Complexity: O(N log(N)), Space Complexity: O(n)
    //sort(arr.begin(),arr.end());
   // return arr[arr.size()-1];

    int max = arr[0];//optimal approach: Time Complexity: O(N), Space Complexity: O(1)
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
        max = arr[i];
        }
    }
    return max;
}



/////////////////////////Find Second Smallest and Second Largest Element in an array
vector<int> getSecondOrderElements(int n, vector<int> a) {
    //only for unique elemets: Time Complexity: O(NlogN), Space Complexity: O(1)
    //sort(a.begin(),a.end());
    // {a[a.size()-2], a[1]};

    if(n<2) return {};
    int small = INT_MAX;
    int second_small = INT_MAX;
    
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i<n; i++) {
        if(a[i] < small) {
            second_small = small;
            small = a[i];
        }
        if(a[i] < second_small &&  a[i] != small) {
            second_small = a[i];
        }
    }

    for(int i = 0; i<n; i++) {
        if(a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        }
        if(a[i] > secondLargest &&  a[i] != largest) {
            secondLargest = a[i];
        }
    }
    //Time Complexity: O(N), Single-pass solution,Space Complexity: O(1)
    return { secondLargest, second_small};
}

/////////////////////if array is sorted
int isSorted(int n, vector<int> a) {
    for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
     }
    return true;
    //tC: O(n), SC: O(1) 
}



/////////////////remove duplcates from the array:Return the length of this new array.
//solution 1:
#include <set> ;
int removeDuplicates(vector<int> &arr, int n) {
	//brute approach: making a set and then put the elements in an array, iterating through set, TC: NlogN +N, SC: O(N)
	set < int > set;
	for (int i = 0; i < n; i++) {
		set.insert(arr[i]);
	}
	int k = set.size();
	int j = 0;
	for (int x: set) {
		arr[j++] = x;
	}
	return k;
}

//solution 2:Time Complexity: O(N), Space Complexity: O(1)
int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
return i + 1;

 /////////////////////////////////Left Rotate an Array by One-  brute approach
vector<int> rotateArray(vector<int>& arr, int n) {
    //Time Complexity: O(n), as we iterate through the array only once., Space Complexity: O(n) as we are using another array of size, same as the given array.
   vector<int> temp;
  for (int i = 1; i < n; i++) {
    temp.push_back(arr[i]);
  }
   temp.push_back(arr[0]);
  return temp;
}

//optimal approach
vector<int> rotateArray(vector<int>& arr, int n) {

 int temp = arr[0]; // storing the first element of array in a variable
  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp;
  return arr;
//Time Complexity: O(n), as we iterate through the array only once.
//Space Complexity: O(1) as no extra space is used
}

/////////////////////////Rotate array by K elements from left
//Time Complexity: O(n), Space Complexity: O(k) since k array element needs to be stored in temp array
vector<int> rotateArray(vector<int>arr, int k) {
   int n = arr.size();
    // Check if array size is zero, no rotation needed
    if (n == 0)
        return arr; // No rotation needed, return original vector
    
    // Normalize rotation count to avoid unnecessary rotations
    k = k % n;
    
    // If normalized rotation count exceeds array size, no rotation needed
    if (k == 0)
        return arr; // No rotation needed, return original vector
    
    // Temporary vector to store elements to be rotated
    std::vector<int> temp(arr.begin(), arr.begin() + k);

    // Shift remaining elements to the left by 'k' positions
    for (int i = 0; i < n - k; i++)
    {
        arr[i] = arr[i + k];
    }

    // Copy back the rotated elements from the temporary vector to the end of the original vector
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - n + k];
    }
    return arr;
}

///////////////////////move-all-zeros-to-the-end-of-the-array
//brute approach: Time Complexity: O(N) + O(X) + O(N-X) ~ O(2*N), where N = total no. of elements, Space Complexity: O(N), 
vector<int> moveZeros(int n, vector<int> a) {
   vector<int> temp;
    //copy non-zero elements
    //from original -> temp array:
    for (int i = 0; i < n; i++) {
        if (a[i] != 0)
            temp.push_back(a[i]);
    }

    // number of non-zero elements.
    int nz = temp.size();

    //copy elements from temp
    //fill first nz fields of
    //original array:
    for (int i = 0; i < nz; i++) {
        a[i] = temp[i];
    }

    //fill rest of the cells with 0:
    for (int i = nz; i < n; i++) {
        a[i] = 0;
    }
    return a;
}

//optimal approach :Time Complexity: O(N), N = size of the array., SC: O(1)
vector<int> moveZeros(int n, vector<int> a) {
   int j = -1;
   for(int i=0; i<n; i++) {
       if(a[i] == 0) {
           j = i;
           break;
       }
   }
   //no non-zero elements
   if (j == -1) return a;
    //Move the pointers i and j
    //and swap accordingly:
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}





