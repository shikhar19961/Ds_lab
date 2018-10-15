#include<iostream>
#define size 30
using namespace std;
class array
{
	int ary[size],n;
	public:
		void create();
		void insert();
		void Delete();
		int location(int);
		void display();
};
void array::create()
{
	cout<<"Size of array : ";
	cin>>n;
	cout<<"Enter array "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>ary[i];
	}
}
void array::insert()
{
	int num,x,a,b;
	cout<<"enter location at which you want to insert : ";
	cin>>num;
	num=location(num);
	for(int i=n;i>=num;i--)
	{
		ary[i+1]=ary[i];
	}
	n++;
	cout<<"enter value that you want to enter : ";
	cin>>x;
	ary[num]=x;
}
void array::Delete()
{
	int num;
	cout<<"Value that you want to delete : ";
	cin>>num;
	num=location(num);
	for(int i=num;i<n;i++)
	{
		ary[i]=ary[i+1];
	}
	n--;
}
int array::location(int num)
{
	int x;
for(int i=0;i<n;i++)
{
	if(num==ary[i])
	{
		x=i;
	}
}	
return x;
}
	
void array::display()
{
	for(int i=0;i<n;i++)
	{
		cout<<ary[i]<<endl;
	}
}
int main()
{
	array ob;
	int n,num;
	ob.create();
	cout<<"1 to insert element at specific location"<<endl<<"2 to delete "<<endl<<"3 to find location of element in array"<<endl<<"4 to display"<<endl<<"0 to exit";
	cin>>n;
	while(n!=0)
	{
		switch(n)
		{
		case 1:
			ob.insert();
			cin>>n;
			break;
		case 2:
			ob.Delete();
			cin>>n;
			break;
		case 3:
			ob.location(n);
			cin>>n;
			break;
		case 4:
			ob.display();
			cin>>n;
			break;
		default:
			break;
		}
	}
}
