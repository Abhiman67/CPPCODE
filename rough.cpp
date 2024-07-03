#include<iostream>
using namespace std;
// // void bubble(int*arr,int l){

// //     for(int i=0;i<l-1;i++) {

// //         for (int j=0;j<l-1-i;j++){
// //             if(arr[j]<arr[j+1]){
// //                 swap(arr[j],arr[j+1]);
// //             }
// //         }
// //     }
// //     for (int i=0;i<l;i++){
// //         cout << arr[i] << "," ;
// //     }


// // void selctionsort (int *arr,int l) {
// //     for (int i=0;i<l-1;i++){
// //         int minnu=i;

// //         for (int j=i;j<l;j++){

// //             if(arr[j]>arr[minnu])
// //             {
// //                 minnu=j;
// //                  }
            
// //             swap(arr[j],arr[minnu]);

// //         } 

// //     }
              
// //           for (int i=0;i<l;i++){
// //            cout << arr[i] << " " ;
// //            }
// // }

// // int main(){
// //     int arr[5]={4,2,5,1,3};
// //     int l=sizeof(arr)/sizeof(int);
// //     // bubble(arr,l);
// //     selctionsort(arr,l);
// //     return 0;
// // }


// void selectsort(int*arr,int l){

//     for(int i=0;i<l-1;i++){

//         int minnu=i;

//         for(int j=i;j<l;j++){


//             if(arr[j]>arr[minnu]){

              
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

//// insertion sort
void insertionsort(int *arr,int l){
    for(int i=0;i<l-1;i++){
        int temp=arr[i];
        int prev=i-1;
        while (prev>=0 && arr[prev]>temp)
        {
            swap(arr[prev],arr[prev+1]);
            prev--;

        }
        arr[prev+1]=temp;

        
    }
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
    

}


void countingsort(int*arr,int l){
    int freq[10000];
    int minval=INT16_MAX;
    int maxval=INT16_MIN;
    for(int i=0;i<l;i++){
        minval=min(minval,arr[i]);
        maxval=max(maxval,arr[i]);

    }

    for(int i=0;i<l;i++){
        freq[arr[i]]++;
    }
    for(int i=minval,j=0;i<=maxval;i++){
        while (freq[i]>0)
        {
           arr[j++]=i;
           freq[i]--;
        }
        
    }

 for (int i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
    
}
int main(){
    int arr[8]={1,4,1,3,2,4,3,7};
    int l=sizeof(arr)/sizeof(int);
    // insertionsort(arr,l);
    countingsort(arr,l);

    return 0;
}
