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
    
    int n,m,g;
    cin >> n >> m >> g;
    unordered_map<char,string> mp;
    
    char board[n][m];
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		cin >> board[i][j];
    		s = to_string(i);
    		s = s+'|';
    		s = s+to_string(j);
    		mp[board[i][j]]=s;
		}
	}
    
    int q;
    cin >> q;
    int ans=0;
    string str;
    cin >> str;
    for(int i=0; i<q; i++){
    	
//		cout << "HRE"<<endl;
    	if(str[i]>='A' && str[i]<='Z'){
    		
    		char small = str[i]+32;
    		if(mp.count(small)==0){
    			cout<<-1<<endl;
    			return 0;
			}
			else{
				string x="",y="";
				cout << str[i] <<"  -> ";
				string dcd = mp[small];
				int idx=-1;
				cout <<"dcd = "<<dcd<<" "<< endl;
				for(int j=0; j<dcd.size(); j++){
					if(dcd[j]=='|'){
						idx=j;
						break;
					}
				}
				for(int k=0; k<idx; k++){
					x+=dcd[k];
				}
				for(int k=idx+1; k<dcd.size(); k++){
					y+=dcd[k];
				}
				int coX,coY;
				coX = stoi(x);
				coY = stoi(y);
				
				if(coX-g>=0){
					if(board[coX-g][coY]=='S'){
						continue;
					}
				}
				if(coX+g<n){
					if(board[coX+g][coY]=='S'){
						continue;
					}
				}
				if(coY-g>=0){
					if(board[coX][coY-g]=='S'){
						continue;
					}
				}
				if(coY+g<m){
					if(board[coX][coY+g]=='S'){
						continue;
					}
				}
				
				ans++;
				cout <<"  <- this"<<endl;
				
			}
		}
		else{
			if(mp.count(str[i])==0){
    			cout<<-1<<endl;
    			return 0;
			}
		}
	}
	cout << ans << endl;
    
}

