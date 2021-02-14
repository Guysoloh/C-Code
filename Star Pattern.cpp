/*
Print the following pattern
Pattern for N = 4
			 *
			***
		   *****
		  *******

The dots represent spaces.

*/

#include<iostream>
using namespace std;


int main(){
    int n;
    int i=1;
    
    cin>>n;
    
    while(i<=n){
        int k = 1;
        while (k <= n-i)
        {
            cout<<" ";
            k=k+1;
        }
        int j=1;
      	while(j<=2*i-1){
            cout<<"*";
            j++;
            
        }
        
        cout<<endl;
        i++;
    }
    return 0;
  
}



/*
Second way
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<' ';
            space++;
        }
        int j=1;
        while(j<=i){
            cout<<'*';
            j++;
        }
         int k=1;
        while(k<i){
            cout<<'*';
            k++;
        }
        cout<<endl;
        i++;
    }
}
