/* 

INSERTION SORT

*/

#include<iostream>
using namespace std;
void insertionsort(int arr[], int size){
	for(int i=1; i<size; i++){
		int current= arr[i];
		int j;
		for(j=i-1; j>=0; j--){
			if(current<arr[j]){
				arr[j+1]=arr[j];
			}
			else{
			
				break;
			}
		}arr[j+1]=current;
	}
	
	
}
int main(){
	int n;
	cin>>n;
	int *ptr= new int[n];
	for(int i=0; i<n; i++){
		cin>>ptr[i];
	}
	insertionsort(ptr, n);
	for(int i=0; i<n; i++){
		cout<<ptr[i]<<" ";
	}
	return 0;
}
