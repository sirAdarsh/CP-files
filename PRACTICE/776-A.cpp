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
    
    string pv1,pv2;
    cin >> pv1 >> pv2;
    
    set<string> st;
    
    st.insert(pv1);
    st.insert(pv2);
    int n;
    
    for(auto i : st){
    	cout << i <<" ";
	}
    cout << endl;
    cin >> n;
    while(n--){
    	
    	string murdered,replaced;
    	cin >> murdered >> replaced;
    	
    	st.erase(murdered);
    	st.insert(replaced);
    	for(auto i : st){
    		cout << i <<" ";
		}cout << endl;
	}
    
}

