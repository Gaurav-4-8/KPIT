#include "Date.h"

enum ExamType{ONLINE,OFFLINE};
class Exam {

    int exam_code;
    ExamType examtype;
    Date exam_date;

    public:
        Exam();
        Exam(int,ExamType,int,int,int);
        ~Exam();
        void display();

};