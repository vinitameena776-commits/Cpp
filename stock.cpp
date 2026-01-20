#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int mini=prices[0];
        for(int i=0;i<prices.size();i++){
            int cost=prices[i]-mini;//sell-buy
            mini=min(mini,prices[i]);//represent best day to buy 
            profit=max(profit,cost);
        }
        
         return profit;
    }
};
int main(){
vector<int>prices={7,1,5,3,6,4};
Solution result;
int ans=result.maxProfit(prices);
cout<<"The maximum profit is : "<<ans<<endl;
return 0;
}