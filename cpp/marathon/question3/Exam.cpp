#include "Exam.h"

//default constsructor
Exam::Exam():exam_code(101),examtype(ExamType::OFFLINE)
{
}

//parametrized constructor
Exam::Exam(int code, ExamType type, int d, int m, int y):exam_date(d,m,y) {
    exam_code = code;
    examtype = type;

    exam_date.checkDay(d); // check valid exam date;
}

Exam::~Exam()
{
}

//display exam details
void Exam::display()
{
    std::cout<<"\nExam Code : "<<exam_code<<"\nExam Type : ";
    switch(examtype) {
        case ExamType::ONLINE:
            std::cout<<"ONLINE";
            break;
        case ExamType::OFFLINE:
            std::cout<<"OFFLINE";
            break;
    }
    exam_date.print();
}
