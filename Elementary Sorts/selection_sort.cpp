#include <iostream>

using namespace std;

int main()
{
	int i,j,a[9],min;
	
	cout<<"Enter the elements in the array\n";
	for (i=0;i<9;i++)
	{
		cin>>a[i];
	}
	
	cout<<endl<<"Selection sort\n";
	
	for (i=0;i<9;i++)
	{
		min=i;
		
		for (j=i+1;j<9;j++)
		{
			if (a[min]>=a[j])
			{
				min=j;
			}
		}
		
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	
	cout<<"\nPrinting the elements\n";
	
	for (i=0;i<9;i++)
	{
		cout<<a[i]<<endl;
	}
	
	return 0;
}
