#include <iostream>
using namespace std;
 
int rev(int n)
{
	int rem;
	int r=0;
	while(n!=0)
	{
		rem=n%10;
		r=r*10+rem;
		n/=10;
	}
	return r;
}
int main() {
	
	// your code here
	
	int t,x,y;
	cin>>t;
	while(t--)
	{
		cin>>x;
		cin>>y;
		cout<<rev(rev(x)+rev(y))<<endl;
	}
 
	return 0;
} 
