//Display this AP - 4,7,10,13,16.. upto ‘n’ terms

#include<iostream>
using namespace std;
 int main(){
    int a = 4, d =3,  n;
    
     cout<< " Enter the number of  term for AP : ";
     cin>> n;
     cout<< "The Arithmetic Progression is: ";
for(int i = 0; i< n; i++){
 
    int AP=   a +  i *d ;
 cout<<AP << ",";

}
return 0;
 }
