#include<bits/stdc++.h>
#define ll long long
using namespace std;

int tab[50][50];

string solve(int n){
	
	for(int i=0; i<n; i++){
		
		for(int j=0; j<n; j++){
			
			if(tab[i][j]==1){
				if( i==n-1 || j==n-1 ){
					continue;
				}
				else if( i==n-2 ) {
					
					if(tab[i+1][j]!=1 && tab[i][j+1]!=1 ){
						return "NO";
						
					}
					
				}
				else if( j==n-2 ){
					
						if( tab[i][j+1]!=1 && tab[i+1][j]!=1 ){
							return "NO";
						}
					
				}
				else{
						if(tab[i+1][j]!=1  && tab[i][j+1]!=1){
							return "NO";
						}
					
				}
			}
			
		}
		
	}

	return "YES";
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
    	
    	int n;
    	cin >> n;
    	
    	
    	
    	for(int i=0; i<n; i++){
    		
    		string s;
    		cin >>s;
    		
    		for(int j=0; j<n; j++){
    			if(s[j]!='0'){
    				tab[i][j]=1;
				}
			}
		}
//		for(int i=0;i<n;i++){
//			for(int j=0; j<n; j++){
//				cout<<tab[i][j]<<" ";
//			}
//			cout<<endl;
//		}
		
		
		cout<<solve(n)<<endl;
    	
	}
    
}

