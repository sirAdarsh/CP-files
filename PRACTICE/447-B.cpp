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
    cin >> s;
    int k;
    cin >> k;
    int alpha[26];
    for(int i=0; i<26; i++){
    	cin >> alpha[i];
	}
    int sum=0;
    
    for(int i=0; i<s.size(); i++){
    	sum += ((i+1)*alpha[s[i]-'a']);
	}
	sort(alpha,alpha+26,greater<int>());
	int max=alpha[0];
	cout << max<<endl;
	int j = s.size()+1;
	for(int i=0; i<k; i++){
		sum += (j*max);
		j++;
	}
    cout << sum << endl;
}

