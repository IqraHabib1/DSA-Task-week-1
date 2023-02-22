#include<iostream>
using namespace std;
int main()
{

		int arr[5];
	cout<<"Enter Five Numbers  : "<<endl;
	for(int i=0; i<5; i++){
	cin>>arr[i];
	}
	
	
	cout<<"The Array is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<arr[i]<<" ";
	}
	
	
	bool flag;
	int n;
	cout<<"\nEnter The Number To Check"<<endl;
	cin>>n;
	
	for(int i=0; i<5; i++){
	if(n==arr[i])
		flag++;
	}
    if (flag==1)
    	cout<<"Number Is Present"<<endl;

	else 
		cout<<"Not Present"<<endl;
}
	

