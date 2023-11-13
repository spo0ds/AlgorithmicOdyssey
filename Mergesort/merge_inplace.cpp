#include<iostream>
#include<assert.h>

using namespace std;

void sort(int* num,int low,int high);

void print(int* num)
{
	for(int i=0;i<10;i++)
	{
		cout<<num[i]<<endl;
	}
}

void merge(int* a,int low,int middle,int high)
{
	int i,k,temp;

	k= middle + 1;
	for(i=low;i<=high;i++)
	{
		if (a[middle]<=a[k])
		{
			break;
		}
		else if (a[i]<=a[k])
		{
			continue;
		}else{
			temp=a[k];
			a[k]=a[i];
			a[i]=temp;	
		
			if(a[k]>a[k+1])
			sort(a,k,9);
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
	
	merge(num,low,middle,high);
}

int main()
{
	int num[10]={9,5,1,7,3,8,2,4,6,0};
	
	sort(num,0,9);
	
	assert(sort);
	
	cout<<"\nSorting the elements\n";
	
	print(num);
	return 0;
}
