#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i,j;
	cout<<"Enter Five Numbers  : "<<endl;
	for(int i=0; i<5; i++){
	cin>>arr[i];
	}
	
	
	cout<<"\nThe Array  is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<arr[i]<<" ";
	}
	
	
	cout << "\n Unique Elements = "<<endl;
	int count;
	for (int i = 0; i < 5; i++)
	{
	count = 0;
	for (int j = 0; j < 5; j++)
	{
	if (i != j)
	{
	if (arr[i] == arr[j])
	{
	count++;
	}
	}
	}
	if (count == 0)
	{
	cout <<" "<<arr[i] << " ";
	}
	}
}



