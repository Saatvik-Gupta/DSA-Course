/*
Tower Of Hanoi Game.

*requirements---
3 towers known as pegs(start,auxillary,end)
lets label them them as:-
A->Start Tower
B->Auxillary Tower
c->End Tower
N be the number of discs

Aim--->To transfer all discs from A to C

*Condition---
One disc at a time
no larger discs above smaller ones

complexity---> (2^N-1)
'''*/

#include<iostream>
using namespace std;
int counter=1; //Global Variable
void Tower(int N,char start,char aux,char end); //Function Declaration

int main(){

    int disc;
    cout<<"Enter the number of discs:";
    cin>>disc;
    char start='A';
    char aux='B';
    char end='C';
    Tower(disc,start,aux,end); //Function Calling
    return 0;
}

void Tower(int N,char start,char aux,char end) //Function Defination
{
if(N==1){
        cout<<"Move the disc "<<counter<<" from "<<start<<" to "<<end<<endl;
        counter=counter+1;
        return;
}
    Tower(N-1,start,end,aux);
    cout<<"Move the disc "<<counter<<" from "<<start<<" to "<<end<<endl;
    counter=counter+1;
    Tower(N-1,aux,start,end);
    return;
}
    