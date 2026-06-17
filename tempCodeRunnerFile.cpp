/* Bitwise Operators:-
// Bitwise AND= &
// Bitwise OR= |
// Bitwise NOT= ~
// Bitwise XOR= ^
// Bitwise Shift Left= <<
// Bitwise Shift Right= >>
// */


// // Check wheather a number is in the power of 2 or not without loops

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter the Number:";
//     cin>>num;

//     if(num>0 && (num & (num-1))==0) // say num=16, 16 & 15--> 10000 & 01111=0
//     {
//         cout<<num<<" is in the power of 2"<<endl;
//     }
//     else{
//         cout<<"Number is not in the power of 2"<<endl;
//     }
//     return 0;
// }