#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i,j;
	
	for(i=0; i<5; i++)
	{
		cout<<"enter number  "<<i+1<<" : ";
		cin>>arr[i];		
	}

	for(i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t";
		
	}
	cout<<"even numbers are "<<" ";
	for(i=0; i<5; i++)
	
		if(arr[i]%2==0)
		{
			cout<<arr[i]<<"\t";
		
		}
         
}
