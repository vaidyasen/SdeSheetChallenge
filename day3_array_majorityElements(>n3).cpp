#include <bits/stdc++.h> 
using namespace std;

vector<int> majorityElementII(vector<int> &arr) {
    
    int n = arr.size();
    vector<int>* vector1;
    vector1 = &arr;
    
    // if (n == 1) return arr[0];
    vector<int> v;
    v.insert(v.begin(), vector1, vector1 + n);
    sort(v.begin(), v.end());
    int count = 1, a = 0, ans;
    set<int> set1 (n,-1);
    for(int i=0; i< n;i++){
        if ( (i+1) < n && v[i] == v[i+1]) {
            ans = v[i];
            count ++;
            if ( count > (n/3)) {
                set1.insert(ans);
                a++;
            }
        }
        else count = 1; ans  = -1;
    }
    vector<int> vector2(set1.begin(), set1.end());
    // vector2 = set1;
    // for (int const &c: vector2) {
    //     cout << c << ' ';
    // }
    
    // vector<int> *vect;
    // vect = &vector2;
    return vector2;
}

int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        vector<int> vec;
        // int m = sizeof(arr) / sizeof(arr[0]);
        for(int i=0;i< n;i++) cin>> vec[i];
        
        vector<int> *vect;
        vect = &vec;
        vec = majorityElementII(*vect);
        for(int i=0;i< n;i++) cout<< vec[i];
    }
    
    return 0;
}
