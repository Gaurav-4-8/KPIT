#include<iostream>

enum Category{primary, secodary};

class Student {

    unsigned int rollNo;
    std::string sname;
    enum Category scat;
    int numOfSub;
    int *marks;

    public:
        Student():rollNo(1),sname("Pooja"),scat(Category::primary),numOfSub(2) {
            marks = new int[numOfSub];
            marks[0] = 0;
            marks[1] = 0;
         }

        Student(int r, std::string name, enum Category c, int ns, int *m):rollNo(r),sname(name),scat(c),numOfSub(ns) {
            marks = new int[numOfSub];
            for(int i=0;i<numOfSub;i++) {
                marks[i] = m[i];
            }
         }

        void display() {
            std::cout<<"\nStudent Roll no : "<<rollNo<<"\nStudent Name : "<<sname;
            std::cout<<"\nCategory : ";
            switch (scat)
            {
            case Category::primary:
                std::cout<<"Primary";
                break;
            
            case Category::secodary:
                std::cout<<"Secondary";
                break;
            default: std::cout<<"Primary";
            }

            std::cout<<"\nMarks : ";
            for(int i=0;i<numOfSub;i++) {
                std::cout<<marks[i]<<" ";
            }
        }

        std::string getSname() const { return sname; }

        double calAvg() {
            double sum = 0;
            for(int i=0;i<numOfSub;i++) {
                sum += marks[i];
            }
            return sum/numOfSub;
        }

        friend std::istream& operator>>(std::istream &is, Student &s);
        friend std::ostream& operator<<(std::ostream os, const Student &s);
        void accept() {

            std::cin>>*this;
        }
};

std::ostream& operator<<(std::ostream &os, const Student &s) {

}

std::istream& operator>>(std::istream &is, Student &s) {

    std::cout<<"\nEner Student Roll no: ";
    is>>s.rollNo;
    std::cout<<"\nEnter Student Name: ";
    is>>s.sname;
    std::cout<<"\nEnter Student Category: ";
   // is>>setScat();
   std::cout<<"\nEnter No of Subjects: ";
   is>>s.numOfSub;
    std::cout<<"\nEnter Student marks: ";
    for(int i=0;i<s.numOfSub;i++) {
        is>>s.marks[i];
    }   

    return is; 
}

void search(Student s[], int n) {
    std::string name;
    std::cout<<"\nEnter student name :";
    std::cin>>name;
    for(int i=0;i<n;i++) {
        if(s[i].getSname()==name) {
            s[i].display();
            return;
        }
    }
    std::cout<<"\nNot Found";
}

double findMaxAvg(Student s1[], int n) {
    int avg[n];
    for(int i=0;i<n;i++) {
        avg[i] = s1[i].calAvg();
        std::cout<<"\nAvg of Student "<<i+1<<" : "<<avg[i];
    }

    int max = avg[0];
    for(int i=1;i<n;i++) {
        if(max<avg[i]) {
            max = avg[i];
        }
    }

    return max;
}

int main() {
    
    int marks1[] = {70,80,90};
    int marks2[] = {60,75,55};
    Student s1[2] = {
        {1,"Raj",Category::primary,3,marks1},
        {2,"Aman",Category::secodary,3,marks2}
    };

    s1[0].display();
     s1[1].display();
    search(s1,2);
   std::cout<<"\nMaximum Average : "<<findMaxAvg(s1,2);

   Student s;
   s.accept();
   s.display();

    return 0;
}