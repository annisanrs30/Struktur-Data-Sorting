#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int data[10], data2[10];
int n;
void tukar (int a, int b) {
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
	}

void bubble_sort () 
	{
		int i, j;
	for (int i=1; i<n; i++) 
		{
			if (data[j] < data[j-1])
			tukar (j, j-1);
		}
		printf ("Bubble sort selesai!\n");
		std::cin >> n;
	}
	


void selection_sort ()
{
	int pos, i, j;
	for (i=0; i<n-1; i++)
	{
		pos = i;
		for (j=i+1; j<n; j++)
		{
			if (data[j] < data[pos])
			pos = j;
		}
		if (pos != i) tukar (pos, i);
	}
	printf ("Selection sort selesai!\n");
	std::cin >> n;
}

void insertion_sort ()
{
	int temp, i, j;
	for (i=1; i<n; i++)
	{
		temp = data[i];
		j = i-1;
		while (data[j] > temp && j >=0)
		{
			data[j+1] = data[j];
			j--;
		}
		data[j+1] = temp;
	}
	printf("Insertion sort selesai!\n");
	std::cin >> n;
}

void input ()
{
	printf("Masukkan jumlah data = ");
	std::cin>>n;
	for (int i=0; i<n; i++)
	{
		printf("Masukkan data ke-%d = ", (i+1));
		scanf("%d", &data[i]);
		data2[i]=data[i];
	}
}

void AcakLagi ()
{
	for (int i=0; i<n; i++)
	{
		data[i] = data2[i];
	}
	printf("Data sudah teracak\n");
	std::cin >> n;
}

void Tampil ()
{
	printf("Data:  ");
	for (int i=0; i<n; i++)
	{
		printf("%d", data[i]);
	}
	printf("\n");
	std::cin >> n;
}

int  main ()
{
	system("cls");
	int pil;
	do
	{
		system("cls");
		printf("1. Input Data");
		printf("\n2. Bubble Sort");
		printf("\n3. Selesction Sort");
		printf("\n4. Tampilkan Data");
		printf("\n5. Acak");
		printf("\n0. Exit");
		printf("\nPilihan = ");
		std::cin>> pil;
		switch(pil)
 	{
			case 1: input(); break;
			case 2: bubble_sort(); break;
			case 3: selection_sort(); break;
			case 4: Tampil(); break;
			case 5: AcakLagi(); break;
		}
	}
	while (pil!=0);
}


