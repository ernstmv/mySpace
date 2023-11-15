#ifndef YPLAYER_H
#define YPLAYER_H
#include <string>
#include <iostream>
using namespace std;

class yPlayer
{
    string  name;
    public:
        yPlayer();
        void setName(string newName);
        void setO(int& xPosition, int& yPosition);

};

yPlayer::yPlayer(){
}
void yPlayer::setName(string  newName){
    name=newName;
}

void yPlayer::setO(int& xPosition, int& yPosition){
    cout<<"En que posicion de X desea colocar su proxima O?: \n";
    cin>>xPosition;
    cout<<"En que posicion de Y desea colocar su proxima O?: \n";
    cin>>yPosition;
}

#endif // YPLAYER_H
