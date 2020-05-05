#include <iostream> 
using namespace std;
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
    for (i =0; i < n-1; i++) 
    {  
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
        swap(&arr[min_idx], &arr[i]); 
    } 
} 
  

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<arr[i]<<" "; 
    cout<<"\n"; 
} 
  
int main() 
{ 
    int arr[] = {7, 19, 4, 8, 20, 1};
    cout<<"\n ============================"; 
	cout<<"\n\tSelection sort"; 
    cout<<"\n ============================";
    cout<<endl;
    cout<<" \n sebelum diurutkan \n ";
    cout<<arr[0]<<" ";
    cout<<arr[1]<<" ";
    cout<<arr[2]<<" ";
    cout<<arr[3]<<" ";
	cout<<arr[4]<<" ";
	cout<<arr[5]<<" ";
    cout<<"\n";

    
    int n = sizeof(arr)/sizeof(arr[0]); 
    selectionSort(arr, n); 
    cout<<endl;
	cout<<" setelah dilakukan selection sort: \n "; 
    printArray(arr , n); 
    return 0; 
} 


