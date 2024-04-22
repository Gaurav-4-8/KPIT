#include"IndividualTrip.h"
#include"SharedTrip.h"

int main() {

    
    IndividualTrip it1("101REG","Ram",29,3,RIDE::REGULAR,58);
    std::cout<<"\n"<<it1.isTripPerStandard();

    SharedTrip st1("101REG","Raj",29,3,RIDE::REGULAR,3);
    std::cout<<"\n"<<st1.isTripPerStandard();

    IndividualTrip it2("101REG","Jay",29,3,RIDE::REGULAR,58);
    std::cout<<"\n"<<it2.calculateFair();

     IndividualTrip it3("101REG","Rajesh",29,3,RIDE::REGULAR,58);
    std::cout<<"\n"<<it3.calculateFair(12.0);

    SharedTrip st2("101REG","Jayesh",29,3,RIDE::REGULAR,3);
    std::cout<<"\n"<<st2.calculateFair();


}