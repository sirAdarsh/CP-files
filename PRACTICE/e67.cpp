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
    vector<string> vec(n);
    for(int i=0; i<n; i++){
    	cin >> s;
    	vec[i]=s;
	}
	
	sort(vec.begin(),vec.end());
	
	int ans=INT_MAX;
	
	do{
		
		string fnl="";
		
		fnl = vec[0];
		
		for(int i=1; i<n; i++){
			
			reverse(fnl.begin(),fnl.end());
			
			string tmp=vec[i];
			
			int j=0,k=0;
			
			while(j!=fnl.size() && k!=tmp.size()){
				if(k>j){
					break;
				}
				if(tmp[k]!=fnl[j]){
					break;
				}
				else{
					j++;
					k++;
				}
			}
			reverse(fnl.begin(),fnl.end());
//			cout <<"tmp = "<< tmp << endl;
			for(int m=k; m<tmp.size(); m++){
//				cout << fnl << endl;
				fnl += tmp[m];
			}
		}
//		cout << fnl << endl;
		int sz=fnl.size();
		ans=min(ans,sz);
		
	}
    while(next_permutation(vec.begin(),vec.end()));
    
    cout << ans << endl;
}

