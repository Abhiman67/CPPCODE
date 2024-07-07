  #include<iostream>
  using namespace std;
  
  // SPIRAL MATRIX

  void spiralmatrix (int arr[][4],int n,int m){
    int sr=0,sc=0;
    int er=n-1,ec=m-1;

    while (sr <= er && sc <= ec)
    {
      // top
    for (int j = sc; j<=ec; j++)
    {
        cout << arr[sr][j] << " "; 
    }
    


    //right
    for(int i=sr+1;i<=er;i++){

        cout << arr[i][ec] << " " ;

    }
    //bottom
    for(int j=ec-1; j>=sc;j--){
        cout << arr[er][j] << " ";

    }

    //left 
    for (int i=er-1;i>=sr+1;i++){
        cout << arr[i][sc] << " ";
    }
 
    sr++;
    sc++;
    er--;
    ec--;
   
    }
    cout << endl;
   
  }

  void diagonalsum(int ar[][3],int n){

    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum = sum +  ar[i][j] ;}

            else if(j==n-i-1){
                sum = sum + ar[i][j];

            }
        }
    }
         cout << "sum is " << sum ;


  }
  /////  SEARCH SORT MATRIX BRUTEFORCE APPROACH
void  searchsortmatrix(int arr[][4],int n){
    int key =3;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(key==arr[i][j]){
                cout << i << "," << j ;
            }
        }
    }


}
///// SEARCH SORT STAIRCASE METHOD

void search(int arr[][4],int n,int m,int key  ){

    int i=0,j=m-1;
    while (i<n && j>=0)
    {
        if(arr[i][j]==key ) {
            cout << i << "," << j ;
        }   
        else if(arr[i][j]>key){
            j--;
        }
        else {
            i++;
        } 
       
    }
    
}

//// MATRIX POINTERS


  int main(){
    int arr[4][4]={{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}};  

    int ar[3][3]={{1,2,3},
    {4,5,6},
    {7,8,9}};
   
cout << *(arr+1) << endl;
cout << &arr[1][0];

//       spiralmatrix(arr,4,4);
///      diagonalsum(ar,3);
////     searchsortmatrix(arr,4); 
/////    search(arr,4,4,13);


    return 0;

  }