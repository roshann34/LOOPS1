// Write a C++ program to take an integer n as input and print the sum
// of the first n natural numbers using a loop.
 #include<iostream>
  using namespace std;
  int main(){
   int n, sum =0 ; 
   cout<< " Enter the number n : ";
   cin>> n;
   cout <<" the  first n natural number : ";
   for(int i = 1; i <=n ; i++){
     cout<< i << " ";
   sum = sum + i;
   }
   cout <<" \nthe sum of first n natural number : "<< sum; 
    return 0;
  }