/*


Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
Round off the total salary and then print the integral part only.

Sample Input 1 :
10000 A
Sample Output 1 :
17600
Sample Input 2 :
4567 B
Sample Output 2 :
8762



*/





#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int basic,allow;
    cin>>basic;
    char grade;
    cin>>grade;
    double hra, da, pf;
    hra=0.2*basic;
    da=0.5*basic;
    pf=.11*basic;
    if(grade=='A'){
        allow=1700;
        
    }else if(grade=='B'){
        allow=1500;
    }else{
        allow=1300;
    }
    int totalsalary= round(basic+hra+da+(allow-pf));
    cout<<totalsalary<<endl;
}
