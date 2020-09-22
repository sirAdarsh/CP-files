#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q;
    cin >> n >> q;
    
    int zerosInRow[n+1];
    for(int i=1; i<=n; i++){
    	zerosInRow[i] = n;
	}
	
	int table[n+1][n+1] = {};
	
	int sum =0;
	
	while(q--){
		
		int Q;
		cin >> Q;
		if(Q==1){
			cout<<sum <<endl;
		}
		else if(Q==2){
			
			int r,c;
			cin >> r >> c;
			
			if(table[r][c]==0){
				table[r][c]==1;
				zerosInRow[r] -= 1;
			}
			else{
				table[r][c]==0;
				zerosInRow[r] -= 1;
			}
			if(table[r][c]==1){
				sum +=1;
			}
			else{
				sum -=1;
			}
			
		}
		else if(Q==3){
			int r;
			cin >> r;
			
			int oneInRow = zerosInRow[r];
			
			zerosInRow[r] = n - zerosInRow[r];
			
			sum += oneInRow;
			sum -= zerosInRow[r];
			
		}

	}
    
}

