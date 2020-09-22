/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    while(1){
    	int n,m;
	    cin >> n >> m;
	    
	    if(n==0 && m==0){
	    	break;
		}
	    
	    int tab[n+1][m+1];
	    for(int i=1; i<=n; i++){
	    	for(int j=1; j<=m; j++){
	    		cin >> tab[i][j];
			}
		}
		
		int dp[n+1][m+1];
		
		for(int i=1; i<=n; i++){
	   		for(int j=1; j<=m; j++){
	   			dp[i][j]=0;
			}
		}
		
		for(int i=1; i<=m; i++){
			if(tab[1][i]==0){
				dp[1][i]=1;
			}
		}
		
		for(int i=2; i<=n; i++){
			for(int j=1; j<=m; j++){
				if(tab[i][j]==0){
					dp[i][j]=1+dp[i-1][j];
				}
			}
		}
	   		
		int maxArea=0;
		
		for(int i=2; i<=n; i++){
			for(int j=1; j<=m; j++){
				if(tab[i][j]==0){
					dp[i][j]=1+dp[i-1][j];
				}
			}
		}
		
		
		
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				
				if(tab[i][j]==0){
					
					int height = dp[i][j];
					int width = 1;
					
					
					
					int area = height*width;
					if(area>maxArea){
						maxArea=area;
					}
					
					for(int k=j-1; k>=1; k--){
						
						if(tab[i][k]==0){
							width++;
							height = min(dp[i][k],height);
							area = height*width;
							if(area>maxArea){
								maxArea=area;
							}
						}
						else{
							break;
						}
						
					}
					
				}
				
			}
		}
		cout << maxArea << endl;
	}
	
    
}

