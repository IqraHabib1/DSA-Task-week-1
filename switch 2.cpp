#include<iostream>
using namespace std;
int main()
{
	 
	cout<<"Press 1 for separating odd and even numbers "<<"\n";
	cout<<"Press 2 for counting oddandeven numbers"<<"\n";
	cout<<"Press 3 for sorting an array in accending order"<<"\n";
	cout<<"Press 4 for sorting an array in deccending order"<<"\n";
	cout<<"Press 5 for finding second smallest element in array"<<" \n";
	cout<<"Press 6 for finding second largest element in array"<<"\n ";
    cout<<"Press 7 for to check two arrays are same or not"<<"\n ";
	cout<<"Press 8 for merging two unsorted arrays"<<" \n";
	cout<<"Press 9 for  finding mamimum difference between two elements"<<" \n";
	cout<<"Press 10 for Exit "<<"\n";
	
	int num1;
	cout<<"Press any key to run the program"<<"\n";
	cin>>num1;


switch (num1)
{
case 1:
	{

	int arr[5];
	cout<<"Please Enter Five Numbers in an Array : "<<endl;
	for(int i=0; i<5; i++){
	cin>>arr[i];
	}
	
	
	cout<<"The Array You Entered is : "<<endl;
	for(int i=0; i<5; i++){
	cout<<arr[i]<<" ";
	}
	
	
	cout<<"\nOdd Numbers From The Above Array :"<<endl;;
	for(int i=0; i<5; i++)
	if(arr[i]%2!=0)
	cout<<arr[i]<<" ";
	
	
	cout<<"\nEven Numbers From The Above Array :"<<endl;;
	for(int i=0; i<5; i++)
	if(arr[i]%2==0)
	cout<<arr[i]<<" ";
	

	break;
}
case 2:
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
			
	break;
	
}
case 3:
{
		int i,t,j;
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
cout<<"Sorted array in accending order is";	
for(i=0;i<5;i++)
{
	cout<<arr[i]<<" ";
}

break;
}
case 4:
	{
			int i,t,j;
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
		if(arr[i]<arr[j])
		{
			t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;
		}
	     }
	}
cout<<"Sorted array in descending order is"<<" ";	
for(i=0;i<5;i++)
{
	cout<<arr[i]<<" ";
}
		
break;
}
case 5:
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
		   	if(arr[i]<a)
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
break;
}
case 6:
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
break;
}
case 7:
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
		break;
}
case 8:
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
 
break;
}



case 9:
	{
int i,t,j;
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
cout<<"Sorted array in accending order is";	
for(i=0;i<5;i++)
	cout<<arr[i]<<" ";
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

return 0;
}





