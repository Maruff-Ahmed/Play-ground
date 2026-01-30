#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int>x(q);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<q; i++){
        cin>>x[i];
    }

    

    int limit=31;
    for(int i=0; i<q; i++){

        if(x[i]>=limit){
            continue;
        }
        for(int j=0; j<n; j++){
            

            long long p=pow(2,x[i]);

            if (a[j] % p == 0) { 

				a[j] =a[j]+ (pow(2,(x[i]-1))); 
			}
        }

        limit=x[i];
    }

    for (int i = 0; i < n; i++){ 

		cout << a[i] << " ";
	}
	cout << endl;

    
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
