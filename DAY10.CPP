#include<iostream>
using namespace std;
// int main () {
// // //   int arr[1000];
// // //    
// // //   for (int i = 0;i<len;i++){ 
// // //   cout  << arr[i] << " ";
// // //   }

// // //  // cout << sizeof(arr);
// //     int arr[3]={10,22,3};
// //     int l= sizeof(arr)/sizeof(int);
// //     int max= arr[0];
// //     int min=arr[0];


// //    for (int i = 0;i<l;i++){ 
// //     if(arr[i]> max){
// //         cout << "assigning value"<< arr[i] <<"to max << end; \n" ;
// //     } 
// //     if(arr[i]< min){
// //         cout << "assigning value"<< arr[i] <<"to min \n" ;
// //     } 

// //   cout << "max = " << max <<endl ;
// //   cout<< "min =" << min <<endl; 
   
//    // FOR FINDING THE LARGEST AND SMALLEST ARRAY
//    int arr[5]={7,8,9,4,10};
//    int len= sizeof(arr)/sizeof(int);
//    int max=arr[0];
//    int min=arr[0];
//    for (int u=0;u<len;u++){
//     cout << arr[u] << " " ;
//    }
//    cout << endl;
//    for (int i=0;i<len;i++){
//     if(arr[i]>max){
//         max = arr[i]; 
//     }
//    }
//     for (int i=0;i<len;i++){
//     if(arr[i]<min){
//         min = arr[i];
//     }
//    }
//    cout << "max value is " << max << endl;
//    cout << "min value is " << min ;


//     return 0;
// }

int main (){
    int a=5;
    int *ptr=&a;
    // cout <<ptr <<endl;
    int arr[4]={2,3,45,7}; 
    cout << *arr<<endl;
    cout << *(arr+4)<<endl;
    return 0;
}