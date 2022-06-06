#include <bits/stdc++.h> 
using namespace std;
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    if (n== 0) return 1;
    long long int xx  = modularExponentiation(x, n/2, m);
    xx = (xx*xx)%m ;
    if (n&1) xx = (xx*x)%m;
    
    return xx;
    
}

int main (){
    int x, n , m;
    cin>>x>>n>>m;
    cout << modularExponentiation(x , n , m);
    return 0;
}
