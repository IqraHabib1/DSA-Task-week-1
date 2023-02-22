#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i;
	for(i=0; i<5; i++)
	{
		cout<<"Enter value"<<i+1<<":";
		cin>>arr[i];
		
	}
	cout<<"values are";
	for(i=0; i<5; i++)
	{
		cout<<arr[i]<<"  ";

		
	}
	int min=arr[0];
	for(i=0; i<5; i++)
	
		if(min>arr[i])
		{
			min=arr[i];
			
		}
		cout<<"minimum value is  "<<min;
	}
	

