#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
   for(int i=n;i>0;i--)
   {
       for(int j=i;j>0;j--)
       {
           cout<<"*\t";
       }
       cout<<endl;
   }
   
}