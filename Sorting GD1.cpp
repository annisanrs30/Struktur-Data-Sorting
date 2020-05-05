#include <iostream>
using namespace std;
int main() 
{
	int x, a[100], i, t, j, k;
	
	cout<<"Insertion Sort\n";
	cout<<"Masukkan banyak bilangan = ";
	cin>>x;
	for(i=1; i<=x; i++)
	{
		cout<<"\n Bilangan ke-"<<i<<" : ";
		cin>>a[i];
	}
	cout<<"\n\n data sebelum diurutkan :";
	for(i=1; i<=x; i++)
	{
		cout<<"  "<<a[i];
	}
	cout<<endl;
	for(i=1; i<=x; i++)
	{
		for(j=1; j<=x; j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		cout<<"\n # "<<i<<" : ";
		for(k=1; k<=x; k++)
		{
			cout<<"  "<<a[k];
		}
	}
	cout<<"\n\n data setelah diurutkan secara descending : ";
	for(i=1; i<=x; i++)
	{
		cout<<"  "<<a[i];
	}
return 0;
} 


