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
	int sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"\n sum is "<<sum;
}
