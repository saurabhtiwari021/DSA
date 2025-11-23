#include <iostream>
using namespace std;

int findFirst(int arr[], int n, int target) {
    int start = 0, end = n - 1, result = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            result = mid;
            end = mid - 1; // Look on the left
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}

int findLast(int arr[], int n, int target) {
    int start = 0, end = n - 1, result = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            result = mid;
            start = mid + 1; // Look on the right
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}

int main() {
    int arr[1000], n, key;
    cout << "Enter the elements of the array in **sorted order**: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element you want to search: ";
    cin >> key;

    int first = findFirst(arr, n, key);
    int last = findLast(arr, n, key);

    if (first != -1 && last != -1) {
        cout << "First occurrence at index: " << first << endl;
        cout << "Last occurrence at index: " << last << endl;
        cout << "Total number of occurrences: " << (last - first + 1) << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
