/*
Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.

Sample Input 1:
1234
Sample Output 1:
6 4

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum_of_even=0;
    int sum_of_odd=0;
    int remainder;
    while(n>0){
        remainder=n%10;
        n=n/10;
        if(remainder%2==0){
            sum_of_even+=remainder;
        }else{
            sum_of_odd+=remainder;
        }
        
    }
    cout<<sum_of_even<<' '<<sum_of_odd;
}

