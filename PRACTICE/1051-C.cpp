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
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
    	cin >> ar[i];
    	mp[ar[i]]++;
	}
	
	int singles=0;
	int doubles=0;
	
	for(auto i : mp){
		if(i.second==1){
			singles++;
		}
		else if(i.second==2){
			doubles++;
		}
	}
	
	if(singles%2){
		cout <<"NO";
	}
	
	else{
		cout <<"YES"<<endl;
		vector<char> ans(n,'.');
		
		int a=0;
		
		for(int i=0; i<n; i++){
			
			if(mp[ar[i]]>2){
				cout << 'A';
			}
			else if(mp[ar[i]]==1){
				if(a){
					cout << 'A';
				}
				else{
					cout << 'B';
				}
				a^=1;
				mp[ar[i]]--;
			}
			else{
				if(a){
					cout << 'A';
				}
				else{
					cout << 'B';
				}
				a^=1;
				mp[ar[i]]--;
			}
			
		}
		
		
	}
	
}

