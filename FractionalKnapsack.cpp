#include<bits/stdc++.h>
using namespace std;

int P[100],W[100],n,m;
// Assuming that (P[i]/W[i])>=(P[i+1]/W[i+1])
//else we have to sort P and W 
//as per the ratios in descending order
float KS(){
  float p=0,c=0;
  for(int i=1;i<=n;i++){
    c+= W[i];
    if(c<m)
      p+=P[i];
    else
      return p+(1-(c-m)/W[i])*P[i];
  }
  return p;
}

int main(){
  cout<<"Enter the number of elements and the Knapsack Capacity respectively:\n";
  cin>>n>>m;
  int i;
  cout<<"Enter the values or profits:\n";
  for(i=1;i<=n;i++)
    cin>>P[i];
  cout<<"Enter the weights:\n";
  for(i=1;i<=n;i++)
    cin>>W[i];
  cout<<"The Maximum Value or Profit is: "<<KS();
}
