#include<iostream>
using namespace std;
int main()
{
int i,j,num,min,max,c,count;
int arr[5];
     
     {
	 
	cout<<"Press 1 for finding minimum value"<<"\n";
	cout<<"Press 2 for finding maximum value"<<"\n";
	cout<<"Press 3 for finding any value"<<"\n";
	cout<<"Press 4 for check how many times value come"<<"\n";
	cout<<"Press 5 for printing odd value"<<" \n";
	cout<<"Press 6 for printing even value"<<"\n ";
    cout<<"Press 7 for finding sum of values"<<"\n ";
	cout<<"Press 8 for Reverse an array"<<" \n";
	cout<<"Press 9 for printing unique value"<<" \n";
	cout<<"Press 10 for Exit "<<"\n";
	cout<<"Press any key to run the program"<<"\n";
	cin>>num;
}

switch (num)
{
case1:
	{
	int arr[5];
	int i;
	for(i=0; i<5; i++)
	{
		cout<<"Enter value"<<i+1<<":";
		cin>>arr[i];
		
	}
	cout<<"values are";
	for(i=0; i<5; i++)
	{
		cout<<arr[i]<<"  ";

	}
	min=arr[0];
	for(i=0;i<5;i++)
	if(min>arr[i])
	{
		min=arr[i];
	}
	cout<<" minimum value is "<<":"<<min;
	
	break;
}
case2:
	{
	int arr[5];
	int i;
	for(i=0; i<5; i++)
	{
		cout<<"Enter value"<<i+1<<":";
		cin>>arr[i];
		
	}
	cout<<"values are";
	for(i=0; i<5; i++)
	{
		cout<<arr[i]<<"  ";

	}
	 max=arr[0];
	for(i=0; i<5; i++)
	{
	
		if(max<arr[i])
		{
			max=arr[i];
			
		}
		cout<<"maximum value is  "<<max;
	}
break;
}
case3:
	{
		int arr[5];
	int i;
	for(i=0; i<5; i++)
	{
		cout<<"Enter value"<<i+1<<":";
		cin>>arr[i];
		
	}
	cout<<"values are";
	for(i=0; i<5; i++)
	{
		cout<<arr[i]<<"  ";

		
	}

	int min=arr[0];
	bool flag;
	for(i=0; i<5; i++)
	{
	
		if(min>arr[i])
		{
		flag++;
			
		}
		cout<<"minimum value is  "<<min;
		if(flag==1)
		cout<<"value found";
		else
		cout<<"value not found";
	}
break;
}
case4:
	{
		int arr[5];
	int i;
	int c;
	for(i=0; i<5; i++)
	{
		cout<<"Enter value "<<i+1<<":";
		cin>>arr[i];
		
	}
	cout<<"values are ";
	for(i=0; i<5; i++)
	{
		cout<<arr[i]<<"  ";

		
	}
	cout<<"Enter array you want to check repeate ";
	cin>>c;
int count=0;

	for(i=0; i<5; i++)
	{	
		if(c==arr[i])
		{
			count++;
			
		}
	}

	cout<<"Number "<<c<<" is repeated "<<count;
break;
}
case5:
	{
		int arr[5];
	int i;	
	for(i=0; i<5; i++)
	{
		cout<<"Enter value" ":"<<"  ";
		cin>>arr[i];
		
	}
	
	for(i=0; i<5; i++)
	{
		cout<<arr[i]<<"  ";
	}
		cout<<"odd numbers are " ;
	int odd=arr[0];
	for(i=0; i<5; i++)
	{
	
		if(arr[i]%2!=0)
		{
			cout<<arr[i];
	}
		}
break;
}
case6:
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
		cout<<"even numbers are "<<" ";
	for(i=0; i<5; i++)
	{
	
		if(arr[i]%2==0)
		{
			cout<<arr[i]<<"\t";
	}
		}
break;
}
case7:
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
	cout<<"sum is "<<sum;
break;
}
case8:
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
break;
}
case9:
	{
		int i,j,count;
	int arr[i];
	cout<<"enter number "<<i+1<<" ";
	for(i=0;i<5;i++)
	{
	cout<<arr[i];
	
	}
	cout<<"numbers are "<<" ";
	for(i=0;i<5;i++)
	{
	cout<<arr[i];
	
	}

	count=0;
	for(j=0;j<5;j++)
	{
	if(i!=j)
	{
		if(arr[i]==arr[j])
		{
			count++;
			
		}
		
	}
}
     	if(count==0)
    	{
		cout<<arr[i];
	}
break;
}
case 10:
	{
		cout<<"Exit the program "<<"\n";
		break;
	}
Default:
 cout<<"invalid number"<<" ";
}
}





