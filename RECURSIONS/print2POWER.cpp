// to find the power of 2 using recursion

#include <iostream>
using namespace std;

int printPow(int base, int power)
{
    if (power == 0)
        return 1;
    else
        return base * printPow(base, power - 1);
}

int main()
{
    int n;
    cout << "Enter the power of 2 to calculate: ";
    cin >> n;

    cout << "The result is: " << printPow(2, n) << endl;

    return 0;
}
