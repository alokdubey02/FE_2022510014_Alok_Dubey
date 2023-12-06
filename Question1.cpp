// removeDuplicates
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums;
    int n=0;
    cout<<"Enter number of elements you wanna insert"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    vector<int>result;
    for( int i=0;i<nums.size();i++){
        if(i==0 || nums[i]!=nums[i-1])
            result.push_back(nums[i]);
    }
    cout<<"Unique element are "<<result.size()<<endl;
    for(int i=0;i<result.size();i++)
        cout<<result[i]<<" ";
    return 0;
}