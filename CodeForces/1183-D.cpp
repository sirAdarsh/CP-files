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
    	int n;
    	cin >> n;
    	int ar[n];
    	unordered_map<int,int> tmp;
    	for(int i=0; i<n; i++){
    		cin >> ar[i];
    		tmp[ar[i]]++;
		}
		multiset<int> st;
		unordered_map<int,bool> checkIfUsed;
		for(auto i : tmp){
			st.insert(i.second);
		}
		int ans=0;
		int last=-1;
		for(auto it=st.rbegin(); it!=st.rend(); it++){
			int h = *it;
			if(checkIfUsed[h]){
				ans += max(0,last-1);
				checkIfUsed[last-1]++;
				last=last-1;
			}
			else{
				ans += max(0,h);
				checkIfUsed[h]++;
				last=h;
			}
		} 
		cout << ans << endl;
	}
}

