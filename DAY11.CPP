#include<iostream>
using namespace std;

// FOR subarrays 
// void printsubarr(int *arr,int len){
//     for (int start=0;start<len;start++){
//         for(int end=start;end<len;end++){
        
        
//         //  cout << "(" << start << "," <<  end << ")"    ;
              
              
//               for (int i=start;i<=end;i++){
//                 cout << arr[i];
//               }

 
//                 cout << ",";

        
//         }
//                     cout << endl;


//     }
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int len=sizeof(arr)/sizeof(int);
//     int start=0;
//     int end = len-1;
//     printsubarr(arr,len);
//     return 0;
// }

/// for MAX SUBARRAY SUM
void maxsubarr(int *arr,int len){
    
    int maxsum;

    for (int start=0;start<len;start++){
        for (int end=start;end<len;end++){
            int currsum=0;
            for(int i=start;i<=end;i++){
                currsum+=arr[i]; 
            }
            cout << currsum <<"," ;
            maxsum=max(maxsum,currsum);

        }
        cout << endl;
            cout << "max sub arr sum =" << maxsum;


    }



}
int main (){
    int arr[6]={2,-3,6,-5,4,2};
    int len=sizeof(arr)/sizeof(int);

    maxsubarr(arr,len);
    return 0;
}