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
    for(int i=0; i<n; i++){
    	cin >> ar[i];
	}
	if(n==1){
		cout <<ar[0];
		return 0;
	}
	
	int ans=-1;
	int maxx=0;
	
	for(int i=0; i<n; i++){
		
		int tmp=1;
		
		int prev=-1;
		
		for(int j=0; j<n; j++){
			
			if(i==j){
				continue;
			}
			if(prev==-1){
				prev=ar[j];
				continue;
			}
			if(ar[j]>prev){
				tmp++;
			}
			else{
				break;
			}
		}
		if(tmp>maxx){
			maxx=tmp;
			ans=ar[i];
		}
		else if(tmp==maxx){
			ans=min(ans,ar[i]);
		}
	}
    cout << ans << endl;
}

