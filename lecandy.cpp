// https://www.codechef.com/problems/LECANDY

#include <iostream>
using namespace std;

int main() {
    int T, n, c;
	cin >> T;

	for(int t=0; t<T; ++t){
	    cin >> n >> c;
	    int sum=0;
	    int ai;
	    for(int i=0; i<n; i++){
	        cin >> ai;
	        c -= ai;
	    }
	   // cout << "Sum=" << sum << " C=" <<  c  << endl;
	    
	    if(c >= 0){
	        cout << "Yes" << endl;
	    }
	    else{
	        cout << "No" << endl;
	    }
	}
	return 0;
}
