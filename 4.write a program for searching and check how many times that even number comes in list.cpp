#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i;
	int c;
	for(i=0; i<5; i++)
	{
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
		
	}
	cout<<"values are ";
	for(i=0; i<5; i++)
	{
		cout<<arr[i]<<"  ";

		
	}
	cout<<"Enter array you want to check repeate ";
	cin>>c;
	int count=0;

	for(i=0; i<5; i++)
	{	
		if(c==arr[i])
		{
			count++;
			
		}
	}
	
	cout<<"Number "<<c<<" is repeated "<<count;
	
}
