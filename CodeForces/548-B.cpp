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
    
    int n,m,q;
    cin >> n >> m >> q;
    bool tab[n+1][m+1];
    for(int i=1; i<=n; i++){
    	for(int j=1; j<=m; j++){
    		cin >> tab[i][j];
		}
	}
	int x,y;
	
	int max=0;
	
	int maxInRow=0;
		
	for(int i=1; i<=n; i++){
		int len=0;
		for(int j=1; j<=m; j++){
			if(tab[i][j]&1) len++;
			else len=0;
			if(len>max) {
				maxInRow=i;
				max=len;
			}
		}
	}
	
	while(q--){
		cin >> x >> y;
		tab[x][y]^=1;
		int len=0;
		
		if(maxInRow!=x){
			for(int i=1; i<=m; i++){
				if(tab[x][i]&1) len++;
				else len=0;
				if(len>max){
					maxInRow=x;
					max=len;
				} 
			}
		}
		else{
			max=0;
			for(int i=1; i<=n; i++){
				int len=0;
				for(int j=1; j<=m; j++){
					if(tab[i][j]&1) len++;
					else len=0;
					if(len>max) {
						maxInRow=i;
						max=len;
					}
				}
			}
		}
		
	    cout << max << endl;
	}
}

