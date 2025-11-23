// TO PRINT SUM OF TWO NUMBERS 
#include <iostream>
using namespace std;

// FUNCTION DECLARATION FOR SUM

int Sum ( int m, int n)
{
   int ans = m+n; // FUNCTION DEFINED
   return ans;
}

// function declaration for multiplication 

int Multi ( int p , int q)
{
    int Ans = p * q ;    // function defined
    return Ans;
}


int main()
{
    int a,b;
    cout<<"ENTER YOUR TWO NUMBER : ";
    cin>>a>>b;
    
    // FUNCTION CALL
    cout<< "THE SUM OF NUMBERS IS : " << Sum( a,b);
    cout <<endl;
    cout << "THE MULTIPLICATION OF NUMBERS IS : " << Multi( a,b)<<endl;

    return 0;
}
