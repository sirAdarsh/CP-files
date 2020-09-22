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
    
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int arr1[n], arr2[n];
    	for(int i=0; i<n; i++){
    		cin >> arr1[i];
		}
		for(int i=0; i<n; i++){
    		cin >> arr2[i];
		}
		
    	
    	int ans = 0;
    	
    	int pos1 = 0, pos2=0;
    	for(int i=0; i<n; i++){
    		if(pos1==pos2 && arr1[i]==arr2[i]){
    			ans += arr1[i];
			}
			pos1= pos1 + ( arr1[i] );
			pos2= pos2 + ( arr2[i] );
		}
		
		cout<<ans<<endl;
		
	}
    
}

