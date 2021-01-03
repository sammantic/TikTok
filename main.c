#include "mainClass.cpp"

int main()
{
    char spaceBoard[4][4] = { { } };
    int ret;
    TikTok Match(&spaceBoard);
    Match.displayBoard();
    // ret = Match.checkRowWinner();
    // ret = Match.checkColWinner();
    // ret = Match.checkDioXwinner();
    // ret = Match.checkDioYwinner();
    Match.selectAndSet(6, 'x');

    Match.displayBoard();

    return 0;
}