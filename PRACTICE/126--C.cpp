/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
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
    int r,c;
    cin >> r >> c;
    
    int mat[r][c];
    
    int f=2;
    
    if(r==1 && c==1){
    	cout<<0<<endl;
    	return 0;
	}
	
	if(c==1){
		int g=2;
		for(int i=0; i<r; i++){
			cout << g << endl;
			g++;
		}
		return 0;
	}
    for(int i=0; i<c; i++){
    	mat[0][i]=f;
    	f++;
	}
	
	for(int i=1; i<r; i++){
		for(int j=0; j<c; j++){
			mat[i][j] = (f*mat[0][j]);
		}
		f++;
	}
	
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout << mat[i][j] << ' ';
		}
		cout << endl;
	}
    
}

