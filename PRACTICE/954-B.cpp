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
    cin >> s;
    int ans=0;
    
    int idx=-1;
    
    for(int i=n/2; i>0; i--){
    	cout << i << "   " << s.substr(0,i) << ' ' << s.substr(i,i)<<endl;
    	if(s.substr(0,i)==s.substr(i,i)){
    		idx=i;
    		break;
		}
	}
    
    if(idx!=-1){
    	ans = (idx)+(n-(2*idx))+1;
	}
    else{
    	ans=n;
	}
	cout << ans;
}

