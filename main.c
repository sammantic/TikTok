#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

#include "boardClass.cpp"
#include "playerClass.cpp"
#include "mainFunctions.cpp"


int main()
{
    char spaceBoard[4][4] = { { } };
    int ret;
    int turn = 0;
    int times = 15;

    TikTok Match(&spaceBoard);
    Player PlayerProfile[2];
    Match.displayBoard();

    enterPlayerNames(PlayerProfile);

    while (times > 0) {
        playTurn(turn, PlayerProfile, &Match);

        ret = checkWinner(&Match);
        cout << "\n winner ret = " << ret <<endl;
        if ((PlayerProfile[turn]).getPlayerId() == ret ) {
             cout << "Winner Winner" << endl;
             cout << PlayerProfile[turn].getPlayerName() << endl; 
             break;
        }

        times--;
        
        if (turn == 0) {
            turn = 1;
            continue;
        }

        turn = 0;
    }

    // cout << ((PlayerProfile[0]).getPlayerId() == ret )<< endl;
    // cout << ((PlayerProfile[1]).getPlayerId() == ret )<< endl;

    return 0;
}