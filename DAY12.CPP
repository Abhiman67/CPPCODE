#include<iostream>
using namespace std;

//BUBBLE SORT
// void bubble (int *arr,int l){
// for (int i=0;i<l-1;i++){

//     for(int j=0;j<l-i-1;j++){

//          if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }
//     }


// }
// for (int i=0;i<l;i++){
//     cout << arr[i] << " " ;
// }


// }
// int main (){
//     int arr[5]={5,4,1,3,2};
//     int l = sizeof(arr)/sizeof(int);
//     bubble(arr,l);
//     return 0;

// }

/// SELECTION SORT 
// void selectsort(int*arr,int l){

//     for(int i=0;i<l-1;i++){

//         int minnu=i;

//         for(int j=i;j<l;j++){


//             if(arr[j]<arr[minnu]){

              
//                 minnu=j;
//             }
//               swap(arr[j],arr[minnu]);
//         }
        
//     }
  
// for (int i=0;i<l;i++){
//     cout << arr[i] << " " ;
// }


// }
// int main (){
//     int arr[5]={5,4,1,3,2};
//     int l = sizeof(arr)/sizeof(int);
//     selectsort(arr,l);
//     return 0;

// }

//// INSERTION SORT
// void insertionsort(int*arr,int l){

//     for(int i=0;i<l;i++){
//         int temp = arr[i];  
//         int prev=i-1;
//         while(prev>=0 && arr[prev]>temp){

//             swap(arr[prev],arr[prev+ 1]);
//             prev -- ; 

//         }
//         arr[prev+1]=temp; 
        
//     }
// for (int i=0;i<l;i++){
//     cout << arr[i] << "," ;
// }
// }


// int main (){
//     int arr[5]={5,4,1,3,2};
//     int l = sizeof(arr)/sizeof(int);
//     insertionsort(arr,l);
//     return 0;

// }
///// COUNTING SORT
// void countsort(int*arr,int l){
//     int freq[100000];
//     int minval= INT16_MAX;
//     int maxval=INT16_MIN;

//     for (int i=0;i<l;i++){
//       minval=min(minval,arr[i]);  
//       maxval=max(maxval,arr[i]);
//     }  

//  // 1st step
//     for (int i=0;i<l;i++){
//     freq[arr[i]]++;}

// // 2nd step 
//     for (int i =minval , j=0;i<=maxval;i++){
//         while (freq[i]>0)
//         {
//             arr[j++] = i ;
//             freq[i]--;

//         }
        
//     }

//     for(int i=0;i<l;i++){
//         cout << arr[i] << " ";

//     }

// }



// int main (){
//     int arr[8]={1,4,1,3,2,4,3,7};
//     int l = sizeof(arr)/sizeof(int);
//     countsort(arr,l);
//     return 0 ;}

//  inbuilt sort
// int main (){
//     int arr[8]={1,4,1,3,2,4,3,7};
//     int l = sizeof(arr)/sizeof(int);
//      sort (arr,arr+l);
//     for(int i=0;i<l;i++){
//         cout << arr[i];
//     }
//     return 0;}  


/// QUES

// void insertionsort(char *arr,int l){

//     for(int i=0;i<l;i++){
//         int temp = arr[i];  
//         int prev=i-1;
//         while(prev>=0 && arr[prev]>temp){

//             swap(arr[prev],arr[prev+ 1]);
//             prev -- ; 

//         }
//         arr[prev+1]=temp; 
        
//     }
// for (int i=0;i<l;i++){
//     cout << arr[i] << "," ;
// }
// }


// int main (){
//     char ch[6]={'f','u','a','b','d','c' };
//     int l = sizeof(ch)/sizeof(char);
//     insertionsort(ch,l);
//     return 0;

