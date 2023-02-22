#include<iostream>
using namespace std;
int main()
{
  int i,j;
	int arr[5];
	
	for(i=0;i<5;i++)
	{
		cout<<"enter number for first array "<<" "<<i+1<<" : "<<"  ";
		cin>>arr[i];	
	}

	for(j=0;j<5;j++)
	{
	cout<<"\n enter numbers for second array "<<" "<<j+1<<" : "<<"  ";
		cin>>arr[j];
	}
	bool flag;
	
	
			for(i=0;i<5;i++)
			{
			
			for(j=i+1;j<5;j++)
		{
			
			if(arr[i]!=arr[j])
			
				flag++;
			
			
		}
		}
		if(flag==1)
		{
		cout<<"\n both arrays are equal:"	;

		}
		else
		{
		
		cout<<"Both arrays are not equal";

		}
		
}
		




