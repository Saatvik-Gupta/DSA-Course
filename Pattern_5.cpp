// Pattern 5: Inverted Triangle Pattern
/*
    1 1 1 1      * * * *
A).   2 2 2 , B).  * * *
        3 3          * *
          4            *
*/

#include<iostream>
using namespace std;
int main()
{   
    int n;
    int i,j,k;
    cout<<"Enter the limit:";
    cin>>n;
    cout<<"-----Pattern A:-----"<<endl;
    for(i=n;i!=0;i--) //outer loop
    {
        for(k=1;k<=(n-i);k++) // for spaces
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++) //inner loop
        {
            cout<<"*";
        }
        cout<<endl;
    }
    int ct=1;
    cout<<"-----Pattern B:-----"<<endl;
    for(i=n;i!=0;i--) //outer loop
    {
        for(k=1;k<=(n-i);k++) // for spaces
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++) //inner loop
        {
            cout<<k;
        }
        ct++;
        cout<<endl;
    }

    return 0;
}