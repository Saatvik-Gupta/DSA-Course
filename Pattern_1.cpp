// Pattern 1: Square Pattern
/*
1 2 3 4     * * * *
1 2 3 4   , * * * *  
1 2 3 4     * * * *
1 2 3 4     * * * *
*/

#include<iostream>
using namespace std;
int main()
{   
    int n;
    int i,j;
    cout<<"Enter the limit:";
    cin>>n;
    cout<<"-----Square Pattern:-----"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<j<<" "; // for "*" pattern cout<<"*"<<" ";
        }

        cout<<endl;
    }
/* for Pattern like:---
    A B C D                   
    A B C D
    A B C D
    A B C D*/
    for(i=65;i<=68;i++) //Type conversion A->65 Z->90
    {
        for(j=65;j<=68;j++)
        {
            cout<<char(j)<<" "; 
        }

        cout<<endl;
    }


    return 0;
}