#include <iostream>

using namespace std;

struct node{
	int data;
	node* next;
};

void push (int num);
void pop();
void print();

node* head;

int main()
{
	head=NULL;
	int i,num,x,action;
	char c;
	
	while (c!='n')
	{
			cout<<"Enter the action to perform. 1)Push 2)Pop & 3)Print\n";
			cin>>action;		
			
			if (action==1)
			{
				cout<<"How many entries?\n";
				cin>>x;
				
				for (i=0;i<x;i++)
				{
					cout<<"Enter the number\n\n";
					cin>>num;
					push(num);
				}
			}else if (action==2){
				pop();
			}else if (action==3){
				print();
			}else{
				cout<<"Invalid check the action to perform\n";
			}
			cout<<"Do you wanna continue?\n";
			cin>>c;
		}
			
	return 0;
}

void push(int num)
{
	node* temp=new node;
	temp->data=num;
	temp->next=head;
	head=temp;
}

void pop()
{
	if (head==NULL)
	{
		cout<<"The list is empty\n";
	}else{
		node* temp=head;
        cout<<"The poped item is "<<temp->data<<endl;
        head=temp->next;
		
	}
}

void print()
{
	if (head==NULL)
	{
		cout<<"The list is empty\n";
	}else{
		node* temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
    }
}
