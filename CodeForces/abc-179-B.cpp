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
    int n;
    cin >> n;
    vector<pair<int,int>> vec;
    for(int i=0; i<n; i++){
    	int a,b;
    	cin >> a >> b;
    	vec.pb({a,b});
	}
	
	for(int i=0; i<n-2; i++){
		
		if(vec[i].first==vec[i].second && vec[i+1].first==vec[i+1].second && vec[i+2].first==vec[i+2].second){
			cout<<"Yes";
			return 0;
		}
		
	}
	cout <<"No";	
}

