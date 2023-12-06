//stock 
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&price){
    int n=price.size();
    if(n<=1)
        return 0;
    int buyDay=0,sellDay=0,maxProfit=0;
    for(int i=1;i<n;i++){
        if(price[i]<price[buyDay]){
            buyDay=i;
        }else{
            int currentProfit=price[i]-price[buyDay];
            if(currentProfit>maxProfit){
                maxProfit=currentProfit;
                sellDay=i;
            }
        }
    }
    cout<<"Buy on day "<<buyDay<<endl;
    cout<<"Sell day "<<sellDay<<endl;
    return maxProfit;
}

int main(){
    vector<int>stockPrice={7,1,5,3,6,4};
    int profit=solve(stockPrice);
    cout<<profit<<endl;
    return 0;
}