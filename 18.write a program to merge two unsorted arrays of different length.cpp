#include<iostream>
using namespace std;
int main()
{
	int i,k;
	int arr1[5];
	int arr2[7];
	int arr3[5];
	for(i=0;i<5;i++)
	{
		cout<<"Enter values for first array : "<<"  ";
		cin>>arr1[i];
		arr3[i]=arr1[i];
		
	}
	k=i;
	for(i=0;i<5;i++)
	{
		cout<<" \n ";
		cout<<"Enter values for second array : "<<"  ";
		for(i=0;i<5;i++)
		{
			cin>>arr2[i];
			arr3[k]=arr2[i];
			k++;
		}
		cout<<"\n Merge array is :"<<" ";
			for(i=0;i<k;i++)
			{
				cout<<arr3[i]<<" ";
			
			}
		}
	}
