#include <bits/stdc++.h>
using namespace std;

//*
//**
//***
//**
//*
void nStarTriangle(int N) {
    for(int i=1;i<=2*N-1;i++){
          
          // stars would be equal to the row no. uptill first half 
          int stars = i;
          
          // for the second half of the rotated triangle.
          if(i>N){stars = 2*N-i;}
          
          // for printing the stars in each row.
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          
           // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
}


//  *
// ***
//*****
//*****
// ***
//  *
void nStarDiamond(int n) {
    for(int i=0; i<n; i++) {
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        for(int j = 0; j < 2*i+1; j++){
            cout << "*";
        }
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        
        cout << endl;
    }
    for(int i=0; i<n; i++) {
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < 2*n-(2*i+1); j++){
            cout << "*";
        }
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        
        cout << endl;
    }
}


///*****
// ***
//  *
void nStarTriangleInverted(int n) {
    for(int i=0; i<n; i++) {
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < 2*n -(2*i+1); j++){
            cout << "*";
        }           
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

//  *
// ***
//*****
void nStarPyramid(int n) {
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int j=0; j< 2*i + 1; j++){
            cout <<  "*";        
        }
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout <<  endl;
    }
}

//1 2 3
//1 2
//1
void nNumberTriangle(int n) {
    for(int i=0; i<n; i++){
		for(int j=n; j>i; j--){
			cout << n-j+1 << " ";
		}
		cout << endl;
	}
}

//* * *
//* *
//*
void seeding(int n) {
	for(int i=0; i<n; i++){
		for(int j=n; j>i; j--){
			cout << "* ";
		}
		cout << endl;
	}
}


//1
//2 2 
//3 3 3
void triangle(int n) {
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout << i << " ";
		}
		cout << endl;
	}
}


//1
//1 2 
//1 2 3
void nTriangle(int n) {
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout << j << " ";
		}
		cout << endl;
	}
}


//* 
//* *
//* * *
void nForest(int n) {
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout << "* ";
		}
		cout << endl;
	}
}


//* * *
//* * *
//* * *
void nForestSquare(int n) {
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << "* ";
		}
		cout << endl;
	}
}

//1
//0 1
//1 0 1
void nBinaryTriangle(int n) {
    int start = 1;
    for(int i=0; i<n; i++){
        if(i%2 == 0) {
            start = 1;
        } else {
            start = 0;
        }
        for(int j=0; j<=i; j++) {
            cout << start << " ";
            start = 1- start;
        }
        cout << endl;
    }
}


//1         1
//1 2     2 1
//1 2 3 3 2 1
void numberCrown(int n) {
    int space = 2*n-2;
    for(int i=1; i<=n; i++) {
        
        for(int j=1; j<=i; j++){
            cout << j<< " ";
        }
        for(int j=1; j<= space; j++){
            cout << " ";
        }
        for(int j=i; j>=1; j--) {
            cout << j<< " ";
        }
        cout << endl;
        space = space - 2;
    }
}


