#include <iostream>
using namespace std;
int main()
{
    int row , col,num;
    cout << "ENTER YOUR NUMBER : ";
    cin>>num;

    for (row = 1; row<= num ; row++)
    {
        for( col = 1; col<= 5-row; col++)
        {
            cout<<"  ";
        }

       for ( col = row ; col>= 1 ; col--)
       {
        cout << col <<" ";
       } 
       cout<<endl;
    }
}