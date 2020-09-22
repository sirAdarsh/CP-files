/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    
    int count =0;
    
    vector<int> vec;
    string s;
    int sz;
    int num;
    
    while(n!=0){
    	s = to_string(n);
    	
    	sz = s.size();
    	
    	string str(sz,'0');
    	for(int i=0; i<sz; i++){
    		if(s[i]>='1'){
    			str[i]='1';
			}
			else{
				str[i]='0';
			}
		}
    	
    	count++;
    	num = stoi(str);
    	n -= num;
    	
    	vec.push_back(num);
    	
	}
	
	cout << count << endl;
	for(auto i : vec){
		cout << i <<" ";
	}
	cout <<endl;
    
}

