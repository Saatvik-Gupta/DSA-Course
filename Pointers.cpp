#include<iostream>
using namespace std;
#include<vector>

int main(){
    // int num=10;
    // int* p=&num;

    // cout<<"Address or memory location of "<<num<<" is: "<<p<<endl;
    // cout<<"Value stored is :"<<*p<<endl; // Dereferencing

    //Predict the output
    int x = 10;
    int *p = &x;      // p stores the address of x
    int **pp = &p;    // pp stores the address of p

    cout << "x = " << x << endl; // 10
    cout << "*p = " << *p << endl; // 10
    cout << "**pp = " << **pp << endl; // 10

    *p = 20;          // changes x via pointer
    cout << "After *p = 20, x = " << x << endl;

    **pp = 30;        // changes x via double pointer
    cout << "After **pp = 30, x = " << x << endl;

    cout << "Address of x: " << &x << endl;
    cout << "Value of p (address of x): " << p << endl;
    cout << "Value of pp (address of p): " << pp << endl;

    return 0;
}