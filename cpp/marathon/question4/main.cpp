#include "Player.h"
int main() {

    // Player p;
    // std::cout<<p;

    int scores1[] = {10,20,30};
    int scores2[] = {30,40,50};
    int scores3[] = {60,50};

    Player p1(3,"Gaurav",scores1);
    std::cout<<p1;

    Player p2(3,"Aman",scores2);

    if(p1==p2) {
        std::cout<<"\nEqual";
    } else {
        std::cout<<"\nEqual";
    }

    // Player pobj;
    // std::cin>>pobj;

    Player p3(p1);
    Player p4 = p3;
    std::cout<<p4;

    Player parr[3] = {
        {3,"Rahul",scores1},
        {3,"Raj",scores2},
        {2,"Ram",scores3}
    };

    std::cout<<p1[1];

    std::cout<<"\nMinimum Average: "<<minimumAvg(parr,3);

try
{
    showPlayers(parr,3,PlayerType::ACHIEVERS);
}
catch(const std::runtime_error& e)
{
    std::cerr <<"\n"<< e.what() << '\n';
}


}