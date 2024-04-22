#include "Player.h"

Player::Player():numberOfMatchesPlayed(2)
{
    scores = new int[numberOfMatchesPlayed];
    scores[0] = 20;
    scores[1] = 30;
    type = PlayerType::ACHIEVERS;
}

Player::Player(int noOfMatchPlayed, const char *name, int *s)
{
    if(noOfMatchPlayed>5) throw std::runtime_error("Maximum Number of matches exceeded");
    numberOfMatchesPlayed = noOfMatchPlayed;
    scores = new int[numberOfMatchesPlayed];
    type = PlayerType::ACHIEVERS;

    for(int i=0;i<numberOfMatchesPlayed;i++) {
        scores[i] = s[i];
    }

    playerName = new char[strlen(name)+1];
    strcpy(playerName,name);
}

Player::Player(Player &p)
{
    if(playerName!=nullptr) delete playerName;
    playerName = new char[strlen(p.playerName)+1];
    strcpy(playerName, p.playerName);

    numberOfMatchesPlayed = p.numberOfMatchesPlayed;
    if(scores!=nullptr) delete scores;
    scores = new int [p.numberOfMatchesPlayed];
    for(int i=0;i<numberOfMatchesPlayed;i++) {
        scores[i] = p.scores[i];
    }
}


Player::~Player()
{
    delete scores;
    delete playerName;
}

bool Player::operator==(Player &p)
{
    return this->averageScores()==p.averageScores();
}

void Player::operator=(Player &p)
{
    this->numberOfMatchesPlayed = p.numberOfMatchesPlayed;
    this->playerName = p.playerName;
    this->scores = p.scores;
}

int Player::operator[](int index)
{
    for(int i=0;i<numberOfMatchesPlayed;i++) {
        if(i==index) {
            return scores[i];
        }
    }

    throw std::runtime_error("Index Out Of Range");
}

int Player::averageScores()
{
    int sum = 0;
    for(int i=0;i<numberOfMatchesPlayed;i++) {
        sum += scores[i];
    }

    return sum/numberOfMatchesPlayed;
}

std::ostream &operator<<(std::ostream &os, Player &p)
{
    // TODO: insert return statement here
    os<<"\nPlayer Name : "<<p.playerName<<"\nNumber Of Matches Played: "<<p.numberOfMatchesPlayed
    <<"\nScore: ";
    for(int i=0;i<p.numberOfMatchesPlayed;i++) {
        os<<p.scores[i]<<" ";
    }
    os<<"\nPlayer Type: ";
    switch (p.type)
    {
    case PlayerType::ACHIEVERS:/* constant-expression */
        os<<"ACHIEVERS";/* code */
        break;
    
    case PlayerType::EXPLORERS:
        os<<"EXPLORERS";
        break;
    }
    
}

std::istream &operator>>(std::istream &is, Player &p)
{
    // TODO: insert return statement here
    std::cout<<"Enter Player Name: ";
    is>>p.playerName;
    std::cout<<"Enter Number of matches played: ";
    is>>p.numberOfMatchesPlayed;

    std::cout<<"Enter scores: ";
    for(int i=0;i<p.numberOfMatchesPlayed;i++) {
        is>>p.scores[i];
    }
    std::cout<<"Enter Player Type 0-ACHIEVERS 1-EXPLORERS: ";
    int i;
    is>>i;
    switch (i)
    {
    case 0:
        p.type = PlayerType::ACHIEVERS;
        break;
    
    case 1:
        p.type = PlayerType::EXPLORERS;
        break;
    default:
        p.type = PlayerType::ACHIEVERS;
    }
    
}

int minimumAvg(Player p[], int size)
{
    int avg[size];
    for(int i=0;i<size;i++) {
        avg[i] = p[i].averageScores();
    }
    int min = avg[0];
    for(int i=1;i<size;i++) {
        if(min>avg[i]) {
            min = avg[i];
        }
    }

    return min;
}

void showPlayers(Player p[], int size, PlayerType type)
{
    int flag = 0;
    for(int i=0;i<size;i++) {
        if(p[i].getType() == type) {
            flag = 1;
            std::cout<<p[i];
        }
    }
    if(flag==1) throw std::runtime_error("Player Not Found");
}
