/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int n,k;

string solve(ll arr[]){
	
	ll occ[60];
	memset(occ,0,sizeof(occ));
	
	for(int i=0; i<n; i++){
		
		for(int j=55; j>=0; j--){
			
			ll num;
			
			if(arr[i]==0){
				break;
			}
			
			if(occ[j]!=0){
				continue;
			}
			
			if(pow(k,j)>arr[i]){
				continue;
			}
			arr[i]-=pow(k,j);
			occ[j]++;
			
		}
		
		if(arr[i]!=0){
			return "NO";
		}
		
	}
	return "YES";
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	
    	cin >> n >> k;
    	ll arr[n];
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
		}
		
		cout << solve(arr) << endl;
		
	}
    
}

