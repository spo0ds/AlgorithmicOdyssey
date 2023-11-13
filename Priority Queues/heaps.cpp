#include<iostream>
using namespace std;

char a[20];

int index = 0;

char max(char x, char y)
{
	if (x > y)
		return x;
	else 
		return y;
}
	

void swim(int count)
{
	char temp;
	
	for (int i=count;i>1;i--)
	{
		if (a[i]>a[i/2])
		{
			temp = a[i];
			a[i] = a[i/2];
			a[i/2]= temp;
		}
	}
}

void sink()
{
	char temp;
	for (int i=1;i<20;i++)
	{
		if (a[i] < a[i*2] || a[i] < a[i*2+1])
		{
			if (a[i*2] > a[i*2+1])
			{
				temp = a[i*2];
				a[i*2] = a[i];
				a[i] = temp;
			}else{
				temp = a[i*2+1];
				a[i*2+1] = a[i];
				a[i] = temp;
			}
		}
	}
}

void insert(char x)
{
	int count=0;
	++index;
	if (a[1]== '0')
	{
		a[1] = x;
	}else{
		for(int i=2;i<20;i++)
		{
			if (a[i]=='0')
			{
				a[i] = x;
				count = i;
				swim(count);
				break;

			}
		}
	}
}


void deletion()
{
  int i=1;
  if (index == 0)
  {
	  cout<<"Heap empty\n";
  }else{
  index--;
  while(a[i]!='0')
      i++;
  
  a[1] = a[i-1];
  a[i-1]='0';
  sink();
 }	
}

void printArray()
{
	for (int i=1;i<=index;i++)
	{
		cout<<a[i]<<endl;
	}
}

int main()
{
	for (int i=0;i<20;i++)
	{
		a[i] = '0';
	}	
	
	deletion();
	insert('T');
	insert('P');
	insert('R');
	insert('N');
	insert('H');
	insert('O');
	insert('A');
	insert('E');
	insert('I');
	insert('G');
	insert('S');
	deletion();
	deletion();
	insert('S');
	printArray();
	return 0;
}


