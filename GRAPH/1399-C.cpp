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

int solve(int arr[], int n){
	
	
	int teamsMax = 0;
	int sum;
	
	
	for(int i=2; i<=110; i++){
		
		int teams = 0;
		
		vector<bool> used(n,false);
		
		int desiredSum=i;
		
		for(int j=0; j<n; j++){
			
			if(used[j]){
				continue;
			}
			
			for(int k=j+1; k<n; k++){
				
				if(used[k]){
					continue;
				}
				
				if(arr[k]==desiredSum-arr[j]){
					
					used[k]=true;
					teams++;
					break;
					
				}
				
			}
			
		}
		
		if(teams>teamsMax){
			teamsMax=teams;
		}
		
	}
	return teamsMax;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	
    	int n;
    	cin >> n;
    	
    	int arr[n];
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
		}
		
		sort(arr,arr+n);
		
		cout << solve(arr,n) << endl;
    	
	}
    
}

