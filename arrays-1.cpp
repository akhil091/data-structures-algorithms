///////////////////////////////linear search
//Time Complexity: O(n), where n is the length of the array.Space Complexity: O(1)
int linearSearch(int n, int num, vector<int> &arr)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        return i;
    }
    return -1;
}

///////////////////union of 2 array
//approach using set
#include <bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    set < int > s;
    vector < int > Union;

    for (int i = 0; i < a.size(); i++) {
        s.insert(a[i]);
    }
    for (int i = 0; i < b.size(); i++) {
        s.insert(b[i]);
    }
    for (auto & it: s){
        Union.push_back(it);
    }
    return Union;
}




