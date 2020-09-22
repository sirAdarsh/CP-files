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
    
    int n,m;
    cin >> n >> m;
    int tot = 0;
    
    vector<string> tab(n);
    
    for(int i=0; i<n; i++){
    	cin >> s;
    	tab[i]=s;
    	for(int j=0; j<m; j++){	
    		if(tab[i][j]=='*'){
    			tot++;
			}
		}
	}
//	cout << tot << endl;
	if(tot<5){
		cout << "NO";
		return 0;
	}
	
	for(int i=1; i<n-1; i++){
		for(int j=1; j<m-1; j++){
			if(tab[i][j]=='*'){
				int cnt=1;
				for(int k=i-1; k>=0; k--){
					if(tab[k][j]=='.'){
						break;
					}
					cnt++;
				}
				for(int k=i+1; k<n; k++){
					if(tab[k][j]=='.'){
						break;
					}
					cnt++;
				}
				for(int k=j-1; k>=0; k--){
					if(tab[i][k]=='.'){
						break;
					}
					cnt++;
				}
				for(int k=j+1; k<m; k++){
					if(tab[i][k]=='.'){
						break;
					}
					cnt++;
				}
				if(cnt==tot){
					cout << "YES";
					return 0;
				}
			}
		}
	}
	cout << "NO";
	return 0;
	
}

