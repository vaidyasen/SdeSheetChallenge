#include <bits/stdc++.h> 
using namespace std;
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


int main(){
    vector<int> arr= {1 ,3 ,22, 17, 5, 30, 7 ,8, 24, 9, 11, 12, 13, 14, 15, 32, 2 ,16, 19, 4, 28, 23 ,16 ,10 ,25 ,33, 27, 21, 35, 6 ,20, 18 ,26 ,34 ,29 };
    int n = arr.size();
    // cout<<n<<endl;
    pair<int, int> p = missingAndRepeating(arr,n );
    cout << p.first << " " << p.second;
    
//     vector<int> vect(n+1, 0);
//     // vect.push_back(0);
//     int missing = 0 , repeated = 0;
//     for(int i= 0; i < n+1;i++){
//         if (vect[arr[i]] == 0) vect[arr[i]] = arr[i];
// //         else vect[arr[i]] = arr[i];
//         else {
//             repeated = arr[i];
//             // break;
//         }
//     }
//     cout << vect[7]<<endl;
//     for (int i = 0;i< n+1; i++) {
//         cout << vect[i] << " ";
//     }
    
//     for(int i= 1; i< n;i++){
//         if (vect.at(i) == i) continue;
         
//         else  {
//             missing = i;
//             // break;
//         }
//     }
//     cout<<endl;
//     cout<< missing<< " " << repeated;
    
    return 0;
}
