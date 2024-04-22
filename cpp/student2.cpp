#include<iostream>
#include<cstring>
using namespace std;

class Student {
    
    char sname[20];
    int marks[3];

    public:
        Student() {
            strcpy(sname, "Rahul");
            marks[0] = 70;
            marks[1] = 75;
            marks[2] = 80;
        }

        Student(const char * name, int *mrks) {
            strcpy(sname, name);

            for(int i=0;i<3;i++) {
                marks[i] = mrks[i];
            }
        }

        int operator[](int index) {

            if(!(index>=0 && index<3)) throw "Index out of range";

            return marks[index];
        }

        float average(int *mrks) {
            float sum = 0;
            for(int i=0;i<3;i++) {
                sum += mrks[i];
            }

            return sum/3;
        }

        bool operator==(Student &st) {
            
            if(average(this->marks)==average(st.marks)) return true;

            return false;
        }

        bool operator>(Student &st) {
            if(average(this->marks) > average(st.marks)) return true;

            return false;
        }

        bool operator<(Student &st) {
            if(average(this->marks) < average(st.marks)) return true;

            return false;
        }
        friend ostream& operator<<(ostream &os, const Student &st);

        bool operator==(const Student &st) {

            return strcmp(this->sname, st.sname);
        }

            
};

 ostream& operator<<(ostream &os, const Student &st) {

            os<<"\nStudent Name = "<<st.sname<<"\nMarks : ";
            for(int i=0;i<3;i++) {
                os<<st.marks[i]<<" ";
            }

            return os;

        }

int main() {
    int marks1[]= {79,67,78};
    Student s1("Yash", marks1);

    // int marks2[] = {80,85,90};
    // Student s2("Aman",marks2);

    // if(s1==s2) {
    //     cout<<"Not same ";
    // } else {
    //     cout<<" Same ";
    // }

    cout<<s1;
//     cout<<s2;

//     cout<<"\nStudent 1 avg marks : "<<s1.average(marks1);
//     cout<<"\nStudent 2 avg marks : "<<s2.average(marks2);

//    try {
//      int m;
//      m = s1[1];
//      cout<<"\nStudent Marks : "<<m;
//    } catch (const char *msg) {
//         cout<<msg;
//    }

//    if(s1==s2) {
//     cout<<"\ns1 and s2 avg marks are equal";
//    } else {
//     cout<<"\ns1 and s2 avg marks are not equal";
//    }

}