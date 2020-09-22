/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string s1,s2;
    cin >> s1 >> s2;
    
    int wtL=0,wtR=0;
    bool del=false;
    for(int i=0; i<s1.size(); i++){
    	if(s1[i]=='|'){
    		del=true; continue;
		}
    	if(!del){
    		wtL++;
		}
		else{
			wtR++;
		}
	}
	int diff = abs(wtR-wtL);
	
	if(diff==s2.size()){
		if(wtR>wtL){
			s1 = s2+s1;
		}
		else{
			s1 = s1+s2;
		}
		cout<<s1<<endl;
	}
	else{
		cout<<"Impossible"<<endl;
	}
    
}

