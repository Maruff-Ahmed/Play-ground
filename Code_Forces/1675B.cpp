#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
		cin >> n; 
		vector<long long> a(n);
		for (int i = 0; i < n; i++) 
			cin >> a[i];

		long long ans = 0; 
		for (int i = n - 2; i >= 0; i--) 
		{
			while (a[i] >= a[i + 1] && a[i]>0) 
			{
				//ans++; 
				a[i] /= 2; 
                ans++;
				
			}
			if (a[i] ==  a[i + 1] ) 
			{
				ans = -1; 
				break;
			}
		}
		cout << ans << endl; 
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}