/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

unordered_map<string,int> mp2;

bool checkIfGood(string str){
	if(str.size()<2){
		return false;
	}
	
	char first = str[0];
	char sec = str[1];
	int i;
	for(i=0; i<str.size(); i+=2){
		if(str[i]!=first){
			return false;
		}
	}
	i = (i+2)%str.size();
	if(str[i]!=first){
		return false;
	}
	for(i=1; i<str.size(); i+=2){
		if(str[i]!=sec){
			return false;
		}
	}
	i = (i+2)%str.size();
	if(str[i]!=first){
		return false;
	}
	return true;
}

ll minDels(string str, ll pos){
	
	if(checkIfGood(str)){
//		cout << str << "\tHERE"<<endl;
		return 0;
	}
	if(pos==str.size() || str.size()==0){
		return MOD;
	}
	
	string checker;
	
	string posn = to_string(pos);
	
	checker = str + "|" + posn;
	
	if(mp2[checker]){
		return mp2[checker];
	}
	
	ll dels=0;
	
	string tmp=str;
	tmp.erase(pos,1);

	ll op1 = MOD;
	ll op2 = MOD;
	
	op1 = 1+minDels(tmp,pos);
	op2 = minDels(str,pos+1);
	
	dels = min(op1,op2);
	
	return mp2[checker] = dels;
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	cin >> s;
		mp2.clear();
		cout << minDels(s, 0) << endl;
//		cout << checkIfGood("0000");
	}
    
}

