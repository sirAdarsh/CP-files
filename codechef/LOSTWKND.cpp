/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	int sum= 0;
    	for(int i=0; i<5; i++){
    		int n;
    		cin >> n;
    		sum += n;
		}
		int p;
		cin >> p;
		sum *=p;
		cout<<sum;
		int max = 24*5;
		
		if(sum<=max){
			cout<<"No"<<endl;
		}
		else{
			cout<<"Yes"<<endl;
		}
		
	}
    
}

