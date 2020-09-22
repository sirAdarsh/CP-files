/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,m;
    cin >> n >> m;
    
    vector<int> dp(n+1,0);
	dp[0]=1;
	
	int ar[n];
	for(int i=0; i<n; i++)cin>>ar[i];
	
	for(int i=1; i<=n; i++){
		
		if(ar[i-1]!=0){
			dp[i]=dp[i-1];
		}
		else{
			
			int cnt=0;
			
			for(int j=1; j<=m; j++){
				
				if(i>1 && i<n){
					if(ar[i-2]==0 && ar[i]==0){
						cnt++;
					}
					else if(ar[i-2]==0){
						if(abs(j-ar[i]<=1)){
							cnt++;
						}
					}
					else if(ar[i]==0){
						if(abs(j-ar[i-2]<=1)){
							cnt++;
						}
					}
					else if(abs(j-ar[i-2])<=1 && abs(j-ar[i])<=1){
						cnt++;
					}
				}
				else if(i==1){
					if(n==1){
						cnt++;
					}
					else{
						if(ar[i]==0){
							cnt++;
						}
						else if(abs(j-ar[i])<=1){
							cnt++;
						}
					}
				}
				else if(i==n){
					if(ar[i-2]==0){
						cnt++;
					}
					else if(abs(j-ar[i-2])<=1){
						cnt++;
					}
				}
				
			}
			
			cout << "cnt - "<<cnt << endl;
			
			dp[i] = (dp[i-1]*cnt)%MOD;
			
		}
		
	}    
    cout << dp[n];
}

