#include<iostream>
#include<vector>
using namespace std ;

//// 
// int main (){
//    int row,col;
//    cout << "enter row";
//    cin >> row;
//    cout << "enter col";
//    cin >> col ;

//    int ** matrix = new int*[row];

//    for (int i=0;i<row;i++){
//     matrix[i]= new int [col];
//    } 
//    int x=1;

//    for (int  i = 0; i < row; i++)
//    {
//     for (int j = 0; j < col; j++)
//     {
//         matrix[i][j]= x++;
//         cout << matrix[i][j]<< " " ;

//     }
//         cout << endl;

    
//    }
   
//    return 0;
    
// }
//// vectors

//   vector<int> PairSum(vector<int>arr,int target){
//     int st=0,end= arr.size()-1;
//     int currsum=0;


//     vector<int> ans;

     
//     while (st<end)
//     {
//        currsum=arr[st]+arr[end];

//         if(currsum==target){
//             ans.push_back(st) ;
//             ans.push_back(end);
//             return ans;

//         }
//         else if (currsum<target){ 
//             st++;
//         }
//         else{
//             end--;
//         }
//     }
//     return ans;

//   }

// int main () {
//    vector<int> vec={2,7,11,15} ;
//    int target=9;
//    PairSum(vec,target);
//    vector <int> ans =  PairSum(vec,target);
//    cout << ans[0] << " " << ans[1] ;
   
//    return 0;
// }



/// brute force approach
// void PairSum (int *arr,int l){
//     int currsum=0;
//     int target=9;
//     for (int i=0;i<l-1;i++){
//         for(int j=i+1;j<l-1;j++){
//             currsum=arr[i]+arr[j];
//             if(currsum==target){
//                 cout << i << " " << j ;

//             }
//         }

//     }


// }
// int main(){
//     int arr []={2,7,11,15};
//     int l = sizeof(arr)/sizeof(int);
//     PairSum(arr,l);

// }

// vector <int> pairSum(vector<int>arr,int target){
//     int st=0;
//     int len=arr.size()-1;
//     int currsum=0;
//     vector<int>ans;
//     while(st<len){
//         currsum=arr[st]+arr[len];
//         if (currsum==target){
//             ans.push_back(st);
//             ans.push_back(len);
//             return ans;

//         }
//         else if (currsum<target){
//             st++;

//         }
//         else {
//             len --;
//         }

//     } 
//         return ans;



// }
// int main(){
//     vector<int>arr={2,5,7,11};
//     vector<int>ans=pairSum(arr,9); 
//     int target=9;
    
//     cout << ans[0] << " " << ans[1] ;
    


// }

///  2D ARRAYS
int main(){

vector<vector<int>>matrix= {{1,2,3},{4,5,6},{7,8,9}};


for(int i=0;i<matrix.size();i++){
     
     for(int j=0;j<matrix[i].size();j++){

        cout << matrix[i][j] << " "   ;

     }
     cout << endl;
}
}


