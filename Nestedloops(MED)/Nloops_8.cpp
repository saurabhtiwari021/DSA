#include <iostream>
using namespace std;
int main()
{
    int row,col;
    for(row = 5 ; row>=1; row--)
    {
        for (col = 5 ; col >= row ; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}