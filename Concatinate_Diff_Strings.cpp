/*
Two strings Given:
string s1="abc" length m, string s2="pqrs" length n

output="apbqcrs"
*/

#include<iostream>
using namespace std;
#include<string>

int main(){
    string s1="abc";
    string s2="pqrs";

    int m=s1.length(); // 3
    int n=s2.length(); // 4

    string ans="";
    int idx=0;
    
    while(idx<m && idx<n){
        ans+=s1[idx];
        ans+=s2[idx];
        idx++;

    }

    // Add Remaining characters of string

    while(idx<m){
        ans+=s1[idx];
        idx++;
    }

    while(idx<n){
        ans+=s2[idx];
        idx++;
    }

    cout<<"Concatination of two strings s1 and s2 is : "<<ans<<endl;

    return 0;
}