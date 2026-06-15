// Printing right angled pattern,
//Half upper and lower triangles,
//Pyramid pattern
//Hollow and solid box pattern

#include<iostream>
#include<stdlib.h> //to use exit(0)
using namespace std;
void Right_Angled_Pattern(int lim);  //Function declaration
void Half_Pyramids(int lim);
void Pyramid(int lim);
void box(int lim);

int main()
{

int num;
int ch;
cout<<"Enter the limit:";
cin>>num;
while(true)
{
    cout<<"Enter the choice of Pattern you want to see:----"<<endl;
    cout<<"1-Right Angled Pattern:"<<endl<<"2-Half Pyramids Pattern:"<<endl<<"3-Boxes :Hollow and solid Pattern:"<<endl<<"4-Pyramid Pattern:"<<endl<<"5-Exit"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:cout<<"See Right Angled Pattern: "<<endl;
               Right_Angled_Pattern(num); //Function calling
               break;

        case 2:cout<<"See Half Pyramids Pattern : "<<endl;     
               Half_Pyramids(num); 
               break;
        case 3:cout<<"See Boxes :Hollow and solid Pattern :"<<endl;
               box(num);
               break;
        case 4:cout<<"See Pyramid Pattern :"<<endl;
                Pyramid(num);
                break;
        case 5:exit(0);
            break;        
        default:  cout<<"Wrong Input:"<<endl;     
                       }
                    }

                    return 0;
}

void Right_Angled_Pattern(int lim) //Function defination
{
    int i,j;
    for(i=1;i<=lim;i++)
    {
       for(j=1;j<=i;j++)
       {
        cout<<"*"<<" ";
       }
       cout<<endl;   
        
    }
}

void Half_Pyramids(int lim)
{
 int i,j;
 int k,l;
  for(i=1;i<=lim;i++)
    {
       for(j=1;j<=i;j++)
       {
        cout<<"*"<<" ";
       }
       cout<<endl;   
    }
    for(k=lim-1;k!=0;k--)
    {
        for(l=1;l<=k;l++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void box(int lim){
    int i,j;
    int k,l;
//Solid box
for(i=1;i<=lim;i++)
{
    for(j=1;j<=lim;j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}

//Hollow box
for(k=1; k<=lim;k++)
{
// First and last row
    if(k==1 || k==lim)
    {
        for(l=1;l<=lim;l++)
        {
            cout<<"*";
        }
    }
     else
    {
         cout <<"*";   // Left border
         for(l=2;l<=lim-1;l++)
         {
             cout<<" ";
         }
         cout <<"*";   // Right border
    }
     cout<<endl;
    }
}

void Pyramid(int lim)
{
    int i, j, k;

    for(i=1;i<=lim;i++)
    {
        // Print spaces
        for(j=1;j<=lim - i;j++)
        {
            cout<<" ";
        }
        // Print stars
        for(k=1;k<=(2*i-1);k++)
        {
            cout<<"*";
        }
        cout << endl;
    }
}

