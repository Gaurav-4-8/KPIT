#include<iostream>
#include<cstring>
using namespace std;

class Student {

    char sname[20];

    public:
        Student() {
            strcpy(sname, "aman");
        }
        Student(const char * name) {
            strcpy(sname, name);
        }
        void show() {
            cout<<"Name = "<<sname;
        }

        char operator[] (int ind) {

            if(!(ind>=0 && ind<strlen(sname))) throw "index out of range";

            return sname[ind];
        }
};

int main() {

    Student s1("Kavita");

    try
    {
        char ch = s1[100];
        cout<<"ch = "<<ch;
    }
    catch(const char *msg)
    {
        cout<<msg;
    }
    

    return 0;
}