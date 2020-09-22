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
    int ar[n];
    int tmp[n];
    for(int i=0; i<n; i++){
    	cin >> ar[i];
    	tmp[i]=ar[i];
	}
	sort(ar,ar+n,greater<int>());
	
	int ans=0;
	
	int x=0;
	
	for(int i=0; i<n; i++){
		ans += (x*ar[i]+1);
		x++;
	}
	cout << ans << endl;
	unordered_map<int,bool> mp;
	
	for(int i=0; i<n; i++){
		int nm = ar[i];
		for(int j=0; j<n; j++){
			if(tmp[j]==nm && mp.find(j)==mp.end()){
				cout << j+1 << ' ';
				mp[j]=true;
				break;
			}
		}
	}
	
}

