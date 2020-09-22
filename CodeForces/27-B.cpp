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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    
    int tab[t+1][t+1];
    memset(tab,0,sizeof(tab));
    
    int p=t*(t-1)/2-1;
    
    while(p--){
    	int a,b;
    	cin >>a >>b;
    	tab[a][b]=1;
    	tab[b][a]=-1;
	}
	
	for(int i=1; i<=t; i++){
		for(int j=1; j<=t; j++){
			if(i!=j){
				if(tab[i][j]==0){
					
					for(int k=1; k<=t; k++){
						if(tab[j][k]==1){
						
							if(tab[i][k]==-1){
								cout << j << ' ' << i << endl;
								return 0;
							}
							
						}
					}
					
					cout << i<<' '<<j;
					return 0;
				}
			}
		}
	}
    
}

