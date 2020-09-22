/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define DEB(a) printf("mid = %d ",a);
using namespace std;


void solve(int n){
	
	int testIp = 1;
	
	bool evens = false;
	bool odds = false;
	printf("%d\n",testIp);
	fflush(stdout);
//	fflush(stdin);
	char op[3];
	scanf("%s", op);
	if(strcmp(op,"E")==0){
		return;
	}
	else if( strcmp(op,"G")==0){
		odds = true;
	}
	else if( strcmp(op,"L")==0){
		evens = true;
	}
	int p = 1;
	
	int l = 1, r = n;
		
		while( l <= r ){
			
			p++;
			if(p%2 && evens){
				
				printf("1\n");
				fflush(stdout);
//				fflush(stdin);
				scanf("%s",op);
				if(strcmp(op,"E")==0){
					return;
				}
				continue;
			}
			if((p%2)==0 && odds){
				printf("1\n");
				fflush(stdout);
//				fflush(stdin);
				scanf("%s",op);
				if(strcmp(op,"E")==0){
					return;
				}
				continue;
			}
			
			int mid = l + (r-l)/2;

			printf("%d\n",mid);
			fflush(stdout);
//			fflush(stdin);
			
			scanf("%s",op);

			if(strcmp(op,"E")==0){
				return;
			}
			else if(strcmp(op,"G")==0){
				l=mid+1;
			}
			else if(strcmp(op,"L")==0){
				r = mid-1;
			}
		
		}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    solve(n);
    
}

