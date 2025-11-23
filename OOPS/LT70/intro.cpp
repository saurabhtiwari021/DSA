#include <iostream>
using namespace std;

class Student{
   /*public:
        string name;
        int age , roll_no;
        string grade;

        */

        // default access modifier in a class in c++ is private , if we still wanna get the values , we can use the getter and setter function
        private :
        string name;
        int age , roll_no;
        string grade;

        public:
        void setName(string s)
        {
            name = s;
        }

        void setroll(int r)
        {
            roll_no= r;
        }

        void setage(int a)
        {
            age = a;
        }

        void setGrade(string g)
        {
            grade = g;
        }

        void getName(){
            cout<<name<<endl;

        }

         void getage(){
            cout<<age<<endl;
            
        }

         void getRoll(){
            cout<<roll_no<<endl;
            
        }







    };

int main()
{
   /* Student s1;
    s1.name = "rohit";
    s1.age = 18;
    s1.roll_no = 2305;
    s1.grade = "A";


    cout<<s1.age;

    */

    Student s1;


    s1.setName("Saurabh");

    s1.getName();



}