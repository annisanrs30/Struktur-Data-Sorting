#include<iostream>
#define n 11
using namespace std;
int main()
{
char a[n] = {'f','z','h','t','u','q'};
char x,y,z;
cout<<"\n\t Program Sorting Karakter"<<endl;
cout<<"  ======================================"<<endl;
cout<<"\n\n Abjad Sebelum diurutkan : ";
for (y=0; y<=n-1; y++)
cout<<a[y];
cout<<endl;

z=0;
while(z<=n-2)
{
y=0;
while(y<=n-2-z)
{
if(a[y]>a[y+1])
{
x=a[y];
a[y]=a[y+1];
a[y+1]=x;
}
y++;
}
z++;
}
cout<<"\n Abjad Setelah diurutkan : ";
for(y=0; y<=n-1; y++)
cout<<a<<a[y];

return 0;
}


