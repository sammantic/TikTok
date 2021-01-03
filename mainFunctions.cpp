
Player * enterPlayerNames() {
    string name;
    Player PlayerProfile[2];
    Player *p = PlayerProfile;

    // First player
    cout <<"Enter name of first player: ";
    getline(cin, name);
    PlayerProfile[0].setPlayerName(name);
    PlayerProfile[0].setPlayerVal('X');
    PlayerProfile[0].setPlayerId(1);
    cout <<"Welcome, " << PlayerProfile[0].getPlayerName() << " your label is "<< PlayerProfile[0].getPlayerVal()<< ".\n";
    cout <<"Your ID " << PlayerProfile[0].getPlayerId() <<endl;

    // Second Player
    cout <<"Enter name of second player: ";
    getline(cin, name);
    PlayerProfile[1].setPlayerName(name);
    PlayerProfile[1].setPlayerVal('O');
    PlayerProfile[1].setPlayerId(2);
    cout <<"Welcome, " << PlayerProfile[1].getPlayerName() << " your label is "<< PlayerProfile[1].getPlayerVal()<< ".\n";
    cout <<"Your ID " << PlayerProfile[1].getPlayerId() <<endl;

    return p;
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