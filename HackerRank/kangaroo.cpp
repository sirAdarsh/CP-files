#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    float x1,v1,x2,v2;
    cin >> x1 >> v1 >> x2 >> v2;
    
    if( x1-x2 > 0 && v1-v2 >0 ){
    	cout<<"NO"<<endl;
	}
	else if( x1-x2<0 && v1-v2<0){
		cout<<"NO"<<endl;
	}
	else{
		
	float t;
    
    t = (x1 - x2) / (v2 - v1);
    
    if(ceil(t)==floor(t)){
        cout<<"YES"<<endl;
    }
		
	}
    
}

