#include <bits/stdc++.h>
using namespace std;

void solve() {
    
     string x;
        cin >> x;
        
        int n = x.length();
        vector<int> d(n);
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            d[i] = x[i] - '0';
            sum += d[i];
        }
        
      
        if (sum >= 1 && sum <= 9) {
            cout << 0 << endl;
            return;
        }
        
       
        int remain = sum - 9;
        
      
        vector<int> v(n);
        v[0] = d[0] - 1;  
        for (int i = 1; i < n; i++) {
            v[i] = d[i];  
        }
        
     
        sort(v.begin(), v.end(), greater<int>());
        
      
        int total = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            total += v[i];
            cnt++;
            if (total >= remain) {
                break;
            }
        }
        
        cout <<cnt << endl;
}

int main() {
   
    int t;
    cin >> t;
  
    while (t--) solve();
}