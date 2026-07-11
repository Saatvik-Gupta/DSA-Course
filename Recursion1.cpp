/* Finding sum of first 'n' natural numbers, fibonacci number,factorial
 of a number using recursion and also checking weather an array is sorted or not */

#include<iostream>
using namespace std;
#include<vector>

// Recursive Function for sum
int Sum(int n){

    if(n==1){
        return 1;
    }
    else return ( n+ Sum(n-1));
}

// Recursive Function for factorial
int Fact(int n){

    if(n==0){
        return 1;
    }
    else return ( n*Fact(n-1));
}

// Recursive Function for Fibonacci number
int Fibo(int n){

    if(n==0) return 0;
    else if(n==1) return 1;

    else return ( Fibo(n-1) + Fibo(n-2));
}

// To check weather an array is sorted or not

bool check_sorted(vector<int> &arr,int n){

    if( n== 0) return true;
    else if (n==1) return true; // array is already sorted for none or single element

    else{
        return (( arr[n-1]>=arr[n-2])&& check_sorted(arr,n-1));
    }

}

int main(){
    int num1,num2,num3;
    vector<int>arr={1,5,7,8,10};
    int n=arr.size();

    cout<<"Enter the limit upto which to find sum:";
    cin>>num1;
    int sum=Sum(num1);
    cout<<"Sum upto range "<<num1<<" is :"<<sum<<endl;

    cout<<"Enter the num to find it's Factorial:";
    cin>>num2;
    int fact=Fact(num2);
    cout<<"Factorial of "<<num2<<" is :"<<fact<<endl;

    cout<<"Enter the limit to find fibonacci number:";
    cin>>num3;
    int fibo=Fibo(num3);
    cout<<"Fibonacci Number at limit "<<num1<<" is :"<<fibo<<endl;

    cout<<"Checking weather array is sorted or not:"<<endl;
    if(check_sorted(arr,n)){
        cout<<"Array is sorted "<<endl;
    }
    else cout<<"Array not sorted!";

    return 0;
}