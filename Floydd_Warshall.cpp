#include<iostream>
using namespace std;
int infinity=999;

void Print_Final_Table(int n,int Q[][10]){ // column mention is necessary

    cout<<"Final All Pair Shortest Path is :\n";

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< Q[i][j]<<"\t";
        }
        cout<<endl;
        }
    }

int main(){
    int n;
    cout<<"Enter the Number of Nodes:";
    cin>>n;

    int W[10][10],Q[10][10];

    
    cout<<"Enter the Weighted Matrix:\n";

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> W[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(W[i][j]==0 && i!=j){
                Q[i][j]=infinity; // 0--->infinty i.e 999
            }

            else if( i==j) Q[i][j]=0;

            else Q[i][j]=W[i][j];
        }
    }

    // floydd warshal algo
    
    for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            Q[i][j]=min(
                Q[i][j] , Q[i][k]+Q[k][j]
            );
        }
    }
}

Print_Final_Table(n,Q);
return 0;
}