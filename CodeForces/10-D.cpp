#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin >> n;
    int A[n];
    
    for(int i=0; i<n; i++){
    	cin >> A[i];
	}
	cin >> m;
	int B[m];
	for(int i=0; i<m; i++){
		cin >> B[i];
	}
	
	if(m<=n){
		
		int dp[m] = {}; // max increasing subsequence starting with index i;
		
		
		for(int k=0; k<m; k++){
			
			int lastXIndex=-1;
			int lastNum = -1;
			
			for(int i=k; i<m; i++){
			
				if( B[i] >  lastNum ){
				
					for(int j=lastXIndex + 1 ; j < n; j++ ){
					
						if( A[j] == B[i]){
							dp[k]++;
							lastXIndex = j;
							break;
 						}
					
					}
					lastNum = B[i];
				}
			
			}
//			cout<<dp[k]<<" ";
		}
		int mx= 0, in = -1;
		for(int i=0; i<m; i++){
			if(dp[i] > mx){
				mx = dp[i];
				in = i;
			}
		}		
		int lastN = -1, lastI = -1;
		vector<int> ans;
		for(int i = in; i <m; i++){
			
			if(B[i] > lastN){
				
				for(int j=lastI + 1; j<n; j++){
					
					if( A[j] == B[i]){
						ans.push_back(A[j]);
						lastI = j;
						break;
					}
					
				}
				
				
			}
			
		}
		
		cout<<	mx <<endl;
		for(auto i : ans){
			cout<<i<<" ";
		}	cout<<endl;
		
	}else{
		int dp[n] = {}; // max increasing subsequence starting with index i;
		
		
		for(int k=0; k<n; k++){
			
			int lastXIndex=-1;
			int lastNum = -1;
			
			for(int i=k; i<n; i++){
			
				if( A[i] >  lastNum ){
				
					for(int j=lastXIndex + 1 ; j < m; j++ ){
					
						if( B[j] == A[i]){
							dp[k]++;
							lastXIndex = j;
							break;
 						}
					
					}
					lastNum = A[i];
				}
			
			}
//			cout<<dp[k]<<" ";
		}
		int mx= 0, in = -1;
		for(int i=0; i<n; i++){
			if(dp[i] > mx){
				mx = dp[i];
				in = i;
			}
		}		
		int lastN = -1, lastI = -1;
		vector<int> ans;
		for(int i = in; i <n; i++){
			
			if(A[i] > lastN){
				
				for(int j=lastI + 1; j<m; j++){
					
					if( B[j] == A[i]){
						ans.push_back(B[j]);
						lastI = j;
						break;
					}
					
				}
				
				
			}
			
		}
		
		cout<<	mx <<endl;
		for(auto i : ans){
			cout<<i<<" ";
		}	cout<<endl;
	}
	
	
    
}

