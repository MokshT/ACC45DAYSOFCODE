#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
    {
        int x,y;
        cin >>x>>y;
	if ( y<= ((1.07)*x))
	{
	    cout << "yes" <<endl;
	}
	else 
	{
	    cout << "no" << endl;
	}
    }
	return 0;
}
