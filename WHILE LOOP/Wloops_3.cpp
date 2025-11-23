#include <iostream>
using namespace std;
int main()
{
    int n , i;
    cout<<"ENTER YOUR NUMBER : ";
    cin>>n;

    i = 1;
    while ( i <= n)
    {
        if ( i % 2 == 0)
        {
            cout << "EVEN NUMBERS ARE : "<< i<<" " << endl;
        }

        else if ( i % 2 == 1)
        {
            cout << " ODD NUMBERS ARE : "<<i<<" ";
        }

        i++;
    }
}