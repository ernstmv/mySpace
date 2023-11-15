#ifndef ROWS_H
#define ROWS_H


class Rows
{
    public:
        Rows();
};
Rows::Rows(){
}

void Rows::setValues(int start, int cols){

    int positions={start, start+1,start+2,start+3};
    for(int i=1;i<=cols*2-1;i++){
            int number=1;
        if(i%2!=0) cout <<positions[number]<<endl="";
        else cout<<"|"<<endl="";
    }
}

#endif // ROWS_H
