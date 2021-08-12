#include<iostream>
using namespace std;
int countpath(int s,int e,int n){
  if(s==e){
    return 1;
  }
  if(s>e){
    return 0;
  }
  int count=0;
  for(int i=1;i<=n;i++){
    count+=countpath(s+i,e);
  }
  return 0;
}
  
