#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  int house[n],pos[n],third[n];
  for(int i=0;i<n;i++)
  {
    cin>>house[i];
    cin>>pos[i];
    third[i]=pos[i];
  }
  sort(third,third+n);
  int d1=0,d2=0,maxdif=0;
  for(int i=1;i<n;i++)
  {  
    int curdif=abs(third[i]-third[i-1]);
    if(curdif>maxdif)
    {
      maxdif=curdif;
      d1=third[i];
      d2=third[i-1];
    }
  }
    int i1=-1,i2=-1;
    for(int i=0;i<n;i++){
      if(pos[i]==d1)
        i1=i;
      if(pos[i]==d2)
        i2=i;
    }
    if(house[i1]<house[i2])
      cout<<house[i1]<<" "<<house[i2];
    else
      cout<<house[i2]<<" "<<house[i1];
  }