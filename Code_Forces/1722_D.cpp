#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
   
    long long sum=0;
    
    vector<long long > result;
    for(int i=0; i<n; i++){
        if (s[i] == 'R') {
            sum += (n - 1 - i);
            long long extra = i - (n - 1 - i);
            
            result.push_back(extra);
           
        } else {
            sum += i;
            long long extra = (n - 1 - i) - i;
            
            result.push_back(extra); 
          
        }
    }

    sort(result.begin(), result.end(), greater<int>());
    for(int i=0; i<n; i++){
        if(result[i]>0){
            sum=sum+result[i];
        }
        cout<<sum<<" ";
    }
    cout<<endl;

}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}
