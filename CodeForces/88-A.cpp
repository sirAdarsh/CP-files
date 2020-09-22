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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    unordered_map<string, int> mp;
    
    mp["C"]=0;
    mp["C#"]=1;
    mp["D"]=2;
    mp["D#"]=3;
    mp["E"]=4;
    mp["F"]=5;
    mp["F#"]=6;
    mp["G"]=7;
    mp["G#"]=8;
    mp["A"]=9;
    mp["B"]=10;
    mp["H"]=11;
    
    
    
    string a,b,c;
    cin >> a >> b >> c;
    
    vector<int> vec(3);
    vec[0]=mp[a];
    vec[1]=mp[b];
    vec[2]=mp[c];
    sort(vec.begin(),vec.end());
    do{
    	
    	int dist1=0, dist2=0;
	
		for(int i=vec[0]; i<12; i = (i+1)%12 ){
	    	if(i==vec[1]){
	    		break;
			}
			dist1++;
		}
		
		for(int i=vec[1]; i<12; i = (i+1)%12 ){
	    	if(i==vec[2]){
	    		break;
			}
			dist2++;
		}
		
	    if(dist1==4 && dist2==3){
	    	cout << "major";
	    	return 0;
		}
		else if(dist1==3 && dist2==4){
			cout << "minor";
			return 0;
		}
	}
	while(next_permutation(vec.begin(), vec.end()));
    
	cout << "strange";
    
    
}

