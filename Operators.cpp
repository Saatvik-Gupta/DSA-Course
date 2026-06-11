// Understanding C++ Operators 

#include<iostream>
using namespace std;
int a=10;
int b=10;
int c=2;

int main()
{

// Arithematic Operator--->(+,-,*,%,/)

cout<<"-----Arithematic Operators:-----"<<endl;
cout<<"Addition:"<<a+b<<", Subtraction:"<<a-c<<", Multiplication:"<<a*b<<", Division:"<<a/c<<", Modulo Division(Remainder):"<<a%c<<endl;

//Logical Operator--->(AND-&&,OR-||,NOT-!)

cout<<"-----Logical Operators-----"<<endl;
if(a==b && b==c){
    cout<<"Hello"<<endl;
}
else if(a==b || a==c){
    cout<<"Bye"<<endl;
}
cout<<(!0)<<endl;  // !true->!1=0

//Comparison or Relational Operators(>,<,>=,<=,==)

cout<<"-----Relational operators-----"<<endl;
cout << (a > b) << " "
     << (a < c) << " "
     << (a <= b) << " "
     << (a >= c) << " "
     << (a == b) << endl;

//Assignment Operators(=,+=,-=,*=,/=)

cout<<"-----Assignment operators-----"<<endl;

int x=a;  //value of a i.e 10 is assigned to x as well
x+=5; // 15
a*=2; // now a=20
b-=1; // now b=9
c/=1; // now c=2
cout<<x<<" "<<a<<" "<<b<<" "<<c<<" "<<endl;

//Conditional or Ternary Operator
//Checking a year to be leap year..

cout<<"-----Conditional Operator-----"<<endl;
int yr;
cout<<"Enter the Year: ";
cin>>yr;
((yr%4==0) && (yr%100!=0) || (yr%4==0) && (yr%400==0))?cout<<yr<<" is a Leap year"<<endl:cout<<"Not a leap year"<<endl;

//Increment and Decrement Operator(++,--)

cout<<"-----Increment & Decrement Operators-----"<<endl;
int p=2;
int q=3;
int r=4;
p++; // post increment 2 further 3
++p; // pre increment 4
--q; // pre decrement 2
q--; // post decrement 2 further 1
cout<<p<<" "<<q<<" "<<r<<endl; //4 1 4

cout << r << " ";
cout << r++ << " ";
cout << ++r << " ";
cout << r-- << endl;  //  4 4 6 6

//Bitwise Operator(&,|,~,^,<<,>>)

cout<<"-----Bitwise Operators-----"<<endl;

//a=20,b=9,c=2 using above values modified during assignment operator

cout<< (a&b)<<" ";
cout<< (b|c)<<" ";
cout<< (a^c)<<" ";
cout<< (c<<2)<<" "; //shift left by 2 bits <--
cout<< (b>>1) <<" "<<endl; //shift right by 1 bit -->

//size of operator
//The sizeof() operator in C++ is used to find the memory size (in bytes) of a variable or data type.
cout<<"-----Sizeof() Operator-----"<<endl;
cout<<sizeof(a)<<" ";
cout<<sizeof(c)<<" "<<endl;

cout<<"End of Operators:-"<<endl;
    return 0;
}


