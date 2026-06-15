// Prime Number

#include<iostream>
using namespace std;

int main()
{
  int num;
  cout<<"Enter the Number:";
  cin>>num;
  bool isprime=true;
  int i=2;
  while(i<num) // 2 to num-1
  {
    if(num % i==0)
    {
      isprime=false;
      break; // i.e we got atleast one factor other than 1 and num itself thus noprime
    }
    else
      i=i+1;
  }
  if(isprime==true){
    cout<<num<<" is a Prime Number";
  }
  else{
    cout<<num<<" is not a Prime Number";
  }
  return 0;
}
