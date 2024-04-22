//#include "Date.h"
#include "Exam.h"

int main()
{
    try
    {
        Exam obj1(101, ExamType::OFFLINE, 29, 2, 2021);
        std::cout << "\nExam 1 : ";
        obj1.display();
    }
    catch (const std::runtime_error &e)
    {
        std::cerr <<"\n"<< e.what() << '\n';
    }

    try
    {
        Exam obj2(201, ExamType::ONLINE, 2, 12, 2024);
        std::cout << "\nExam 2 : ";
        obj2.display();
    }
    catch (const std::exception &e)
    {
        std::cerr <<"\n"<< e.what() << '\n';
    }
}