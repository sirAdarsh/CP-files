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

int col[1001];
int row[1001];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,m;
    cin >> n >> m;
    char tab[n][m];
    
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		cout <<i <<" "<<j<<endl;
    		cin >> tab[i][j];
    		if(tab[i][j]=='*'){
    			row[i]++;
    			col[j]++;
			}
		}
	}
    
    int count = 0;
    
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		if(tab[i][j]=='*'){
    			count += ( (row[i]-1)*(col[j]-1) );
			}
		}
	}
    cout << count << endl;
}

