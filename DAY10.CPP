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

// int main (){
//     int a=5;
//     int *ptr=&a;
//     // cout <<ptr <<endl;
//     int arr[4]={2,3,45,7}; 
//     cout << *arr<<endl;
//     cout << *(arr+4)<<endl;
//     return 0;
// }


//// LINEAR SEARCH 1
// int main (){
//     int arr[5]={2,4,6,8,10};
//     int key=10;
//     int l=sizeof(arr)/sizeof(int);
//     for(int i=0;i<l;i++){
//         if (arr[i]==key)
//         cout << i ;
//     } 
//     return 0;

// } 
//// LINEAR SEARCH 2
// int linearsearch(int arr[],int n,int key){
//      for (int i=0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }
//      return -1;
//      }

// }
// int main (){
//     int arr[5]={2,4,6,8,10};
//     int key=10;
//     int n=sizeof(arr)/sizeof(int);
//     cout << linearsearch(arr,n,10);
//     return 0;
// }


/////REVERSE AN ARRAY M1 WITH EXTRA SPACE
// int main (){
//     int arr[5]={2,4,6,8,10};
 
//     int l=sizeof(arr)/sizeof(int);

//     int copyarr[l];  
//     for (int i=0;i<l;i++){
//         int j=l-i-1;
//         copyarr[i]=arr[j];

//     }
//     for(int i=0;i<l;i++){
//         arr[i]=copyarr[i];

//     }
//     for (int i=0;i<l;i++){
//         cout << arr[i];

//     }
//     return 0;
// }

/////REVERSE AN ARRAY M2 WITHOUT EXTRA SPACE 2pointer method
// int main(){
//     int arr[5]={2,4,3,6,1};
//     int l=sizeof(arr)/sizeof(int);

//      int start=0;
//      int end=l-1;
//     // while(start<end){
//     //     int temp=arr[start];
//     //     arr[start]=arr[end];
//     //     arr[end]=temp;
//         swap(arr[start],arr[end]);
//         start++;
//         end--;


//    // }
// for (int i=0;i<l;i++){
//     cout << arr[i];
// }
// }
//// binary search
int main(){
    int arr[5]={2,3,4,5,6};
    int l=sizeof(arr)/sizeof(int);
    int start =0;
    int end=l-1;
    int key=4;


    while(start<=end){
        int mid=(start+end)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        elseif(arr[mid]<key){
            
        }
        
    }
} 