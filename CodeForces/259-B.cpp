/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

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
    
    int tab[4][4];
    for(int i=1; i<=3; i++){
    	for(int j=1; j<=3; j++){
    		cin >> tab[i][j];
		}
	}
    
    int aPc = tab[2][1] + tab[2][3];
    
    int s = (aPc + tab[1][2] + tab[1][3] + tab[3][1] + tab[3][2] ) / 2 ;
    
    int b = s - (aPc);
    
    
    int a = s - (tab[1][2]+tab[1][3]);
    int c = aPc - a;
    tab[1][1] = a; tab[2][2] = b; tab[3][3] = c;
    for(int i=1; i<=3; i++){
    	for(int j=1; j<=3; j++){
    		cout << tab[i][j]<<" ";
		}
		cout<<endl;
	}
    
}

