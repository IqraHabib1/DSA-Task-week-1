#include<iostream>
using namespace std;
int main()
{
	int i,t,j,max,x;
    int arr[5];
for(i=0;i<5;i++)
   {
	cout<<"Enter number "<<i+1<<" : ";
	cin>>arr[i];
	}	
	
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
		t=0;
		if(arr[i]>arr[j])
		{
			t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;
		}
	}
	}
 cout<<"Sorted array in accending order is : ";	
for(i=0;i<5;i++)
{
	cout<<arr[i]<<"  ";
}
i=0;
j=4;
arr[j]-arr[i];

	cout<<" \n Maximum Differene is "<<arr[j]-arr[i] <<"\n ";

}

