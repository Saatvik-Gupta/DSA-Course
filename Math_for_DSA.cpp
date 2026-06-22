// 1).Count number of prime numbers upto a given range
// using-Seive of Eratosthenes Algorithm

/*#include<iostream>
using namespace std;
#include<vector>
#include<cmath>

int main()
{
int num;
cout<<"Enter the Number:";
cin>>num;
vector<bool>nums(num+1,true);
int count=0;
for(int i=2;i<num;i++)
{
    if(nums[i]){
    count++;
    for(int j=i*2;j<num;j+=i)
    nums[j]=false;
    }
}

cout<<"Prime Numbers upto Range "<<num<<" are:"<<count;
return 0;
}*/ 

// 2). GCD of a Number
// EUCID'S Algorithm

/*int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a= a%b;
        }
        else{
            b=b%a;
        }
}
if(a==0) return b;
return a;
}

int main()
{
int a,b;
cout<<"Enter the Numbers:";
cin>>a;
cin>>b;
cout<<"GCD of two numbers "<<a<<" and "<<b<<" is: "<<gcd(a,b);
cout<<endl;

// LCM? we know a*b=gcd(a,b)*lcm(a,b)
// lcm(a,b)=a*b/gcd(a,b)
cout<<"LCM of two numbers "<<a<<" and "<<b<<" is: "<<(a*b)/gcd(a,b);
    return 0;
}*/

// 3). Armstrong Number

#include<iostream>
using namespace std;

int count_digit(int num){
    int dig=0;
    while(num!=0){
        num=num/10;
        dig++;
    }
    return dig;
}

bool Check_Armstrong(int num){

int temp=num;
int rev_num=0;
int power=count_digit(num);
int digit;
while(temp!=0)
{
    digit=temp%10;
    int p=1;
    for(int i=1;i<=power;i++){
        p=p*digit;
    }
    rev_num+=p;
    temp=temp/10;
}
return (rev_num==num);
}

int main(){
    int num;
    cout<<"Enter the Number to be checked:";
    cin>>num;
    if(Check_Armstrong(num)){
    cout<<"Entered number "<<num<<" is an Armstrong Number"<<endl;
    }
    else{
    cout<<"Entered number "<<num<<" is not an Armstrong Number"<<endl;
    }

}



