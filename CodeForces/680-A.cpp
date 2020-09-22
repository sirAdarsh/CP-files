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
    
    int n,a;
    cin >> n >> a;
    a--;
    
    vector<int> ar(n);
    for(int i=0; i<n; i++){
    	cin >>t;
    	ar[i]=t;
	}
	int cr=0;
	for(int i=0; i<=100; i++){
		if(a+i<n && a-i>=0){
			if(i==0){
				if(ar[a+i])
				cr++;
			}
			else if(ar[a+i] && ar[a-i]){
				cr+=2;
			}
		}
		else if(a+i<n){
			if(ar[a+i]){
				cr++;
			}
		}
		else if(a-i>=0){
			if(ar[a-i]){
				cr++;
			}
		}
		cout << a+i << ' ' << a-i << "   "<<cr <<endl;
	}
    cout << cr;
}

