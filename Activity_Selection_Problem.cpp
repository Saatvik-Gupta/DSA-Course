// Activity_Selection_Problem using Greedy approach

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void sort(vector<int>& start,vector<int>& finish,vector<string>& activity,int n){ // soting start and finish array in terms of finishing time

    int i,j;
    for(i=0; i<n-1 ; i++){
        for(j=0; j<n-1-i; j++){

            if(finish[j]>finish[j+1]){

                swap(finish[j],finish[j+1]);
                swap(start[j],start[j+1]);
                swap(activity[j],activity[j+1]);
            }
        }
    }
}

int main()
{
    vector<string>activity={"A1","A2","A3","A4","A5","A6","A7","A8","A9","A10"};
    vector<int>start={1,2,3,4,7,8,9,9,11,12};
    vector<int>finish={3,5,4,7,10,9,11,13,12,14};

    int n=activity.size();    // n=10
    // sorting start and finish time according to the finish time suppose activity alraedy sorted

    sort(start,finish,activity,n);

    int last=0,count=1;
    cout<<"Processed Activities are: "<<endl;
    cout<<"Activity "<<activity[0]<<" : ( "<<start[0]<<" , "<<finish[0]<<" ) "<<endl; // for this count initialise as 1 

    for(int i=1; i<n; i++){
        if(start[i]>= finish[last]){
            cout<<"Activity "<<activity[i]<<" : ( "<<start[i]<<" , "<<finish[i]<<" ) "<<endl;
            last=i;
            count++;
        }
    }

    cout<<"Total Number of Activities Processed are: "<<count<<endl;
    return 0;
}