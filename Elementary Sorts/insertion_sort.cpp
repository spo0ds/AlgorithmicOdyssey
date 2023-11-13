#include <iostream>
using namespace std;

int main()
{
	int a[9],temp;
	
	cout<<"Enter the elements\n";
	
	int i,j;
	
	for(i=0;i<9;i++)
	{
		cin>>a[i];
	}
	
	cout<<"\n Insertion sort\n";
	
	for (i=1;i<9;i++)
	{
		for (j=i;j>-1;j--)
		{
			if (a[j]<=a[j-1] && j!=0)
			{
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}
	
	cout<<"\n Printing the elemets\n";
	
	for (i=0;i<9;i++)
	{
		cout<<a[i]<<endl;
	}
	
	return 0;
}
