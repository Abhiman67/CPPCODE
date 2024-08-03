#include<iostream>
using namespace std;

// int  func(int n){
//     if(n==1){

//         return 1;
//     }

     
//     return  n+ func(n-1);

// }

/// fibonacci series
int  fibo(int n){
    if(n==0){
        return 0;

    }
    if(n==1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}

int main(){
    
    //func(6);
  cout <<   fibo(3);




    return 0;
}