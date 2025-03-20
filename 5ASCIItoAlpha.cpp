// Write a program to print all the ASCII values and their equivalent
// characters of 26 alphabets using a while loop
#include <iostream>
using namespace std;
int main(){
    char ch = 'A';
     
    cout <<" Upper charcter \t ASCII value"<< endl;
     while (  ch != 'Z' ){
         cout<< ch <<"\t\t" <<int (ch)<< endl;
         ch++;
     }
      ch = 'a';
     
     cout <<" Lowercase charcter \t ASCII value"<< endl;
      while (  ch != 'z' ){
          cout<< ch<<"\t\t" <<int (ch)<< endl;
          ch++;
      }
     return 0;
}