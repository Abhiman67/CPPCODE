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

  vector<int> PairSum(vector<int>arr,int target){
    int st=0,end= arr.size()-1;
    int currsum=0;


    vector<int> ans;

     
    while (st<end)
    {
        currsum=arr[st]+arr[end];
        if(currsum==target){
            ans.push_back(st) ;
            ans.push_back(end);

        }
        else if (currsum<target){ 
            st++;
        }
        else{
            end--;
        }
    }
    return ans;

  }

int main () {
   vector<int> vec={2,7,11,15} ;
   int target=9;
   PairSum(vec,target);
   vector <int> ans =  PairSum(vec,target);
   cout << ans[0] << " " << ans[1] ;
   
   return 0;
}