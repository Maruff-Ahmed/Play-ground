#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    string arr[3][n];
    map<string, int> freq;

    for(int i=0; i<3; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<n; j++){
            freq[arr[i][j]]++;
        }
    }

    vector<int>p(3,0);
    
    for(int i=0; i<3; i++){
        for(int j=0; j<n; j++){
            int cnt = freq[arr[i][j]];
            if (cnt == 1){
                p[i]=p[i]+3;
            } 
            else if(cnt== 2){
                p[i]=p[i]+1;
            }
            else{
                p[i]=p[i]+0;
            } 
        }
    }

    cout << p[0]<< " " <<p[1]<< " " <<p[2]<<endl;
    

}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
