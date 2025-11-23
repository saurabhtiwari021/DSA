// PRINT THE FACTOR OF A NUMBER 
#include <iostream>
using namespace std;
int main()
{
    int i , n;
    cout <<" ENTER YOUR NUMBER : ";
    cin>> n;

    i = 1;
    while ( i <= n)
    {
        if ( n % i == 0)
        {
            cout << i << " ";
        }
        i++;
    }
}