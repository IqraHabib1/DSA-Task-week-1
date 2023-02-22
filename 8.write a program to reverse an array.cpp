#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i;
	
	for(i=0; i<5; i++)
	{
		cout<<"enter number  "<<i+1<<" : ";
		cin>>arr[i];		
	}

	for(i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t";
		
	}
	int rev=0;
	for(i=4;i>=0;i--)
	{
     cout<< arr[i];
                                         
	}
	
	    // cout<<"reverse array are"<< "  "  <<rev;

}
