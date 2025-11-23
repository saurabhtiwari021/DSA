#include <iostream>
using namespace std;

class Student {
    public:
    
    string name ;
    int age , roll;
    char grade;
};

int main()
{
    Student *S = new Student;
    S -> name = "Saurabh";
    S -> age = 19;
    S -> roll = 2106;
    S -> grade = 'A';

    cout << S->name <<endl;\
    delete S;

}