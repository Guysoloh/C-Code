/*

	BUBBLE SORT				BUBBLE SORT
	BUBBLE SORT				BUBBLE SORT
	BUBBLE SORT				BUBBLE SORT
	BUBBLE SORT				BUBBLE SORT


*/
#include<iostream>
using namespace std;

void bubblesort(int arr[], int size){
	for(int i=0; i<size-1; i++){
		for(int j=0; j<size-1; j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
} 

int main(){
	int n;
	cin>>n;
	int *ptr= new int[n];
	for(int i=0; i<n; i++){
		cin>>ptr[i];
	}
	bubblesort(ptr, n);
	for(int i=0; i<n; i++){
		cout<<ptr[i]<<" ";
	}
	return 0;
}
