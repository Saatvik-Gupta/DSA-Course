// Pattern 2: 
/*
1 2 3 
4 5 6
7 8 9
*/

#include<iostream>
using namespace std;
int main()
{   
    int n;
    int i,j;
    int k=1;
    cout<<"Enter the limit:";
    cin>>n;
    cout<<"-----Pattern:-----"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
    {
        cout<<k<<" ";
        k++;
    }
    cout<<endl;
    }
    return 0;
}