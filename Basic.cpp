//With using namespace std;

#include<iostream>     // input output stream library in c++
using namespace std; 

int main()
{
int num;

cout<<"Enter the numbers:";
cin>>num;  
cout<<"Enter Number is :"<<num<<endl;
cout<<"Hello World";    //std::cout << "Hello"; if not using namespace std
return 0;

}

//Without using namespace std;
/* #include<iostream>     // input output stram in c++

int main()
{
int num;

std ::cout<<"Enter the number:";
std::cin>>num;  
std::cout<<"Enter Number is :"<<num<<"\n";
std::cout<<"Hello World"; 
return 0;

}*/