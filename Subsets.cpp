// Calculating all possible subsets of given array of integers or a string

#include<iostream>
using namespace std;
#include<vector>

void Subsets(vector<int>& nums,vector<int>& ans,int idx){

    // Base condition
    if(idx==nums.size()){

    for(int val: ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return;

    }

    // inclusion
    ans.push_back(nums[idx]);
    Subsets(nums,ans,idx+1);

    ans.pop_back(); // backtracking

    // exclusion
    Subsets(nums,ans,idx+1);
}

int main(){
    vector<int>nums={1,2,3};

    vector<int>ans;

    cout<<"All Posiible subsets are:"<<endl;

    Subsets(nums,ans,0);
    return 0;

}