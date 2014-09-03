#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 1000000000;

int main() {
	  int n, k, a, ans = 0;
	    vector<bool> b(MAXN, false);
	      
	      cin >> n >> k;
	        
	        while (n--) {
			    cin >> a;

			        b[a] = true;

				    if (a - k >= 0 && b[a - k])    // if (a-k) exists
					          ans++;

				        if (a + k < MAXN && b[a + k])    // if (a+k) exists
						      ans++;
					  }
		  
		  cout << ans << endl;
}
