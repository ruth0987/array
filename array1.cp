//max and min of a given array 
#include <iostream>

int main(){ 
  int n, i, max, min;
  std::cout<<"enter the size of the array";
  std::cin>>n;
  int a[n];
  for(i=0;i<n; i++){
    std::cin>>a[i];
  }
max= a[0];
  for(i=0; i<n; i++){
    if(a[i]>max){
      max=a[i];
    }
  }

min= a[0];
  for(i=0; i<n; i++){
    if(a[i]<min){
      min=a[i];
    }
  }
  std::cout<<"max:"<<max;

  std::cout<<"min:"<<min;

}