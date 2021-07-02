//created by: Tricia Treat
//Simple tic tac toe game using c++








#include <iostream>
#include<iomanip>
#include <string>
using namespace std;
void drawBoard();
void getSlotChoice(int& slot);
void playGame(bool f, bool& in);

#define PLAYER_X 'X';
#define PLAYER_Y 'O';
char lastPlayer = PLAYER_Y;
char currentPlayer = PLAYER_X;
int slot;

char board[3][3] = { { '1','2','3'},{'4','5','6'},{'7','8','9'} };
int main()
{
    bool flip = true;
    bool ingame = true;
    int turnCount = 0;
    do {
        drawBoard();
        playGame(flip,ingame);
        flip = !flip;
        turnCount++;
    } while (ingame && turnCount<=9);
}

void drawBoard()
{
    
    for (int y = 0; y < 3; y++)
        
    {
        for (int x = 0; x < 3; x++)
        {
            
        }
    }
    cout << "current board state" << endl;
    cout << "        " << endl;
    cout << "    " << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << "    " << endl;
    cout << "   +-+-+-+    " << endl;
    cout << "    " << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << "    " << endl;
    cout << "   +-+-+-+    " << endl;
    cout << "    " << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << "    " << endl;
    cout << "       " << endl;
    
    
    
}
void getSlotChoice(int& slot)

{
    cout << " player please choose a slot from 1-9 " << endl;
    cin >> slot;
    
    while ((slot < 1) || (slot > 9))
    {
        cout << "invalid choice , please choose a slot 1-9 ";
        cin >> slot;
    }
    
}
void playGame(bool f,bool& in)
{
    getSlotChoice(slot);
    
    auto Player = f ? currentPlayer : lastPlayer;
    board[(slot - slot % 3) / 3][slot%3-1] = Player;
    
    if ((board[0][0] == currentPlayer) && (board[0][1] == currentPlayer) && (board[0][2] == currentPlayer))
    {
        cout << " PLayer " <<currentPlayer << " wins on the top row ! " << endl;
        in = false;
    }
    if ((board[1][0] == currentPlayer) && (board[1][1] == currentPlayer) && (board[1][2] == currentPlayer))
    {
        cout << " player " <<currentPlayer<< " wins on the middle row !" << endl;
        in = false;
    }
    if ((board[2][0] == currentPlayer) && (board[2][1] == currentPlayer) && (board[2][2] == currentPlayer))
    {
        cout << " player " <<currentPlayer<< " wins on the bottom row !" << endl;
        in = false;
    }
    if ((board[0][0] == currentPlayer) && (board[1][0] == currentPlayer) && (board[2][0] == currentPlayer))
    {
        cout << " player " <<currentPlayer<< " wins on the left vertical row !" << endl;
        in = false;
    }
    if ((board[0][2] == currentPlayer) && (board[1][2] == currentPlayer) && (board[2][2] == currentPlayer))
    {
        cout << " player " <<currentPlayer<< " wins on the right vertical row !" << endl;
        in = false;
    }
    if ((board[0][1] == currentPlayer) && (board[1][1] == currentPlayer) && (board[2][1] == currentPlayer))
    {
        cout << " player " <<currentPlayer<< " wins on the middle vertical row !" << endl;
        in = false;
    }
    if ((board[0][0] == currentPlayer) && (board[1][1] == currentPlayer) && (board[2][2] == currentPlayer))
    {
        cout << " player " <<currentPlayer<< " wins on the diagnol row !" << endl;
        in = false;
    }
    if ((board[0][2] == currentPlayer) && (board[1][1] == currentPlayer) && (board[2][0] == currentPlayer))
    {
        cout << " player " <<currentPlayer<< " wins on the diagnol row !" << endl;
        in = false;
    }
    else
    {
    cout<<" Game Over ";
    }
}
