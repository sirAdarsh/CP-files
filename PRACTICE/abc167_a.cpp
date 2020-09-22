#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int size = s1.size();
    s2.resize(size);
    if(s1==s2){
    	cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}

