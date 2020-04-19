#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	 
	while(t--)
	{
	    long int n, r;
	    cin >> n >> r;
	    long long int num=1;
	    for(long int i=n; i>n-r; i--)
	    {
	        num *= i;
	    }
	    cout << num << endl;
	}
	return 0;
}