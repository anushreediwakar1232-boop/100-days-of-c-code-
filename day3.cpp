#include<iostream>
using namespace std ; 
int main() 
{
     int first =0 ; 
     int second =1 ; 
     int next_num ; 
     cout<<first <<endl ; 
     cout<<second<<endl ; 
     for( int i =0; i<18 ; i ++)
     { 
        next_num = first +second ; 
        cout<<next_num<<endl; 
        first =second; 
        second =next_num ; 
     }
      return 0 ; 
}
