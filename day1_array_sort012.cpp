#include <bits/stdc++.h> 
using namespace std;

void merge (int arr[], int l, int mid, int r ){
        int n1 = mid -l+1;
        int n2 = r - mid;
        int a[n1], b[n2];

        for(int i  = 0 ; i<n1;i++) a[i]= arr[l+i];
        for(int i  = 0 ; i<n2;i++) b[i]= arr[mid + 1 +i];

        int i = 0, j = 0, k=l;

        while(i <n1 && j<n2){
            if(a[i]<b[j]){
                arr[k]= a[i];
                k++; i++;
            }
            else {
                arr[k]= b[j];
                k++; j++;
            }
        }
        while(i <n1){
            arr[k]= a[i];
                k++; i++;
        }
        while(i <n2){
            arr[k]= b[j];
                k++; j++;
        }

    }
    
void mergeSort(int arr[], int l, int r) {
        if (l < r) {
            int mid = (l + r) / 2;
            mergeSort (arr, l, mid); 
            mergeSort (arr, mid + 1, r); 
            merge(arr, l, mid, r);
        }
    
    }
    

void sort012(int *arr, int n)
{
   //   Write your code here
    int l = 0, r = n - 1;
    mergeSort(arr, l, r);
}

int main(){
  int n;
  cin>> n;
  int arr[n];
  for(int i = 0;i<n;i++) cin>> arr[i];
  int (*arrpt)[n];
  arrpt = &arr; 
  mergeSort(*arrpt, 0, n-1 );
    
  for(int i = 0;i<n;i++) cout << arr[i] << " ";
    
  return 0 ;
    
}