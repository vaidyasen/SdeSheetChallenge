#include <bits/stdc++.h> 
using namespace std;
    int longestConsecutive(vector<int>& arr) {
            int n = arr.size();
            if (n== 0) return 0;
            sort(arr.begin(), arr.end());
            // for(int i= 0; i<n;i++) cout << arr[i] << " ";
            int count = 1, maxSum = 1;
            // cout << n << endl;
            for(int i = 0; i< n;i++){
                if (i+1 == n) break;
                int d = (arr[i+1] - arr[i]) ;
                if(d == 1 or d==0){
                        if (d == 1 ) {
                            count++;
                            maxSum = max(count, maxSum);
                        }
                    }
                else count = 1 ;
                    // cout << "the count after "<< i << "th round is " << count << endl;
            }
      return maxSum;
    }


int main(){
    int t;cin>>t;while(t--){
        int a, n;cin>>n;
        vector<int> v(n);
        for(int i= 0; i<n;i++) cin>>v[i];
        // sort(arr.begin(), arr.end());
        // for(int i= 0; i<n;i++) cout << arr[i] << " ";
        cout << longestConsecutive(v)<<endl;

    }

    return 0;
}
