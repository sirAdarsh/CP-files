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
    
    int minn[n];
   	int maxx[n];
    
    for(int i=0; i<n; i++){
    	
    	int N;
    	cin >> N;
    	
    	int ar[N];
    	for(int j=0; j<N; j++){
    		cin >> ar[j];
		}
		
		sort(ar,ar+N);
		
		minn[i] = ar[0];
		maxx[i] = ar[N-1];
		cout << ar[0] << ' ' << ar[N-1] << endl;
//    	cout << minn[i] << '  ' << maxx[i] << endl; 
	}
	
	int ans=0;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
//			cout << minn[i] << ' ' << maxx[j] << endl;
			if(minn[i]<maxx[j]) ans++;
		}
	}
    cout << ans << endl;
}

