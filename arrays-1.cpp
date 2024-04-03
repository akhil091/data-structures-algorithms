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




