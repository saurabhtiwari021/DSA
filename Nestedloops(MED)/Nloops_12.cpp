#include <iostream>
using namespace std;
int main()
{
    int row, col , num;
    char name;

    cout<<"ENTER YOUR NUMBER : ";
    cin>>num;

    for (row = 1 ; row<= num ; row++)
    {
        for (col = 1 ; col <= num-row ; col++)
        {
            cout<<"  ";

        }
        
       for ( name = 'A' ; name <= 'A' +(row-1); name++)
       {
        cout << name<<" ";
       } 
       cout<<endl;
    }
}