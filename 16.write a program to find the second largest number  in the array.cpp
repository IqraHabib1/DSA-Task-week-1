#include<iostream>
using namespace std;
int main()
{
	
	int i,a,b;
    int arr[5];
   
    for(i=0;i<5;i++)
	{
		cout<<"Enter number "<<i+1<<" : ";
		cin>>arr[i];
    }	 
	cout<<"values are "<<" :";
	for(i=0;i<5;i++)
	{
	cout<<arr[i]<<"\t";
    }
		   a=arr[0];
		   
	   for(i=0;i<5;i++)
	   {
		   	if(arr[i]>a)
		   	{
			
		   	a=arr[i];
		    }
      	}
		 cout<<"first smallest element in the array is :"<<a<<"\n";
		 
		
		 for(i=1;i<5;i++)
	   {
		   	if(arr[i]<a)
		   	{
			
		   	b=arr[i];
		    }
      	}
		   cout<<"second smallest element in the array is :"<<b<<"\n"; 
}
