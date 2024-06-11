#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
 int n;
    cin>>n;
    int temp=6;
    int p;
    int count=0;
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<"0 ";
        }
        else if(i==1){
            cout<<"2 ";
            p=2;
        }
        else{
        if(count==2){
            temp+=4;
            count=0;
        }
        int t=temp+p;
        cout<<t<<" ";
            p=t;
            count++;
    }}
    return 0;
}  
 