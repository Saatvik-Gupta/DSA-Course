// Converting a Decimal number to Binary Number
// ( )10->( )2

#include<iostream>
using namespace std;

// Decimal to Binary
int Dec_To_Bin(int decnum)
{
    int pow=1;
    int ans=0;

    while(decnum!=0)
    {
        int rem;
        rem=decnum%2;
        decnum=decnum/2; // decnum/=2
        ans+=(rem*pow);
        pow=pow*10;
    }
return ans;
}

// Decimal to Octal
int Dec_To_Oct(int decnum)
{
    int pow=1;
    int ans=0;

    while(decnum!=0)
    {
        int rem;
        rem=decnum%8;
        decnum=decnum/8; // decnum/=8
        ans+=(rem*pow);
        pow=pow*10;
    }
return ans;
}

// Binary to Decimal
int Bin_To_Dec(int binnum)
{
    int pow=1;
    int ans=0;

    while(binnum!=0)
    {
        int rem;
        rem=binnum%10;
        binnum=binnum/10; // binnum/=10
        ans+=(rem*pow);
        pow=pow*2;
    }
return ans;
}

int main()
{
    int decimalnum;
    int binarynum;
    cout<<"Enter The Decimal Number:";
    cin>>decimalnum;
    cout<<"Converting Decimal Number "<<decimalnum<<" into Binary Number:-"<<Dec_To_Bin(decimalnum) <<endl;

    cout<<"Converting Decimal Number "<<decimalnum<<" into Octal Number:-"<<Dec_To_Oct(decimalnum) <<endl;

    cout<<"Enter the Binary Number:";
    cin>>binarynum;
    cout<<"Converting Binary Number "<<binarynum<<" into Decimal Number:-"<<Bin_To_Dec(binarynum) <<endl;

return 0;
}
