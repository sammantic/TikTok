
void enterPlayerNames(Player *PlayerProfile) {
    string name;

    // First player
    cout <<"Enter name of first player: ";
    getline(cin, name);
    PlayerProfile[0].setPlayerName(name);
    PlayerProfile[0].setPlayerVal('x');
    PlayerProfile[0].setPlayerId(1);
    cout <<"Welcome, " << PlayerProfile[0].getPlayerName() << " your label is "<< PlayerProfile[0].getPlayerVal()<< ".\n";
    cout <<"Your ID " << PlayerProfile[0].getPlayerId() <<endl;

    // Second Player
    cout <<"Enter name of second player: ";
    getline(cin, name);
    PlayerProfile[1].setPlayerName(name);
    PlayerProfile[1].setPlayerVal('o');
    PlayerProfile[1].setPlayerId(2);
    cout <<"Welcome, " << PlayerProfile[1].getPlayerName() << " your label is "<< PlayerProfile[1].getPlayerVal()<< ".\n";
    cout <<"Your ID " << PlayerProfile[1].getPlayerId() <<endl;

    return;
}

int checkWinner(TikTok *Board) 
{
    int ret = 0;

    if ((ret = Board->checkRowWinner()) != 0)
            goto Winner;

    if ((ret = Board->checkColWinner()) != 0)
        goto Winner;

    if ((ret = Board->checkDioXwinner()) != 0)
        goto Winner;

    if ((ret = Board->checkDioYwinner()) != 0)
        goto Winner;

Winner:
    return ret;
}

void playTurn(int turn, Player *PlayerProfile, TikTok *Board) 
{
    int pos;

    Board->displayBoard();

    cout << PlayerProfile[turn].getPlayerName() << ": Select a position to set " << PlayerProfile[turn].getPlayerVal() << ": ";
    cin>>pos;

    Board->selectAndSet(pos, PlayerProfile[turn].getPlayerVal());
}