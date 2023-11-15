#ifndef XPLAYER_H
#define XPLAYER_H
#include <iostream>
#include <string>
using namespace std;

class xPlayer
{
    string  name;
    public:
        xPlayer();
        void setName(string newName);
        void setX(int& xPosition, int& yPosition);

};

xPlayer::xPlayer(){
}

void xPlayer::setName(string newName){
    name=newName;
}

void xPlayer::setX(int& xPosition, int& yPosition){
    cout<<"En que posicion de X desea colocar su proxima x?: \n";
    cin>>xPosition;
    cout<<"En que posicion de Y desea colocar su proxima x?: \n";
    cin>>yPosition;
}
#endif
