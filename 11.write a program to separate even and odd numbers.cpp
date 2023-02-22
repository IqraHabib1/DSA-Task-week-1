#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int arr[5];
	int i;
	int even[a];
	int odd[b];

	for(i=0; i<5; i++)
	{
	cout<<"Enter numbers "<<i+1<<"\t";
	cin>>arr[i];
	}
	for(i=0; i<5; i++)
	{
	if(arr[i]%2==0)
	{
		even[a]=arr[i];
		a++;
	}
    }
    for(i=0;i<5;i++)
    {
    	if(arr[i]%2!=0)
    	{
    		odd[b]=arr[i];
    		b++;
		}
	}
	for(i=0;i<a;i++)
	{
		cout<<even[i];
	}
	for(i=0;i<b;i++)
	{
		cout<<odd[b];
	}
	

	
    }
    	


