#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    vector<int> vect(n+1, 0);
    // vect.push_back(0);
    int missing = 0 , repeated = 0;
    for(int i= 0; i< n+1;i++){
        if (vect[arr[i]] == 0) vect[arr[i]] = arr[i];
//         else vect[arr[i]] = arr[i];
        else {
            repeated = arr[i];
            // break;
        }
    }
    
    // for (auto ele : vect) {
    //     cout << ele << " ";
    // }
    
    for(int i= 1; i< n+1;i++){
        if (vect[i] == i) continue;
         
        else  {
            missing = i;
            // break;
        }
    }
    return make_pair(missing, repeated);
}