//1
//2 3
//4 5 6
void nNumberTrianglePyramid(int n) {
    int num = 1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++){
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

//A
//A B
//A B C
void nLetterTriangle(int n) {
    for(int i=0; i<n; i++){
        for(char ch = 'A'; ch <= 'A' + i; ch++){ //single quotes only -ASCII
            cout << ch << " ";
        }
        cout << endl;
    }
}

//A B C
//A B
//A
void nLetterTriangleInverted(int n) {
    for(int i =0; i<n; i++){
        for(char ch='A'; ch < 'A' + n-i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

//A
//B B
//C C C
void alphaRamp(int n) {
    for(int i=0; i<n; i++){
        char ch = 'A' + i ;  
        for(int j=0; j<=i; j++) {
            cout <<  ch << " "; 
        }
        cout << endl;
    }
}

//    A
//  A B A
//A B C B A
void alphaHill(int n) {
    for(int i=0;i<n;i++){

          // for printing the spaces.
          for(int j=0;j<n-i-1;j++){
              cout<<" ";
          }
          
          // for printing the characters.
          char ch = 'A';
          int breakpoint = (2*i+1)/2;
          for(int j=1;j<=2*i+1;j++){
              
              cout<<ch << " ";
              if(j <= breakpoint) ch++;
              else ch--;
          }
          // for printing the spaces again after characters.
          for(int j=0;j<n-i-1;j++){
              cout<<" ";
          }
          cout<<endl;
      }
}

//C
//C B 
//C B A
void alphaTriangle(int n) {
    for (int i = 0; i < n; i++) {
        char currentChar = 'A' + n - 1;  // Start with the last alphabet

        // Print alphabets in reverse order
        for (int j = 0; j <= i; j++) {
            cout << currentChar << " ";
            --currentChar;  
        }

        cout << endl;
    }
}

//****
//*  *
//*  *
//****
void getStarPattern(int n) {
   for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++){
        if(i == 0 || i == n-1 || j==0 || j==n-1){
            cout << "*";
        }
        else{
            cout << " ";
        }
    }
    cout << endl;
   }
}


//* * * * * * 
//* *     * * 
//*         * 
//*         * 
//* *     * * 
//* * * * * * 
void symmetry(int n) {
    int iniS = 0;
      for(int i=0;i< n;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=n-i;j++){
              cout<<"*" << " ";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          //for printing the stars in the row.
          for(int j=1;j<=n-i;j++){
              cout<<"*" << " ";
          }
          // The spaces increase by 2 every time we hit a new row.
          iniS+=2;
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
      
      // for lower half of the pattern
      // initial spaces.
      iniS = 2*n -2;
      for(int i=1;i<=n;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*" << " ";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*" << " ";
          }
          // The spaces decrease by 2 every time we hit a new row.
          iniS-=2;
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
}


//*         *
//* *     * *
//* * * * * *
//* *     * *
//*         *

void symmetryButterfly(int n) {
      int spaces = 2*n-2;
      for(int i = 1;i<=2*n-1;i++){
          
          int stars = i;
          
          if(i>n) stars = 2*n - i;
          
          for(int j=1;j<=stars;j++){
              cout << "*" << " ";
          }
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          for(int j = 1;j<=stars;j++){
              cout << "*" << " ";
          }

          cout<<endl;
          if(i<n) spaces -=2;
          else spaces +=2;
      }
}

//4444444
//4333334
//4322234
//4321234
//4322234
//4333334
//4444444
void getNumberPattern(int n) {
    for(int i=0;i<2*n-1;i++){
         
         // inner loop for no. of columns.
         for(int j=0;j<2*n-1;j++){
             
             // Initialising the top, down, left and right indices of a cell.
             int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
             
             // Min of 4 directions and then we subtract from n
             // because previously we would get a pattern whose border
             // has 0's, but we want with border N's and then decreasing inside.
             cout<<(n- min(min(top,bottom), min(left,right)));
         }
         
         // As soon as the numbers for each iteration are printed, we move to the
         // next row and give a line break otherwise all numbers
         // would get printed in 1 line.
         cout<<endl;
     }
}

int main()
{   
    int N;
    cout << "Enter a number: ";

    cin >> userInput;
    
    nStarTriangle(N);
    nStarDiamond(N);
    nStarTriangleInverted(N);
    nStarPyramid(N);
    nNumberTriangle(N);
    seeding(N);
    triangle(N);
    nTriangle(N);
    nForest(N);
    nForestSquare(N);
    nBinaryTriangle(N);
    numberCrown(N);
    nNumberTrianglePyramid(N);
    nLetterTriangle(N);
    nLetterTriangleInverted(N);
    alphaRamp(N);
    alphaHill(N);
    alphaTriangle(N);
    getStarPattern(N);
    symmetry(N);
    symmetryButterfly(N);
    getNumberPattern(N);

    return 0;
}