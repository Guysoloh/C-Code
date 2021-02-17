/* 

			Insertion Sort

*/
#include<iostream>
using namespace std;

void selectionsort(int arr[], int size){
	for(int i=0; i<size-1; i++){
		int min= arr[i];
		int midIndex= i;
		for(int j=i+1;j<size;j++){
			if(min>arr[j]){
				min=arr[j];
				midIndex=j;
			}
		}
		swap(arr[i],arr[midIndex]);
	}
}

int main(){
	int n;
	cin>>n;
	int *ptr= new int[n];
	for(int i=0; i<n; i++){
		cin>>ptr[i];
	}
	selectionsort(ptr, n);
	for(int i=0; i<n; i++){
		cout<<ptr[i]<<" ";
	}
	return 0;
}
