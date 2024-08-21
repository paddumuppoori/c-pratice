#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a: " <<"enter b: "<<"enter c: "<<endl;
    cin>>a>>b>>c;
    int max;
    max=((a>b)&&(a>c))?a:(b>c)?b:c;
    cout<<max<<endl;

    
    return 0;



}