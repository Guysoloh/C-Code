/*

Print the following pattern
Pattern for N = 4
1
23
345
4567


*/







#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1; 
    int k=0;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<j+k;
            j++;
        }
        k++;
        cout<<endl;
    	i++;
        
    }
    
}



