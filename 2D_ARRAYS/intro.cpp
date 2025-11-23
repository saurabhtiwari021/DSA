#include <iostream>
using namespace std;

void printcol(int arr[][4], int row , int col)
{
    for(int j=0; j<col; j++)
    for(int i = 0; i<row; i++ )
    cout<<arr[i][j]<<" ";
    
}

int main()
{
    // TO CREATE 2D ARRAYS
    int arr[3][4] = {1, 2 , 3 , 4 , 5 , 6 , 7 ,8 , 9 , 10 , 11 , 12};
    

    // to print all the values 
    for(int i = 0 ; i<3; i++)
    {
        for(int j = 0 ; j<4 ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    

    // to print all values coloum wise (function call)

     printcol(arr,3,4);   


     // to find an element in an array 

     int x = 7;

     for(int i = 0 ; i< 3 ; i++)
        for(int j = 0 ; j<4 ; j++)
        {
            if(arr[i][j] == 7)
            {
                cout<<"element has been found !";
            }
             
         }
      
}   