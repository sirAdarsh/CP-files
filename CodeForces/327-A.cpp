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
int ones[120];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    int ar[n+1];
    int tot=0;
    for(int i=1; i<=n; i++){
    	cin >> ar[i];
    	if(ar[i]==1){
    		ones[i]=ones[i-1]+1;
    		tot++;
		}
		else{
			ones[i]=ones[i-1];
		}
	}
	int maxx=0;
	for(int sz=1; sz<=n; sz++){
		
		for(int i=1; i<=n; i++){
			
			if(i+sz-1>n){
				continue;
			}
			
			int profit=0;
			
			profit = tot + sz - 2*(ones[i+sz-1]-ones[i-1]);
			
			if(profit>maxx){
				maxx=profit;
			}
			
		}
		
	}
	cout << maxx << endl;
    
}

