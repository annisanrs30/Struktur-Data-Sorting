#include<iostream>
using namespace std;

int main()
{
	int i, j, n, temp;
	n = 8;
	int a[]={7, 19, 4, 8, 20, 1};
	cout<<"\n ============================"; 
	cout<<"\n\tInsertion sort"; 
    cout<<"\n ============================";
	cout<<endl; 
	cout<<"\n Angka sebelum diurutkan";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	for(i=1; i<=n-1; i++)
	{
		temp = a[i];
		j=i-1;
		
		while((temp<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	cout<<endl;
	cout<<"\n Setelah diurutkan\n ";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
