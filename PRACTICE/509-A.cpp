/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    int tab[n][n];
    for(int i=0; i<n; i++){
    	tab[0][i]=1;
    	tab[i][0]=1;
	}
	for(int i=1; i<n; i++){
		for(int j=1; j<n; j++){
			tab[i][j] = tab[i-1][j]+tab[i][j-1];
		}
	}
    cout << tab[n-1][n-1];
}

