#include <bits/stdc++.h> 
using namespace std;

int maximumProfit(vector<int> &prices){
    // Write your code here.
      int profit = 0;
      int n = prices.size();
      int minimum = INT_MAX;
      for (int i = 0; i < n; i++) {
//         minimum = min(minimum, prices[i]);
          if(prices[i] < minimum) minimum = prices[i];
//         profit = max(profit, prices[i] - minimum);
          if (prices[i] - minimum > profit) profit = prices[i] - minimum;
      }
      return profit;
    }

int main() {
  int t;cin>>t;while(t--){
    int n; cin >>n;  
    vector<int> arr(n);
    for(int i = 0; i <n;i++) cin >> arr[i];
    
    vector<int> *arr1;
    arr1 = &arr;
    int profit = maximumProfit(*arr1);
    cout << profit << endl;
  }
  
 return 0;
}
