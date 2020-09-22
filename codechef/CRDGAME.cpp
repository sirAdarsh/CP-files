/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int sumOfDigits(int n){
	string s=to_string(n);
	int ans=0;
	for(auto i : s){
		ans += (i-'0');
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin>>n;
    	
    	int chef=0,morty=0;
    	int chefFin=0,mortyFin=0;
    	
    	while(n--){
    		int a,b;
    		cin >> a >> b;
    		chef = (sumOfDigits(a));
    		morty = (sumOfDigits(b));
			if(chef>morty) chefFin++;
			else if(morty>chef) mortyFin++;
			else {
				chefFin++; mortyFin++;
			}
		}
    	
    	if(chefFin>mortyFin){
    		cout << 0 << " " << chefFin<<endl;
		}
		else if(mortyFin>chefFin){
			cout << 1 << " " << mortyFin << endl;
		}
		else{
			cout << 2 << " " << mortyFin << endl;
		}
    	
	}
    
}

