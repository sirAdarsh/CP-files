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
bool vis[105];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    int ar[n];
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
    	cin >> ar[i];
    	mp[ar[i]]++;
	}
	
	int stat[n];
	for(int i=0; i<n; i++){
		stat[i]=mp[ar[i]];
	}
	vector<char> ans(n,'.');
	
	int A=0,B=0;
	int a=0;
	
	for(int i=0; i<n; i++){
		if(mp[ar[i]]==1 && !vis[ar[i]]){
			if(a){
				ans[i]='A';
				A++;
			}
			else{
				ans[i]='B';
				B++;
			}
			vis[ar[i]]=true;
			a^=1;
		}
	}
	cout << A << ' ' << B << endl;
	if(A==B){
		for(int i=0; i<n; i++){
			if(ans[i]=='.'){
				ans[i]='A';
			}
		}
		for(auto i : ans){
			cout << i;
		}
	}
	
	else{
		
		char req;
		char ons;
		if(A>B){
			req='B';
			ons='A';
		}
		else{
			req='A';
			ons='B';
		}
		
		int dif=abs(A-B);
		
		for(int i=0; i<n; i++){
			if(dif==0){
				break;
			}
			if(mp[ar[i]]>2 && !vis[ar[i]]){
				ans[i]=req;
				vis[ar[i]]=true;
				dif--;
			}
			
		}
		if(dif!=0){
			cout << "NO";
		}
		else{
			for(int i=0; i<n; i++){
				if(ans[i]=='.'){
					ans[i]=ons;
				}
			}
			for(auto i : ans){
				cout << i;
			}
		}
	}
	
}

