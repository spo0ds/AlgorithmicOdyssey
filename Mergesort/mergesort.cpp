#include<iostream>
#include<assert.h>

using namespace std;

int aux[10];

void merge(int* num,int* aux,int low,int middle,int high)
{
	int i,j,k;
	
	for (i=0;i<10;i++)
	{
		aux[i]=num[i];
	}
	
	j=low;
	k=middle+1;
	
	for(i=low;i<=high;i++)
	{
		if (j>middle)
		{
			num[i]=aux[k];
			k++;
		}
		else if (k>high)
		{
			num[i]=aux[j];
			j++;
		}
		else if (aux[j]>aux[k])
		{
			num[i]=aux[k];
			k++;
		}else{
			num[i]=aux[j];
			j++;
		}
	}
}

void sort(int* num,int low,int high)
{
	if (high<=low)
		return;
		
	int middle = low + (high - low) / 2;
	
	sort(num,low,middle);
	sort(num,middle+1,high);
	
	merge(num,aux,low,middle,high);
}

int main()
{
	int num[10],i;
	
	cout<<"Enter the elements in the array\n";
	
	for (i=0;i<10;i++)
	{
		cin>>num[i];
	}
	
	sort(num,0,9);
	
	assert(sort);
	
	cout<<"\nSorting the elements\n";
	
	for(i=0;i<10;i++)
	{
		cout<<num[i]<<endl;
	}
	
	return 0;
}
