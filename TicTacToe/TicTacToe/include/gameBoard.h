#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include <iostream>
using namespace std;

class gameBoard
{
    char board[4][4]={
    {'A','B','C','D'},
    {'D','E','F','G'},
    {'H','I','J','K'},
    {'L','M','N','O'},
    };

    public:
        gameBoard();
        void showBoard();
        int isRows();
        int isCols();
        int isDiag1();
        int isDiag2();
        void refreshBoard(int xPosition, int yPosition, char newValue);
};
gameBoard::gameBoard(){
}
void gameBoard::showBoard(){
    for(int i=0; i<4;i++){
        for(int j=0;j<4;j++){
            cout<<board[i][j];
        }
        cout<<endl;
    }

}
void gameBoard::refreshBoard(int xPosition, int yPosition, char newValue){
    board[xPosition][yPosition]=newValue;
}

int gameBoard::isRows(){
    int isFour=0;
    for(int i=0; i<4;i++){
        for(int j=0;j<4;j++){
            if(board[i][j]=='X'||board[i][j]=='O') isFour++;
        }
        if(isFour==4) break;
        else isFour=0;
    }
    return isFour;
}

int gameBoard::isCols(){
    int isFour=0;
    for(int i=0; i<4;i++){
        for(int j=0;j<4;j++){
            if(board[j][i]=='X'||board[j][i]=='O') isFour++;
        }
        if(isFour==4) break;
        else isFour=0;
    }
    return isFour;
}
int gameBoard::isDiag1(){
}
int gameBoard::isDiag2(){
}

#endif
