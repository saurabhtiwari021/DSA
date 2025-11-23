// TO CHECK IF A NUMBER IS A PRIME NUMBER OR NOT
#include <iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"ENTER YOUR NUMBER : ";
    cin>>num;

    if(num < 2)
    {
        cout <<"not a prime number";
        return 0;
    }

    else 
    {
        for (i = 2 ; i< num ; i++)
        {
            if(num % i == 0)
            {
                cout<<"not a prime number";
                return 0;
            }
        }

        cout <<"a prime number";

    }
}