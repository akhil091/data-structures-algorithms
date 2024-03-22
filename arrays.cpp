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







