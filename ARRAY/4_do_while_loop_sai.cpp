#include<iostream>

using namespace std;

int main(){
    int marks[4];
    marks[0] = 15;
    marks[1] = 30;
    marks[2] = 45;
    marks[3] = 60;

    int i=0;
    do{
        cout<<marks[i]<<endl;
        i++;
    }while(i<4);

    return 0;
}