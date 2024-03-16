//1 to N without loop
vector<int> printNos(int x) {
    if(x==0){
        return {};
    }else{
        //decrementing value of x
        vector<int> arr = printNos(x-1);
        //emplace_back is faster than push_back
        arr.emplace_back(x);
        return arr;
    }
}

//print fibonacci series
vector<int> generateFibonacciNumbers(int n) {
    if (n <= 0) {
        return {};
    }
    if (n == 1) {
        return {0};
    }
    if (n == 2) {
        return {0, 1};
    }

    vector<int> v = generateFibonacciNumbers(n - 1);
    int last = v.back();
    int secondLast = v[v.size() - 2];
    v.push_back(last + secondLast);

    return v;
}


//Check palindrome recursive
bool isPalindrome(string& str, int i =0 ) {
    if(i >= str.length()/2) return true;

    if(str[i] != str[str.length()-i-1]) return false;

    return isPalindrome(str, i+1);
}

//reverse an array
vector<int> reverseArray(int n, vector<int> &nums )
{
    if(n==0)
    {
        return {};
    }
    cout << nums[n-1] <<" ";
    return reverseArray(n-1,nums);
}


//factorial numbers upto N
vector<long long> factorialNumbers(long long n, long long i=1, long long fact=1) {
    if(fact>n) {
        return {};
    }
    cout<<fact<<" ";
    i++;
    fact = fact * i;
    return factorialNumbers(n, i, fact);
}

//N to 1
vector<int> printNos(int x) {
    vector<int> vec;
    static int n = x;
    if(x!=0){
        vec = printNos(x-1);
        vec.push_back(n--);
        return vec;
    }
    return vec;
}


