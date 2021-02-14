#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int no;
    int pw;
    cin>>no;
    cin>>pw;
    
    int i =1;
    int pr=1;
    while(i<=pw){
        
        pr=pr*no;
        i++;
    }
    cout<<pr<<endl;
	
}

