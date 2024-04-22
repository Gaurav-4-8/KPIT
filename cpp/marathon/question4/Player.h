#ifndef PLAYER_H
#define PLAYER_H

#include<iostream>
#include<cstring>

enum PlayerType {ACHIEVERS,EXPLORERS};

class Player {

    int *scores;
    unsigned int numberOfMatchesPlayed;
    char *playerName;
    PlayerType type;

    public:
        Player();
        Player(int, const char*, int*);
        Player(Player &);
        ~Player();
        bool operator==(Player&);
        void operator=(Player&);
        int operator[](int);
        int averageScores();

        PlayerType getType() const { return type; }

        friend std::ostream& operator<<(std::ostream&,Player&);
        friend std::istream& operator>>(std::istream&,Player&);

};

int minimumAvg(Player [], int);
void showPlayers(Player [], int, PlayerType);

#endif // PLAYER_H
