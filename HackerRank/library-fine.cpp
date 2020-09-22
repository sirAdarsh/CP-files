#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int d1,m1,y1,d2,m2,y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2  >> y2;
    
    if( y1 > y2 ){
    	cout << (y1-y2) * 10000<<endl;
	}
	else if( y1 == y2 ){
		
		if( m1 > m2 ){
			
			cout << (m1-m2)*500<<endl;
			
		}
		else if(m1==m2){
			
			if(d1 > d2){
				cout << (d1-d2) * 15<<endl;;
			}
			
			else{
				cout<<0<<endl;
			}
			
		}
		else if ( m1 < m2 ){
			cout<<0<<endl;
		}
		
	}
	else if(y1 < y2){
		cout<<0<<endl;
	}
    
}

