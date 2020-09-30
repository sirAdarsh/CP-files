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
    cin >> t;
    while(t--){
    	ll n;
    	cin >> n;
    	
    	
    	int sum=1;
    	int last=1;
    	int cnt=0;
    	
    	int idx=1;
    	
    	while(1 && sum<n){
    		idx++;
    		if(sum+last>=n){
    			cnt++;
    			break;
			}
			cnt++;
			if(idx&1){
				sum += last;
			}
			else{
				sum ++;
				last++;
			}
    		
		}
		
		sum=1;
    	last=1;
    	int cnt1=0;
    	
    	idx=1;
		
		
		while(1 && sum<n){
			
			idx++;
			double req = n-sum;
			int nm = ceil(req/last);
			if(cnt1+nm>=cnt){
				cnt1 = cnt1+nm;
				break;
			}
			
			if(sum+last>=n){
				cnt1++;
				break;
			}
			
			if(idx&1){
				sum += last;
			}
			else{
				sum ++;
				last++;
			}
			
		}
		
		cnt = min(cnt,cnt1);
		
    	cout << cnt << endl;
	}
}

