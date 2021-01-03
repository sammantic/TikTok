class TikTok {
    char (*board)[4][4];
    
public:
    TikTok(char (*boardIn)[4][4]);
    int checkRowWinner();
    int checkColWinner();
    int checkDioXwinner();
    int checkDioYwinner();
    void selectAndSet(int pos, char val);
    void displayBoard();
};

TikTok::TikTok(char (*boardIn)[4][4]) 
{
    // initialize the game board
    board = boardIn;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            (*board)[i][j] = 'x';        
        }
    }  
}

int TikTok::checkRowWinner() 
{
    // check if there are 4 'x' or 4 'o' in rows
    int countX = 0;
    int countO = 0;
    int winner = 0;
    int j;
    for (int i = 0; i < 4; i++) {
        for ( j = 0; j < 4; j++) {
            if ((*board)[i][j] == 'x') {
                countX = countX + 1;
            } else if ((*board)[i][j] == 'o') {
                countO = countO + 1;
            }       
        }
        
        if (countX == 4 ) {
            winner = 1;
            break;
        }
        
        if (countO == 4) {
            winner = 2;
            break;
        }

    }

    return winner;
}
int TikTok::checkColWinner() 
{
    // check if there are 4 'x' or 4 'o' in rows
    int countX = 0;
    int countO = 0;
    int winner = 0;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if ((*board)[j][i] == 'x') {
                countX = countX + 1;
            } else if ((*board)[j][i] == 'o') {
                countO = countO + 1;
            }       
        }
        if (countX == 4 )
            winner = 1;
        
        if (countO == 4)
            winner = 2;
    }

    return winner;
}

int TikTok::checkDioXwinner() 
{
    int countX = 0;
    int countO = 0;
    int winner = 0;

    for (int i = 0; i < 4; i++) {
        if ((*board)[i][i * 1]  == 'x') {
            countX = countX + 1;
        }

        if ((*board)[i][i * 1] == 'o') {
            countO = countO + 1;
        }
    }
    if (countX == 4)
        winner = 1;

    if (countO == 4)
        winner = 2;
    
    return winner;
}

int TikTok::checkDioYwinner()
{
    int countX = 0;
    int countO = 0;
    int winner = 0;

    for (int i = 3; i >= 0; i--) {
        if ((*board)[i][3 - i] == 'x') {
            
            countX = countX + 1;
        }
        if ((*board)[i][3 - i] == 'O') {
            countO = countO + 1;
        }
    }

    if (countX == 4)
        winner = 1;
    
    if (countO == 4)
        winner = 2;
    
    return winner;
}

void TikTok::selectAndSet(int pos, char val)
{
    int row;
    int col;
    
    if (pos < 0 || pos > 16)
        goto Error;

    row = pos / 4;
    col = (abs((pos - (row * 4))) - 1);
    (*board)[row][col] = val;

    return; 
    
Error:
    cout <<"The postion is out of bound\n";
}

void TikTok::displayBoard() 
{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout <<(*board)[i][j]<<" ";       
        }
        cout <<"\n";
    }
}

