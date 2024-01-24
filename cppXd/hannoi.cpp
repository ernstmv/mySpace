#include <iostream>

using namespace std;

void show(int list)
void move (int lmt, int start[], int target[], int size){
    int I, J;
    for (int i = 0; i < size; i++){
        if (start[i] == lmt){
            start[i] = 0;
            I = i;
            break;
        }
    }

    for (int j = 0; j < size; j++){
        if (target[j] == 0){
            target[j] = lmt;
            J = j;
            break;
        }
    }

    cout<<lmt<<'['<<I<<"]->["<<J<<']'<<endl;
}

void set_interval(int value, int* start, int* aux, int* targ, int size){
    if (value == 1) move(value, start, targ, size);
    else{
        set_interval((value - 1), start, targ, aux, size);
        move(value, start, targ, size);
        set_interval((value - 1), aux, start, targ, size);
    }
}

int main(){
    int size;
    cout<<"Please enter the number of plates"<<endl;
    cin>>size;
    int start [size];
    int aux [size];
    int targ [size];

    for (int i = 0; i < size; i++) start[i] = i+1;
    cout<<"Beggining:";
    cout<<start<<"\n"<<aux<<"\n"<<targ<<endl;
    set_interval(size, start, aux, targ, size);
    cout<<"Finally:";
    cout<<start<<"\n"<<aux<<"\n"<<targ<<endl;

    return 0;
}
