#include <bits/stdc++.h> 
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
    int n = matrix.size(), m = matrix[0].size();
    vector<vector<int>> vec( n , vector<int> (m, -1)); 
    
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if(matrix [i][j]==0){
                for(int k = 0;k < matrix[i].size(); k++) vec[i][k]= 0;
                for(int k = 0;k < matrix.size(); k++) vec[k][j]= 0;
            }
            else if (vec[i][j] != 0 ) vec[i][j] = matrix[i][j];
        }
    }
    matrix = vec;
}

int main(){
    int t; cin>>t;while(t--){
        int n, m ;
        cin>>n>>m;
        vector<vector<int>> matrix(n, vector<int> (m));
        //vector<vector<int>> matrix;
        // matrix = {
        //     {1, 2, 3},
        //     {4, 5, 0},
        //     {7, 0, 9}
        // };
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>> matrix[i][j];
            }    
            cout << endl;
        }
        // int n = matrix.size(), m = matrix[0].size();
        // cout<<n<<m<<endl;
        vector<vector<int>> *matrix1;
        matrix1= &matrix;
        setZeros(*matrix1);
        
        cout << "The Final Matrix is " << endl;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                cout << matrix[i][j] << " ";
                        }
//         cout << "\n";
              }  
      }
        
    return 0 ;
}
