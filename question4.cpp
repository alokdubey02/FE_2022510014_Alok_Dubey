//sortedArray
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements you wanna insert "<<endl;
    cin>>n;
    vector<int>data;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        data.push_back(a);
    }
    int element;
    cout<<"element you wanna find"<<endl;
    cin>>element;
    int low=0,high=n;
    while(low<high){
        int mid=(low+high)/2;
        if(data[mid]==element)
            {
                cout<<"index "<<mid<<endl;
                // return mid;
                break;
            }
        else{
            if(data[mid]<element){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }
    return 0;

}