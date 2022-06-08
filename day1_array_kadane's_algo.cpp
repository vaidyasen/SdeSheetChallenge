#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long int sum =  0, maxSum =arr[i] ;    
    for (int i =0;i<n;i++){
        sum += arr[i];
        maxSum = max(sum, maxSum);
        sum = sum < 0 ? 0 : sum;
    }
    if (maxSum < 0) maxSum = 0;
    return maxSum ;  
        
}
