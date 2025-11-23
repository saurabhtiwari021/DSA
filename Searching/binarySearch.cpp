#include <iostream>
using namespace std;

int BinarySearch(int arr[] , int n , int key)
{
    int start = 0 , end = n-1 , mid;

    while (start <= end)
    {
        mid = start + (end - start ) / 2 ; // To avoid the overflow condition as int contains only 32 bit of data
        
        if (arr[mid] == key )
        return mid;

        else if ( arr[mid] < key )
        start = mid + 1;

        else 
        end = mid -1;
    }

    return -1;
}

int main()
{
    int arr[1000];
    cout<<"enter the elements of array : ";
    int n , key;
    cin>>n;

    for(int i = 0 ; i< n ; i++)
    {
        cin>> arr[i];
    }
    cout<<"enter the element you want to search : ";
    cin>>key;

    int result = BinarySearch(arr, n, key);
    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;


}