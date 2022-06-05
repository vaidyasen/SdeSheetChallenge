#include <bits/stdc++.h> 
#include <vector>
using namespace std;

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
//     int n = matrix.size(), m = matrix[0].size();
        for (int i = 0; i <m; i++)
            {
                for (int j = 0; j <n; j++)
                    {
                        if(mat [i][j]==target) return true;
                }
            }
        return false;
    }

int main(){
      int t;cin>>t;while(t--){
        int n, m , target;
        cin>>n>>m>>target;
        vector<vector<int>> v(n, vector<int>(m));
        for(int i =0; i<n;i++){
          for(int j = 0 ; j<m;j++){
            cin>> v[i][j];
          }
          cout<<endl;
        }
        vector<vector<int>> *vect;
        vect = &v;
        
        bool answer = findTargetInMatrix(*vect, n, m,target);
        
        cout<< answer<<endl;
      }
  return 0;
}
        
  
