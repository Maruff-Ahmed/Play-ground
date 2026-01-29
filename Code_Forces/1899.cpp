#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    } 

    long long result =v[0];   
    long long sum = v[0];      
                

    for (int j = 1; j < n; j++) {

        if ((abs(v[j]) % 2) != (abs(v[j-1]) % 2)) {
          
            sum =max(v[j],sum + v[j]);
        } else {
            
            sum = v[j];
          
        }

        result = max(result, sum);




    }

    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
