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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,m;
    cin >> n >> m;
    string s1,s2;
    cin >> s1 >> s2;
    
    bool contains=false;
    int idx=-1;
    
    for(int i=0; i<n; i++){
    	if(s1[i]=='*'){
    		contains=true;
    		idx=i;
    		break;
		}
	}
	
	string a,b;
	if(contains){
		
		a="";
		b="";
		for(int i=0; i<idx; i++){
			a+=s1[i];
		}
		for(int i=idx+1; i<n; i++){
			b+=s1[i];
		}
		reverse(b.begin(),b.end());
		
		string front="";
		bool ok=false;
		int i;
		if(front==a){
			ok=true;
			idx=-1;
		}
		for(i=0; i<m && !ok; i++){
			front+=s2[i];
			if(front==a){
				ok=true;
				idx = i;
				break;
			}
		}
		if(!ok){
			cout << "NO";
			return 0;
		}
		cout <<'@'<<"  idx = " << idx << endl;
		ok=false;
		string back="";
		if(back==b)ok=true;
		for( i=m-1; i>idx; i--){
			back+=s2[i];
			cout << "back = " << back << endl;
			if(back==b){
				ok=true;
				break;
			}
		}
		if(ok){
			cout <<"YES";
			return 0;
		}
		cout << "NO";
		
	}
	else{
		
		if(s1==s2){
			cout <<"YES";
		}
		else{
			cout << "NO";
		}
		
	}
	
}

