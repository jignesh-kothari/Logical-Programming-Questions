#include <iostream>
using namespace std;

int main() {
	
	int i, n1=0,n2=1,n3;
	for(i=1;i<=20;i++)
	{
	    n3=n1+n2;
	    n1=n2;
	    n2=n3;
	    cout << n3 << endl;    
	}
	
	return 0;
}

