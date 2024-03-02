//The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula - F(n) = F(n - 1) + F(n - 2), Where, F(1) = 1, F(2) = 1 Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.
//"Indexing is start from 1"
//Example : Input: 6 Output: 8

#include<bits/stdc++.h>
using namespace std;

int findNthFibonacci(int n) {
        if( n== 1 || n == 2){
                cout << 1;
        }
        int current;
        int prev1 = 1;
        int prev2 = 1;
        if(n>2) {
                for (int i = 3; i <= n; i++) {
                  current = prev1 + prev2;
                  prev1 = prev2;
                  prev2 = current;
                }
                cout << current;
        }
}

int main()
{
        int n;
        cin >> n;
        findNthFibonacci(n);
}
