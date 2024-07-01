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

/// for MAX SUBARRAY M1 SUM BRUTE FORCE      
// void maxsubarr(int *arr,int len){
    
//     int maxsum;

//     for (int start=0;start<len;start++){
//         for (int end=start;end<len;end++){
//             int currsum=0;
//             for(int i=start;i<=end;i++){
//                 currsum += arr[i]; 
//             }
//             cout << currsum <<"," ;
//             maxsum=max(maxsum,currsum);

//         }
//         cout << endl;
//             cout << "max sub arr sum =" << maxsum;
             
//     }

// }

// int main (){
//     int arr[6]={2,-3,6,-5,4,2};
//     int len=sizeof(arr)/sizeof(int);
 
//     maxsubarr(arr,len);
//     return 0;
// }

/// for MAX SUBARRAYSUM M2 OPTIMISEDBRUTE FORCE      


// /// for MAX SUBARRAY M3 KADANE'S ALGORITHM   
//    void kadanesarr(int*arr,int len){
//     int currsum=0;
//     int maxsum=INT16_MIN;
//     for (int i=0;i<len;i++){
//         currsum += arr[i];
//         maxsum=max (maxsum,currsum);
//         if(currsum<0){
//             currsum=0;

//         }
//     }
//     cout << "max subarr value = " << maxsum ;


//    }
//    int main(){
//     int arr[6]={2,-3,6,-5,4,2};
//     int len=sizeof(arr)/sizeof(int);
//     kadanesarr(arr,len);
//     return 0;


//    }


//// BUY & SELL STOCKS
//  void stocks(int *price,int len){

//     int bestbuy[100000];
//     bestbuy[0]=INT16_MAX;
//     for (int i=1;i<len;i++){
//         bestbuy[i]=min(bestbuy[i-1],price[i-1]);
//         cout << bestbuy[i] << ",";
//     }
//       cout << endl;

//     int maxprofit=0;
//     for(int i=0;i<len;i++){
//         int currprofit= price[i]-bestbuy[i];

//         maxprofit=max(maxprofit,currprofit);

//     }
// cout << "max profit = " << maxprofit ;

//  }
//  int main(){
//     int price[6]={7,1,5,3,6,4};
//     int len= sizeof(price)/sizeof(int);

// stocks(price,len);
// return 0;

//  }

///// TRAPPING RAINWATER 

//this is left max
void trapwater(int *water,int n){
    int leftmax[20000];
    leftmax[0]=water[0]  ;
    cout << leftmax[0] << "," ;
    for (int i=1;i<n;i++){
        leftmax[i] = max(leftmax[i-1],water[i-1]);
        cout << leftmax[i] << ",";
    }
    cout << endl ;


///this is right max 
      int rightmax[20000];
      rightmax[n-1]=water[n-1] ;
      for (int i=(n-2);i>0;i--){
        rightmax[i] = max(rightmax[i+1],water[i+1]);
        cout << rightmax[i] << ",";
      }
      cout << rightmax[n-1] << endl ;


      int mintrap[n];
      int watertrap=0;
      for(int i=0;i<n;i++){
        int currwater=min(leftmax[i],rightmax[i]-water[i]);
        if (currwater>0){
            watertrap += currwater;

        }
      }

cout << "water trapped is " << watertrap ;








  

}
int main (){
    int water[5]={5,4,3,2,1};
    int n=sizeof(water)/sizeof(int);

    trapwater(water,n);


    
    return 0;

}