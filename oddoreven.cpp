#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int n;
cin>>n;
if(n<0){
cout<<"invalid";}
else if(n==0){
cout<<"even";}
else if(n%2==0){
cout<<"even";}
else if(n%3==0){
cout<<"odd";}
return 0;
}
