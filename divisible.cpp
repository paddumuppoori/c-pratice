#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"enter the number:";
    cin>>num;
    string divisiblenumber;
    divisiblenumber=((num%2==0)&&(num%3==0))?"divisible":"not divisible";
    cout<<divisiblenumber<<endl;
    return 0;



}