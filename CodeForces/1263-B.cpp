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
    	unordered_map<string,int> mp;
    	vector<string> vecs(n);
    	for(int i=0; i<n; i++){
    		cin >> s;
    		vecs[i]=s;
    		mp[s]++;
		}
		
		int changes=0;
		for(auto i : mp){
			if(i.second!=1){
				changes += (i.second-1);
			}
		}
		cout << changes << endl;
		for(int i=0; i<n; i++){
			if(mp[vecs[i]]!=1){
				
				for(int j=0; j<4; j++){
					bool mark=false;
					for(int k=0; k<=9; k++){
						string tmp = vecs[i];
						tmp[j]=k+'0';
//						cout << "    "<<tmp << endl;
						if(mp.count(tmp)==0){
							mark=true;
							mp[tmp]=1;
							mp[vecs[i]]--;
							vecs[i]=tmp;
							
							break;
						}
					}
					if(mark){
						break;
					}
				}
				
			}
//			cout << "  " << mp[vecs[i]]
			cout << vecs[i] << endl;
		}
		
	}
    
}

