#include"salesperson.h"
#include"manager.h"

#include<typeinfo>

int main() {

    // Salesperson sp1(102,"Rahul",90000,300000,0.05);
    // Emp &e = sp1;
    //Salesperson &spref = dynamic_cast<Salesperson*> (e);
    // if casting fails (in case of reference then it throws exception)
    // try {
    //     Salesperson &spref = dynamic_cast<Salesperson&> (e);
    //     spref.calCommission();
    // } catch (std::bad_cast &obj) {
    //     std::cout<<obj.what();
    // }
    // Salesperson s1;
    // s1.display();
    // std::cout<<"\nTotal Salary : "<<s1.calTotalSalary();

   //  Emp *emp = new Salesperson();
    // emp->display();
    // std::cout<<"\ntotal salary : "<<emp->calTotalSalary();
    // delete emp;  

     //   Salesperson *sp = dynamic_cast<Salesperson*> (emp);


    //  Emp *emp = new Salesperson(104,"Abhishek",34000,50000,0.04);
    //  if(typeid(*emp) == typeid(Salesperson)) {
    //     Salesperson *sp = dynamic_cast<Salesperson*> (emp); //safe down casting
        
        //down cast- convert base class pointer to derived class pointer
        //dynamic_cast:
         // return zero if casting is failed
         // return address on successful type 
         
    //     if(sp==0) {
    //         std::cout<<"\nType casting failed..";
    //     } else {
    //         std::cout<<sp->calCommission();
    //     }
    //  }
    // emp->display();
    // std::cout<<"\nTotal Salary : "<<emp->calTotalSalary();
    // delete emp;

    // Emp *emp = new Manager();
    // emp->display();
    // std::cout<<"\ntotal salary : "<<emp->calTotalSalary();
    // delete emp;

    // Emp *emp = new Manager(102,"Jay",30000,10,2000);
    // emp->display();
    // std::cout<<"\ntotal salary : "<<emp->calTotalSalary();
    


    // Manager *mg = dynamic_cast<Manager*> (emp);

    // std::cout<<"\nIncentive : "<<mg->incentive();

}