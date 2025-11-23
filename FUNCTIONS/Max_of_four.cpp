// to find maximum of among 4 input numbers
#include <iostream>
using namespace std;

int max_of_four(int arr[], int size)
{
    int maxVal = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }

    return maxVal;
}

int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    int num = max_of_four(arr, 4);

    cout << "Max number among these numbers is : "<<num<<endl;

    return 0;
}