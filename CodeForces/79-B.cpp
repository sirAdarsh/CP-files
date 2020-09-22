#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,k,t;
    cin >> n >> m >> k >> t;
    
//    pair<int,int> kays[40002];
	vector<pair<int,int>> kays;
    int r, c;
    while(k--){
    	cin >> r >> c;
    	kays.push_back(make_pair(r,c));
	}
	
	int R,C;
	int size = kays.size();
	while(t--){
		
		cin >> R >> C;
		
		int blacks=0;
		bool e=false;
		
		for(int i=0; i<size; i++){
			
			if( kays[i].first < R ){
				blacks++;
			}
			else if(kays[i].first ==R && kays[i].second < C ){
				blacks++;
			}
			else if(kays[i].first == R && kays[i].second==C){
				cout<<"Waste"<<endl;
				e=true;
				break;
			}
		}
//		cout<<count<<endl;		
		if(!e){
			
			int num = ( R - 1)*m + C;
//			cout<<num<<endl;
			
			num -= blacks;
			
			int p;
			p = num%3;
			cout<<p<<endl;
			
			switch(p){
				case 1 : {cout<<"Carrots"<<endl;
					break;
				}
				case 2 : {cout<<"Kiwis"<<endl;
					break;
				}
				case 0 : cout<<"Grapes"<<endl;
			}
			
			
		}
		
	}
    
}

