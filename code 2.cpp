#include <iostream>
using namespace std;

int main() {
	int n,max=0,min=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    
	}
	for(int i=1;i<n;i++)
	{
	    max=arr[0];
	    if(arr[i]>max)
	    max=arr[i];
	    
	}
	for(int i=1;i<n;i++)
	{
	     min=arr[0];
	    if(arr[i]<min)
	    min=arr[i];
	}
	cout<<"Max element is- "<<max<<endl;
	cout<<"Min element is- "<<min<<endl;
	return 0;
}