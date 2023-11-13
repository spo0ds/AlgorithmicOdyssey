#include <iostream>

using namespace std;

int partition(int* a, int start, int end)
{
	int pivot = a[start];
	int i,temp,lt=start,gt=end;
	
	for (i=start+1;i<=gt;i++)
	{
		if (a[i] == pivot)
		{
			continue;
		}
		if (a[i]<pivot)
		{
			temp=a[i];
			a[i]=a[lt];
			a[lt]=temp;
			lt++;
		}else if (a[i]>pivot)
		{
			temp=a[i];
			a[i]=a[gt];
			a[gt]=temp;
			gt--;
			--i;
		}else 
		{
			return i-1;
		}
	}
		return i-1;

}

void quickSort(int* a, int start, int end)
{
	if (start < end)
	{
		int pIndex = partition(a,start,end);
		
		quickSort(a,start,pIndex-1); //you can use pIndex insted of pIndex-1 but pIndex-1 is a bit fast
		quickSort(a,pIndex+1,end);
	}
}

void print(int* num, int end)
{
	
	for(int i=0; i <= end; i++)
	{
		cout<<num[i]<<endl;
	}
}

int main()
{
	int num[10] = {7,5,3,3,1,8,3,6,3,0};
	
	quickSort(num,0,9);
	
	cout<<"After sorting \n";
	
	print(num,9);
	return 0;
}
