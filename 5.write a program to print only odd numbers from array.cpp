#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i;	
	for(i=0; i<5; i++)
	{
		cout<<"Enter value" ":"<<"  ";
		cin>>arr[i];
		
	}
	
	for(i=0; i<5; i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<"odd numbers are " ;
	int odd=arr[0];
	for(i=0; i<5; i++)
	
		if(arr[i]%2!=0)
		{
			cout<<arr[i];
			
		}
		//else
		
	
	
	}
	

