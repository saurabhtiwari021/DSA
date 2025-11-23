#include <iostream>
using namespace std;

bool PRIME(int n)
{
    if ( n < 2)
    {
        return 0;
    }
   
        for (int i = 2 ; i<= n ; i++ )
        {
            if ( n % i == 0)
            {
                return 0;
            }
        }
    
}

int FACT(int n)
{
    int ans = 1;
    for(int i = 1 ; i<= n ; i++)
    
    ans = ans*i;
     return ans;
}

int main()
{
    int a,b;
    cout<<"ENTER YOUR TWO NUMBERS : ";
    cin>> a >> b;

    // A IS A PRIME NUMBER OR NOT
     
     cout << PRIME(a)<<endl;
     
     // FACTORIAL OF A
     cout<< FACT(a)<<endl;

     // FACT OF B 
     cout << FACT(b)<<endl;

     // B IS PRIME NUMBER OR NOT
     cout<< PRIME(b);
}