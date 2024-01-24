#include <iostream>

class Compare{
    public:
        int findSmaller(int input1[], int size);
        int findSmaller(int input1, int input2);
        int findSmaller(int input1, int input2, int input3);

        float findSmaller(float input[], int size);
        float findSmaller(float input1, float input2);
        float findSmaller(float input1, float input2, float input3);

        char findSmaller(char input[], int size);
        char findSmaller(char input1, char input2);
        char findSmaller(char input1, char input2, char input3);
};

int Compare::findSmaller(int input[], int size){
    int smaller = input[0];
    for (int i=0; i<size; i++){
        if (input[i]<= smaller) smaller = input [i];
    }
    return smaller;
}

int Compare::findSmaller(int input1, int input2){
    if (input1 < input2) return input1;
    return input2;
}

int Compare::findSmaller(int input1, int input2, int input3){
    if (input1 < input2 and input1 < input3) return input1;
    if (input2 < input1 and input2 < input3) return input2;
    return input3;
}

float Compare::findSmaller(float input[], int size){
    float smaller = input[0];
    for (int i=0; i<size; i++){
        if (input[i]<= smaller) smaller = input [i];
    }
    return smaller;
}

float Compare::findSmaller(float input1, float input2){
    if (input1 < input2) return input1;
    return input2;
}

float Compare::findSmaller(float input1, float input2, float input3){
    if (input1 < input2 and input1 < input3) return input1;
    if (input2 < input1 and input2 < input3) return input2;
    return input3;
}

char Compare::findSmaller(char input[], int size){
    char smaller = input[0];
    for (int i=0; i<size; i++){
        if (input[i]<= smaller) smaller = input [i];
    }
    return smaller;
}

char Compare::findSmaller(char input1, char input2){
    if (input1 < input2) return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2, char input3){
    if (input1 < input2 and input1 < input3) return input1;
    if (input2 < input1 and input2 < input3) return input2;
    return input3;
}
