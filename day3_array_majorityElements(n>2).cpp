#include <bits/stdc++.h> 
using namespace std;

int findMajorityElement(int arr[], int n) {
    if (n == 1) return arr[0];
    vector<int> v;
    v.insert(v.begin(), arr, arr + n);
    sort(v.begin(), v.end());
    int count = 1, ans;
    for(int i=0; i< n;i++){
        if ( (i+1) < n && v[i] == v[i+1]) {
            ans = v[i];
            count ++;
            if ( count > (n/2)) return ans; 
        }
        else count = 0; ans  = -1;
    }
    return -1;
}

int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        int arr[n];
        // int m = sizeof(arr) / sizeof(arr[0]);
        for(int i=0;i< n;i++) cin >> arr[i];
        cout<< findMajorityElement(arr, n);
    }
    
    return 0;
}
