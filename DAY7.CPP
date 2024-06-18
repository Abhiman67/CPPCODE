#include<iostream>
using namespace std;

int sum(int a, int b){
    int sum=a+b;
    return sum ;
}

bool prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;


}
bool isprime(int n){
    if(n==1){
        return false;
    }

    for(int i=2;i<=n-1;i++){
        if (n % i == 0){
            return false;
        }
    }

    return true;
}
int fact(int n){
    int fact =1 ;
    for(int i=1;i<=n;i++){

    
    fact=fact*i;
    return fact;
}
}
int bc (int n,int r){
    int v1=fact(n);
    int v2=fact(r);
    int v3=fact(n-r);


int result= v1/(v2*v3);
return result;
}

double sum(double a, double b){
    return a+b; 
}



int pall(int a, int b, int c){
    cout << "enter nu ";
    cin >> a;
    cout << "enter nu ";
    cin >> b;
    cout << "enter nu ";
    cin >> c;
    if (a==c){
        cout<<"pall";
    }
    else {
        cout << "nope";
    }

}

void sq( ){
    int a=0;
    int b=0;
    cout << "enter nu";
    cin >> a;
    cout << "enter nu ";
    cin >> b;

    int s= a*a + b*b + 2*a*b;
    cout << "ans is: " << s ;

}






int main(){

// pall(1,2,1);
sq();
    return 0;
}