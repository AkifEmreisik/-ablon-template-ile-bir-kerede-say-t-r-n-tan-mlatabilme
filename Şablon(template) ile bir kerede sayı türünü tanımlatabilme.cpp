#include<iostream>
 template <typename T>
  T max(T a , T b){
 	return(a>b) ? a : b;
 }
 
 int main(){
std::cout<<max(1.1,5.5);
 	return 0;
 }
