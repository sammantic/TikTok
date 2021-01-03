
Player * enterPlayerNames() {
    string name;
    Player PlayerProfile[2];

    // First player
    cout <<"Enter name of first player: ";
    cin >>name;
    PlayerProfile[0].setPlayerName(name);
    PlayerProfile[0].setPlayerVal('X');
    PlayerProfile[0].setPlayerId(1);
    cout <<"Welcome, " << PlayerProfile[0].getPlayerName() << " your label is "<< PlayerProfile[0].getPlayerVal()<< ".\n";
    cout <<"Your ID " << PlayerProfile[0].getPlayerId() <<endl;

    // Second Player
    cout <<"Enter name of second player: ";
    cin >>name;
    PlayerProfile[1].setPlayerName(name);
    PlayerProfile[1].setPlayerVal('O');
    PlayerProfile[1].setPlayerId(2);
    cout <<"Welcome, " << PlayerProfile[1].getPlayerName() << " your label is "<< PlayerProfile[1].getPlayerVal()<< ".\n";
    cout <<"Your ID " << PlayerProfile[1].getPlayerId() <<endl;

    return PlayerProfile;
}