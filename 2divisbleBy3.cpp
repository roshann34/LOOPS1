#include<iostream>
using namespace std;
int main(){
     int sum =0, rem ;
    for(int n = 1; n<=100; n++){
         int temp = n;
     while(temp != 0){
       rem= temp%10;
       sum = sum+ rem ;
       temp= temp/ 10;  
     }
    if (sum %3== 0){
        cout<< n<< " " ;
    }
    

    }
    
return 0;
}
