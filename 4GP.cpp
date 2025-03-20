//Display this GP - 3,12,48,.. upto ‘n’ terms 



 #include<iostream>
  #include<cmath>
  using namespace std;
  int main(){
 int a = 3; 
 int r = 4;\
 int n;
 cout<< " Enter the number of terms :";
  cin>> n;
  cout << "The Geometric Progression is: ";
   for(int i = 0; i< n ; i++){
    int GP = a*  pow( r, i);
     cout<< GP<< " ,"; 
   }
  return 0;
}