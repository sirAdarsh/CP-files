/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    char c;
    int total = 0;
    int n, m;
    cin >> n >> m;
    char tab[n][m];
    
    vector<int> row(n,0);
    vector<int> col(m,0);
    
    for(int i=0; i<n; i++){
    	cin >> s;
    	
    	for(int j=0; j<m; j++){
    		
    		c = s[j];
    		if(c == '*'){
    			row[i]++;
    			col[j]++;
    			total ++ ;
			}
			tab[i][j] = c;
    		
		}
    	
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			
			if(tab[i][j]=='*'){
				if(row[i] + col[j] - 1 == total){
					cout << "YES" << endl;
					cout << i+1 << ' ' << j+1 << endl;
					return 0;
				}
			}
			
			else{
				
				if(row[i] + col[j] == total){
					cout << "YES" << endl;
					cout << i+1 << ' ' << j+1 << endl;
					return 0;
				}
				
			}
		}
	}
	
	cout << "NO" << endl;
	return 0;
    
}

