#include <bits/stdc++.h> 

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    int m =  *max_element(arr.begin(), arr.end());
    if( m <= n) m = n;
    int arr1[m];
    for(int i = 0; i< n;i++){
        arr1[i]= -1;
    }
    int  i, ans = 0;
    for(i = 0;i<n;i++){
        if(arr1[i] != arr[i]) {
            int a = arr[i] ;
            if ( arr1[a]== arr[i]) ans =  arr[i];
            else arr1[a] = arr[i];
        }
        else ans=  arr[i];
    }
    return ans;
}
