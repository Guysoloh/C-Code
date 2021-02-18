/*
Binary Search
*/

#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int x){
	int start=0;
	int end= n-1;
	while(end>=start){
		
		int mid= (start+end)/2;
		
			if(arr[mid]==x){
			
				return mid;
			}
			else if ( arr[mid]>x){
				end=mid-1;
				
			}else
				start=mid+1;
	}
	return -1;	
}

int main(){
	int size;
	cin>>size;
	int* ptr= new int[size];
	for(int i=0; i<size; i++){
		cin>>ptr[i];
	}
	
	int x;
	cin>>x;
	
	cout<<binarysearch(ptr, size, x)<<endl;;

}
