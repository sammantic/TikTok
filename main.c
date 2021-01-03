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

    TikTok Match(&spaceBoard);
    Player *PlayerProfile;
    Match.displayBoard();
    // ret = Match.checkRowWinner();
    // ret = Match.checkColWinner();
    // ret = Match.checkDioXwinner();
    // ret = Match.checkDioYwinner();
    // Match.selectAndSet(6, 'x');
    // Match.selectAndSet(2, 'o');
    // Match.selectAndSet(16, 'x');
    // cout << "\n============\n";
    // Match.displayBoard();

    PlayerProfile = enterPlayerNames();
    return 0;
}