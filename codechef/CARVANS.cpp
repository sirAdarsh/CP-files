#include<iostream>
using namespace std;
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;
	while(t--){
		int cars;
		cin>>cars;
		int ans=1;
		int first;
		cin>>first;
		cars-=1;
		int speed;
		while(cars--){
			cin>>speed;
			if(speed<=first){
				ans++;
			}
			else{
				speed=first;
			}
			first=speed;
		}
		cout<<ans<<endl;
	}
}
