// to print factorial of a number using recursion
#include <iostream>
using namespace std;

int printFact(int num)
{
    if (num <= 1) 
        return 1;
    else
        return num * printFact(num - 1);  
}

int main()
{
    int num;
    cout << "Enter the number to find the factorial: ";
    cin >> num;

    if (num < 0)
        cout << "Factorial is not defined for negative numbers." << endl;
    else
        cout << "Factorial of " << num << " is " << printFact(num) << endl;

    return 0;
}
