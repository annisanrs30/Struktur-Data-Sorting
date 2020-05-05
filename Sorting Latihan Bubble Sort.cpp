#include <iostream>
using namespace std;
int angka[]={7, 19, 4, 8, 20, 1};
int i,j;

void bubbleSortAsc()
{
	for(i=0; i<6-1; i++)
	{
		for( j=0; j<6-1; j++)
		{
			if(angka[j+1]<angka[j])
			{
				int temp=angka[j];
				angka[j]=angka[j+1];
				angka[j+1]=temp;
			}
		}
	}
}

int main()
{
	cout<<"\n ========================="; 
	cout<<"\n\tBubble sort "; 
    cout<<"\n =========================";
    cout<<endl;
	cout<<("\n Sebelum Sorting : ");
	for(i=0; i<6; i++)
		{
			cout<<angka[i]<<" ";
		}
	bubbleSortAsc();
    cout<<endl;
	cout<<("\n Setelah Sorting Ascending : \n ");
	for(i=0; i<6; i++)
	{
		cout<<angka[i]<<" ";
	}
	return 0;
}

