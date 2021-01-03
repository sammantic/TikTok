class Player {
    int id;
    string name;
    char val;
public:
    void setPlayerName(string nameIn);
    void setPlayerVal(char val);
    void setPlayerId(int idIn);
    string getPlayerName();
    char getPlayerVal();
    int getPlayerId();
};

void Player::setPlayerName(string nameIn)
{
    name = nameIn;
}

void Player::setPlayerVal(char valIn)
{
    val = valIn;
}

void Player::setPlayerId(int idIn)
{
    id = idIn;
}

string Player::getPlayerName()
{
    return name;
}

char Player::getPlayerVal()
{
    return val;
}

int Player::getPlayerId()
{
    return id;
}