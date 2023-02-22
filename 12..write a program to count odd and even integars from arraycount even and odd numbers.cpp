#include<iostream>
using namespace std;
int main()
{
	int i;
    int arr[i];
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
		   int odd=0;
		   int even=0;
		   for(i=0;i<5;i++)
		   {
		   	if(arr[i]%2==0)
		    	even++;
			  else
			  odd++; 
			   
		   }
		   	 int count=0;
		   	 if(even==0)
			cout<<"\n There are"<<"  "<<1<<"  "<<"number";
			else
			{
				if(even>1)
					cout<<"\n There are"<<"  "<<even<<"  "<<"Even numbers";
					else
						cout<<"There are no Even numbers"<<"  ";
			}
			 if(odd==0)
			cout<<"\n There are"<<"  "<<1<<"  "<<"Even number";
			else
			{
				if(odd>1)
					cout<<"\n There are"<<"  "<<odd<<"  "<<"odd numbers";
					else
						cout<<"\n There are no odd numbers";
			}
			
	
	
}
