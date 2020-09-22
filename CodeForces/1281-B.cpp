/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;
string s1,s2;

string solve(){
	
	int n1=s1.size();
	int n2=s2.size();
	
	char jg;
	bool fault=false;
	int i;
	int idx;
	
	for(i=0; i<n1; i++){
		if(i>=n2){
			break;
		}
		else{
			if(s2[i]>s1[i]){
				return s1;
			}
			if(s2[i]<s1[i]){
				fault=true;
				jg=s2[i];
				idx=i;
				break;
			}
		}
	}
	if(!fault){
		if(s1.size()>s2.size()){
			return "---";
		}
		else{
			return s1;
		}
	}
//	cout << "d";
	cout << jg <<" " << i <<" " << idx << endl;
	for(;i<n1;i++){
		if(s1[i]<jg){
			swap(s1[i],s1[idx]);
			return s1;
		}
	}
	
	return "---";
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	cin >> s1 >> s2;
    	cout << solve() << endl;
    	
	}
    
}

