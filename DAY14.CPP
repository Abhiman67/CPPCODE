#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void reverse(char *arr,int l){
    int st=0;
    int end=l-1;

    while (st <= end){

        swap(arr[st],arr[end]);
        st++;
        end--;


    }
    cout << arr ;
}


void ValidAnagram (string str1, string str2){

    if(str1.length()!=str2.length()){
        //return false;
    }
    int count [27]={0};
    for (int i=0 ;i<str1.length();i++){
        int   idx= str1[i]-'a';
        count[idx]++;

    }
    for(int i=0;i<str2.length();i++){
        int id=str2[i]-'a';
        if (count[id]==0){
            cout << "not valid alagram";
             

        }
        count[id]--;

    
       
        

    }
     {
                    cout << " anagram ";

        }
}

int main(){

    // uppercase to lower 
//    char word[]={"MUMMY"};
//     int n = strlen(word);
//     for(int i=0;i<n;i++ ){
//             char ch= word[i];

//         if(ch >='a' && ch <= 'z'){
//             continue;
//         }
//         else{
//             word[i]=ch-'A'+'a';
//         }
//     }
// cout << word ;



//    char arr[]="codem";
//    int l= strlen(arr);
//    // reverse(arr,l);
//    char str[100];
//    strcpy(str,"apna college");
//    cout << str << endl ;
//    strcat(str," laude pe");
//    cout << str;


string str1 ="rac";
string str2 = "car";
ValidAnagram(str1,str2);


}