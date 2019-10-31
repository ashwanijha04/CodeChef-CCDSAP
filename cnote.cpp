// https://www.codechef.com/problems/CNOTE


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	while(T--){
	    int x,y,k,n;
	    cin >> x >> y >> k >> n;
	    int pi, ci;
	    int flag=0;
	    
	    for(int i=0; i<n; i++){
	        //cout << i << endl;
	        cin >> pi >> ci;

	        if((x-y <= pi) && (k >= ci)){
	            flag=1;
	        }
	    }
	    
	    if(flag){
	        cout << "LuckyChef" << endl;
	        flag=0;
	    }
	    else{
	        cout << "UnluckyChef"<< endl;
	    }
	}
	
	
	return 0;
}
