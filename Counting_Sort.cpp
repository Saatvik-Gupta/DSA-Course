#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void print_array(vector<int>& B){
    for(int val : B){
        cout<<val<<" ";
    }
    cout<<endl;;
}

void Counting_Sort(vector<int>& arr,vector<int>& B, int n,int k){

    vector<int>c(k+1,0); // initialize to 0
    for(int j=0;j<n;j++){
        c[arr[j]]++;
    }

    for(int i=1; i<=k; i++){ // modifying the frequency array
        c[i]=c[i]+c[i-1];
    }

    for(int j=n-1; j>=0; j--){
        B[c[arr[j]]-1]=arr[j];
        c[arr[j]]--;
    }
    print_array(B);
}

int main()
{
    vector<int>arr={0,7,5,0,1,1,3,5,7};

    int n=arr.size();
    int k= *max_element(arr.begin(),arr.end());
    vector<int>B(n);

    cout<<"Sorted Array is: "<<endl;
    Counting_Sort(arr,B,n,k);
    return 0;
}