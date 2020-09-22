#include<bits/stdc++.h>
#define ll long long
using namespace std;

string solve(int odds, int evens, vector<int> odd, vector<int> even){
	
	if(odds%2==0 && evens%2==0){
    		return  "YES";
		}
    	
    	else if( (odds % 2) !=0 && (evens % 2) !=0 ){
    		
    			for(auto i : odd){
    				for(auto j : even){
    					if( abs(j-i) == 1 ){
    						return "YES";
						}
					}
				}
					return "NO";
				
    			
			}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
    	
    	int n;
    	cin >> n;
    	
    	int evens = 0;
    	int odds = 0;
    	
    	vector<int> odd; vector<int> even;
    	
    	int arr[n];
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
    		if(arr[i]%2){
    			odds++;
    			odd.push_back(arr[i]);
			}
			else{
				evens++;
				even.push_back(arr[i]);
			}
		}
    	
    	cout << solve(odds,evens,odd,even)<<endl;
    	
    	
	}
    
}

