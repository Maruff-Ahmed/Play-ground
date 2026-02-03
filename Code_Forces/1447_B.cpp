#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n>>m;

    vector<vector<int>> v(n, vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
        }
    }

    long long sum=0;
    int negative=0;
    long long extra =INT_MAX;

    for(int i=0;i<n;i++){

        for(int j=0; j<m; j++){

            if(v[i][j]<0){
                negative++;
            }
            sum=sum+abs(v[i][j]);

            extra=min(extra,(long long)abs(v[i][j]));
           
        }
    }


    if(negative % 2==0){
        cout<<sum<<endl;
    }
    else{
        cout<<sum-extra-extra<<endl;
    }





    

        
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
