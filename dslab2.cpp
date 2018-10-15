#include<iostream>
# define size 30
using namespace std;
class array
{
	int ary[size],n;
	public:
		void create();
		int location(int);
		void display();
};
void array::create()
{
	cout<<"Enter size of array : ";
	cin>>n;
	cout<<"start entering array "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>ary[i];
	}
}
int array::location(int num)
{
	int x=0;
for(int i=0;i<n;i++)
{
	if(num==ary[i])
	{
		x=i;
	}
}	
if(x!=0)
{
	cout<<ary[x]<<" is at index "<<x;
	
}
else
{
	cout<"No data found ";
}
return x;
}
	
void array::display()
{
	for(int i=0;i<n;i++)
	{
		cout<<ary[i]<<"\n";
	}
}
int main()
{
	array obj;
	int n,num,x;
	obj.create();
	cout<<"1 to find location "<<endl<<"2 to display"<<endl<<"0 to exit"<<endl;
	cin>>n;
	while(n!=0)
	{
		switch(n)
		{
		case 1:
			cout<<"enter element : ";
			cin>>x;
			obj.location(x);
			cin>>n;
			break;
		case 2:
			obj.display();
			cin>>n;
			break;
		default:
			break;
		}
	}
}
