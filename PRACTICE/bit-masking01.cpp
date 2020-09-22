/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    char arr[] = {'A', 'B', 'C', 'D'};
    
    int t,n;
    cin >> t;
    while(t--){
    	
    	cin >> n;
    	
    	int tot = 1 << n;
    	
    	for(int mask = 0; mask < tot; mask ++){
    		for(int i=0; i<n; i++){
    			int f = 1<<i;
    			if((f&mask)!=0){
    				cout << arr[i] << ' ';
				}
			}
			cout << endl;
		}
	}
    
}

