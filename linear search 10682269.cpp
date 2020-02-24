#include<iostream>
 
using namespace std;
 
int main()
{
	int arr[30],n,x,i,t=0;
	cout<<"How many elements?";
	cin>>n;
	cout<<"\nEnter elements of the array\n";
	
	for(i=0;i<n;++i)
		cin>>a[i];
	
	cout<<"\nEnter element to search:";
	cin>>x;
	
	for(i=0;i<n;++i)
	{
		if(a[i]==x)
		{
			t=1;
			break;
		}
	}
	
	if(t)
		cout<<"\nElement is found at position "<<i+1;
	else
		cout<<"\nElement not found";
		
	return 0;
}