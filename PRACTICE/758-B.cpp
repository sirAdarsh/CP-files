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
    
    string s;
    cin>>s;
    
    int posR=-1;
    int posG=-1;
    int posY=-1;
    int posB=-1;
    
    for(int i=0; i<s.size(); i++){
    	if(s[i]=='R'){
    		posR=i;
		}
		if(s[i]=='G'){
			posG=i;
		}
		if(s[i]=='B'){
			posB=i;
		}
		if(s[i]=='Y'){
			posY=i;
		}
	}
    
    posR = posR%4;
    posG = posG%4;
    posB = posB%4;
    posY = posY%4;
    
    int r=0,g=0,b=0,y=0;
    
    for(int i=posR; i<s.size(); i+=4){
    	if(s[i]=='!') r++;
	}
	for(int i=posG; i<s.size(); i+=4){
    	if(s[i]=='!') g++;
	}
    for(int i=posB; i<s.size(); i+=4){
    	if(s[i]=='!') b++;
	}
	for(int i=posY; i<s.size(); i+=4){
    	if(s[i]=='!') y++;
	}
	
	cout << r << ' ' << b << ' '<<y << ' '<< g << endl;
}

