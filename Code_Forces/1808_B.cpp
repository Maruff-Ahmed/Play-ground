#include <bits/stdc++.h>
using namespace std;

void solve() {

    long long n,m;
    cin>>n>>m;

    vector<vector<long long>>v(n,vector<long long>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
        }
    }
    long long total=0;

     for (int i = 0; i < m; i++) {

        vector<long long>p(n);

        for(int j=0; j<n; j++){

            p[j]=v[j][i];
        }
        sort(p.begin(),p.end());

        long long prefix=0;
        
        for(int k=0; k<n; k++){

            total=total + (p[k]*k -prefix);

            prefix=prefix+p[k];
        }

        
    }

    cout<<total<<endl;
   

   

    

        
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
