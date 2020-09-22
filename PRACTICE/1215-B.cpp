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
    
    ll pdt[n+1];
    pdt[0]=1;
    
    for(int i=0; i<n; i++){
    	cin >> ar[i];
    	if(ar[i]>0)ar[i]=1;
    	else ar[i]=-1;
    	pdt[i+1]=pdt[i]*ar[i];
	}
	
	int pro=1;
	
	ll a1,a2;
	a1=a2=0;
	
	for(int i=0; i<n; i++){
		
		pro*=ar[i];
		
		for(int j=0; j<=i; j++){
			
			if((pro/pdt[j])>0){
				a1++;
			}
			else{
				a2++;
			}
			
		}
		
	}
	cout << a2 << ' ' <<a1 << endl;
}

