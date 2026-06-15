// Pattern 3: Triangle Pattern
/*
     *             * * * *
 A). * *     + B). * * *
     * * *         * *
     * * * *       *
*/

#include<iostream>
using namespace std;
int main()
{   
    int n;
    int i,j;
    cout<<"Enter the limit:";
    cin>>n;
cout<<"-----Patern A:-----"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
cout<<"-----Patern B:-----"<<endl;
for(i=n;i!=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
cout<<"-----Combined Pattern-----"<<endl;
 for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
for(i=n-1;i!=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
 return 0;   
}