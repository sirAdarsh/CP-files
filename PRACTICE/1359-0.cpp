// Hare Krishna

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	
    	float n,m,k;
    	cin >> n >> m >> k;
    	
    	int eq = n/k;
    	
    	int maxm = min( m,(float)eq );
    	
    	float rem = m - maxm;
    	
    	int tem = ceil( rem / (k-1) );
    	
    	cout << maxm-tem<<endl;
    	
	}
    
}

