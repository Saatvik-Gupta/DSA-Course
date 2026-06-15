// Pattern 7: Inverted Pyramid
/*
* * * *
 * * *
  * *
   * 
*/

#include<iostream>
using namespace std;
int main()
{   
    int n;
    int i,j,k;
    cout<<"Enter the limit:";
    cin>>n;
    cout<<"-----Inverted Pyramid Pattern:-----"<<endl;
    for(i=n;i!=0;i--) //outer loop
    {
        for(k=1;k<=(n-i);k++) // for spaces
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++) //inner loop
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}