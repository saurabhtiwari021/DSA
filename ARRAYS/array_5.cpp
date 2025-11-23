// TO FIND SECOND MAXIMUM OF AN ARRAY
#include <iostream>
#include <climits>
using namespace std;

int main()
{ 
    int arr[6] = {2 , 6 , 4 , 3 ,8 , 5 };

    int ans = INT_MIN;
    // largest number 
    for(int i = 0 ; i < 6 ; i++)
    {
        if(arr[i]< ans)
        {
            ans = arr[i];
        }
    }

    int second = INT_MIN;
    // SECOND LARGEST NUMBER 
    for(int i = 0 ; i<6 ; i++)
    {
        if (arr[i] != ans )
        {
            second = max(second , arr[i]);
        }

        cout << second << " ";
        
    }

}