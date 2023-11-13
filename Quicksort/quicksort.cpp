#include <iostream>

using namespace std;

int partition(int* a, int start, int end)
{
	int p = start + 1;
	int pivot = a[start];
	int i,temp;
	
	for (i = start+1; i <= end; i++)
	{
		if (a[i] <= pivot)
		{
			if(i != p)
			{
				temp = a[i];
				a[i] = a[p];
				a[p] = temp;
			}
			p++; //It's outside 2nd if cause we need to increase the p when the item in array is less than pivot.
		         //If declare inside 2nd if, it cannot partioned the item based on the pivot.	
		}
	}
	
	a[start] = a[p-1];  //"Why p-1? cause while doing partioning the p variable points to the next item which will be bigger then the pivot.
	a[p-1] = pivot;    //"Why temp is not used? cause the value of a[start] is stored in pivot 
	
	return p-1; //"why not p?" cause the p is pointing to the index that is greater than the pivot
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
	int num[10] = {7,5,3,9,1,8,2,6,4,0};
	
	quickSort(num,0,9);
	
	cout<<"After sorting \n";
	
	print(num,9);
	return 0;
}
