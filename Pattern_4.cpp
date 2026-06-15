// Pattern 4: Floyd's Triangle Pattern
/*
     1            A
A).  2 3   ,  B). B C
     4 5 6        D E F
     7 8 9 10     G H I J
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
    cout<<"-----Pattern A:-----"<<endl;
    for(i=1;i<=n;i++)
        {     
            for(j=1;j<=i;j++)
            {   
                cout<<k<<" ";
                k++;
            }
            cout<<endl;
        }
        int l=65;
    cout<<"-----Pattern B:-----"<<endl;
    for(i=1;i<=n;i++)
        {     
            for(j=1;j<=i;j++)
            {   
                cout<<char(l)<<" "; //Explicit type conversion int-->char
                l++;
            }
            cout<<endl;
        }

        return 0;
    }
