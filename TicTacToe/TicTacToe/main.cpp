#include <iostream>
#include "gameBoard.h"
#include "xPlayer.h"
#include "yPlayer.h"
#include <string.h>

using namespace std;

int main()
{
    gameBoard newGameBoard;
    xPlayer newXPlayer;
    yPlayer newYPlayer;
    string xName;
    string yName;
    int xPosition=0, yPosition=0;

    cout<<"WELCOME TO MY NEW CONNECT-FOUR GAME, HAVE FUN!!"<<endl;
    cout<<"ENTER THE XPLAYER NAME"<<endl;
    cin>>xName;
    cout<<"ENTER THE YPLAYER NAME"<<endl;
    cin>>yName;
    newXPlayer.setName(xName);
    newYPlayer.setName(yName);
    while(1){
            newGameBoard.showBoard();
            newXPlayer.setX(xPosition, yPosition);
            newGameBoard.refreshBoard(xPosition, yPosition,'X');
            if(newGameBoard.isRows()==4) break;
            if(newGameBoard.isCols()==4) break;
            newGameBoard.showBoard();
            newYPlayer.setO(xPosition, yPosition);
            newGameBoard.refreshBoard(xPosition, yPosition,'O');
            if(newGameBoard.isRows()==4) break;
            if(newGameBoard.isCols()==4) break;
    }
    cout<<"YOU WIN, CONGRATULATIONS";
    system("pause");
    return 0;
}
