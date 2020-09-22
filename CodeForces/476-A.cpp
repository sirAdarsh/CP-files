#include<bits/stdc++.h>
using namespace std;
int main(){
	
	float n;
	int m;
	cin>>n>>m;
	
	int min,max;
	
	min = ceil ( n/2 );
	
	max = n;
	
	int t = min / m;
	int ex = m * t;
	int ans=0;
	if( ex == min ){
		ans = min;
	}
	else if( (ex + m) >= min && (ex+m) <= max  ){
		ans = (ex+m);
	}
	
	
	if(ans==0){
		cout<<-1<<endl;
	}else{
		cout<<ans<<endl;
	}
	
}
