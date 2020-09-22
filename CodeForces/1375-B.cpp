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
    int t;
    cin >> t;
    while(t--){
    	int n,m;
    	cin >> n >> m;
    	int tab[n][m];
    	for(int i=0; i<n; i++){
    		for(int j=0; j<m; j++){
    			cin >> tab[i][j];
			}
		}
		bool e =false;

		if(tab[0][0]>2 || tab[0][m-1]>2 || tab[n-1][0]>2 || tab[n-1][m-1]>2){
			cout<<"NO"<<endl;
			e=true;
		}
		
		if(!e){
			tab[0][0]=2; tab[0][m-1]=2; tab[n-1][0]=2; tab[n-1][m-1]=2;
		}
		
		if(!e){
			for(int i=1; i<m-1; i++){
				if(tab[0][i]>3){
					cout<<"NO"<<endl;
					e=true;
					break;
				}
				if(tab[n-1][i]>3){
					cout<<"NO"<<endl;
					e=true;
					break;
				}
				tab[0][i]=3;
				tab[n-1][i]=3;
			}
		}
		
		
		if(!e){
			for(int i=1; i<n-1; i++){
				if(tab[i][0]>3){
					cout<<"NO"<<endl;
					e=true;
					break;
				}
				if(tab[i][m-1]>3){
					cout<<"NO"<<endl;
					e=true;
					break;
				}
				tab[i][0]=3;
				tab[i][m-1]=3;
			}
		}
		
		
		if(!e){
			for(int i=1; i<n-1; i++){
				for(int j=1; j<m-1; j++){
					if(tab[i][j]>4){
						cout<<"NO"<<endl;
						e=true;
						break;
					}
					tab[i][j]=4;
				}
				if(e){
					break;
				}
				
			}
		}
		
		if(!e){
			cout<<"YES"<<endl;
			for(int i=0; i<n; i++){
				for(int j=0; j<m; j++){
					cout << tab[i][j]<<" ";
				}
				cout<<endl;
			}
			
		}
		
	}
    
}

