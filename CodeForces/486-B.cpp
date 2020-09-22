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
    
    int n,m;
    cin >> n >> m;
    int tab[n][m];
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		cin >> tab[i][j];
		}
	}
    
    int tab2[n][m];
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		tab2[i][j]=-1;
		}
	}
	
	vector<pair<int,int>> ones;
    
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		if(tab[i][j]==0){
    			for(int k=0; k<m; k++){
    				tab2[i][k]=0;
				}
    			for(int k=0; k<n; k++){
					tab2[k][j]=0;
				}
			}
			else{
				ones.push_back({i,j});
			}
		}
	}
	bool e=false;
	
	for(auto i : ones){
		
		int a,b;
		a = i.first; b=i.second;
		bool filled=false;
		
		for(int i=0; i<m; i++){
			if(tab2[a][i]==1){
				filled=true;
				break;
			}
			if(tab2[a][i]==-1){
				tab2[a][i]=1;
				filled=true;
				break;
			}
		}
		if(!filled){
			for(int i=0; i<n; i++){
				if(tab2[i][b]==1){
					filled=true;
					break;
				}
				if(tab2[i][b]==-1){
					tab2[i][b]=1;
					filled=true;
					break;
				}
			}
		}
		
		if(!filled){
			e=true;
			break;
		}
	}
	if(e){
		cout <<"NO"<<endl;
	}
	else{
		cout <<"YES"<<endl;
		for(int i=0; i<n; i++){
			for(int j=0; j<m;j++){
				if(tab2[i][j]==-1){
					tab2[i][j]=0;
				}
				cout << tab2[i][j] <<" ";
			}
			cout << endl;
		}
	}
}

