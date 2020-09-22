#include <iostream>
using namespace std;
int main() {
	
	int n;
	cin>>n;
	
   long arr[n] = {};
   for (long i = 2; i < n; i++) {
      for (long j = i * i; j < n; j+=i) {
         arr[j - 1] = 1;
      }
   }
   long ans=0;
   for (long i = 2; i < n; i++) {
      if (arr[i - 1] == 0)
         ans++;
   }
   cout<<ans;
}
