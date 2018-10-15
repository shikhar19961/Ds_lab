#include<iostream>
#define size 30
using namespace std;
class array
{
	int ary[20],n;
	public:
		void create();
		void location();
		void sort();
		void display();
};
void array::createt()
{
	cout<<"Size of array : ";
	cin>>n;
	cout<<"Enter array "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>ary[i];
	}
}
void array::location()
{
	int num;
	int x=0;
	sort();
	display();
	int mid,low=0,high=n-1;
	mid=(low+high)/2;
	cout<<"enter value you want to search : ";
	cin>>num;
	while(low<=high)
	{
	if(arr[mid]==num)
	{
		x=1;
		break;
	}
	else if(ary[mid]<num)
	{
		low=mid+1;
		mid=(low+high)/2;
	}
	else
	{
		high=mid-1;
		mid=(low+high)/2;	
	}
	}
	if(x!=0)
	{
		x++;
		cout<<ary[x]<<" is at index "<<x;
	}
	else
	{
		cout<"Not found ";
	}
}
void array::sort()
{
	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ary[j]>ary[j+1])
			{
			temp=ary[j+1];
			ary[j+1]=ary[j];
			ary[j]=temp;
			}
		}
	}
}	
void ds_lab_3::display()
{
	for(int i=0;i<n;i++)
	{
		cout<<ary[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	array l1;
	int n,num,x;
	l1.create();
	cout<<"1 to find location "<<endl<<"2 to display"<<endl<<"3 to sort"<<endl<<"0 to end"<<endl;
	cin>>n;
	while(n!=0)
	{
		switch(n)
		{
		case 1:
			l1.location();
			cin>>n;
			break;
		case 2:
			l1.display();
			cin>>n;
			break;
		case 3:
			l1.sort();
			cin>>n;
			break;
		default:
			break;
		}
	}
}
