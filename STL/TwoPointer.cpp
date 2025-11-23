#include <iostream>
using namespace std;

void segregate0and1(int arr[], int size) {
    int left = 0, right = size - 1;

    while (left < right) {
    
        while (arr[left] == 0 && left < right)
            left++;

        while (arr[right] == 1 && left < right)
            right--;

        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {0, 1, 1, 0, 1, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    segregate0and1(arr, size);

    cout << "Segregated array: ";
    printArray(arr, size);

    return 0;
}

