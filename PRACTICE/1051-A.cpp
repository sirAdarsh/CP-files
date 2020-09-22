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
    	cin >> s;
    	
    	bool sm,cap,dig;
    	sm=cap=dig=false;
    	
    	stack<int> small,capital,digit;
    	
    	int cntS,cntC,cntD;
    	cntS=cntC=cntD=0;
    	
    	for(int i=0; i<s.size(); i++){
    		if(s[i]>='0' && s[i]<='9'){
    			dig=true;
    			digit.push(i);
			}
			elif(s[i]>='a' && s[i]<='z'){
				sm=true;
				small.push(i);
			}
			else{
				cap=true;
				capital.push(i);
			}
		}
//    	cout << small << ' ' << capital << ' ' << digit<< endl;
    	int typ=sm+cap+dig;
    	
    	if(sm && cap && dig){
//    		cout << sm << ' ' << cap << " " << dig << endl;
    		cout << s << endl;
		}
		else{
//			cout << "ewe";
			if(digit.size()==0){
				if(small.size()>1){
					s[small.top()]='9';
					small.pop();
				}
				else if(capital.size()>1){
					s[capital.top()]='9';
					capital.pop();
				}
			}
			if(small.size()==0){
				if(digit.size()>1){
					s[digit.top()]='a';
					digit.pop();
				}
				else if(capital.size()>1){
					s[capital.top()]='a';
					capital.pop();
				}
			}
			if(capital.size()==0){
				if(small.size()>1){
					s[small.top()]='A';
					small.pop();
				}
				else if(digit.size()>1){
					s[digit.top()]='A';
					digit.pop();
				}
			}
			cout << s << endl;
		}
    	
	}
}

