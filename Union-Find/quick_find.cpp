#include<iostream>

using namespace std;

class Connectivity{
	int i,a[10];
	
	public:
	Connectivity()
	{
		for (i=0;i<10;i++)
		{
			a[i]=i;
		}
    }
	
	void uni(int x,int y)
	{
		if (a[x]<a[y])
		{
			for (i=0;i<10;i++)
			{
				if (a[i]==y)
				a[i]=a[x];
			}
		}else {
			for (i=0;i<10;i++)
			{
				if (a[i]==x)
				a[i]=a[y];
			}
		}
	}
	
	void connected (int x,int y)
	{
		if (a[x]==a[y])
		{
			cout<<x<<" is connected to "<<y<<endl;
		}else {
			cout<<x<<" is not connected to "<<y<<endl;
		}
	}
	
};

int main()
{
	Connectivity c;
	c.uni(4,3);
	c.uni(3,8);
	c.uni(6,5);
	c.uni(9,4);
	c.uni(2,1);
	c.connected(0,7);
	c.connected(8,9);
	c.uni(5,0);
	c.uni(7,2);
	c.uni(6,1);
	c.uni(3,0);
	c.connected (0,7);
}
