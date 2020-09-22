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
    
    int n,m;
    cin >> n >> m;
    
    int ar[m];
    for(int i=0; i<m; i++){
    	cin >> ar[i];
	}
	
	
	int position_of[n+1];
	for(int i=1; i<=n; i++){
		position_of[i]=i;
	}
	
	int post_at[n+1];
	for(int i=1; i<=n; i++){
		post_at[i]=i;
	}
	
	
	vector<pair<int,int>> vec(n+1);
	
	for(int i=1; i<=n; i++){
		vec[i].first=i;
		vec[i].second=i;
	}
	
	for(int i=0; i<m; i++){
		
		int post = ar[i];
		
		if(position_of[post]!=1){
			int prev_post = post_at[position_of[post]-1];
			
			swap( position_of[prev_post], position_of[post] );
			swap( post_at[position_of[prev_post]], post_at[position_of[post]] );
			
			vec[post].first = min( position_of[post], vec[post].first );
			vec[post].second = max( position_of[post], vec[post].second );
			
			vec[prev_post].first = min( position_of[prev_post], vec[prev_post].first );
			vec[prev_post].second = max( vec[prev_post].second, position_of[prev_post] );
			
		}
		
	}
	
	
	
	for(int i=1; i<=n; i++){
		cout << vec[i].first <<' ' << vec[i].second<<endl;
	}
					  
}

