// array with functions 
// #include<iostream>
// using namespace std;

// void printarray(int arr[], int size){

//     for(int i=0; i<size;i++){
//         cout<<arr[i]<<endl;
//     }
// }

// int main(){

//     int number[5] = {1,2,3,4,5};
//     printarray(number,5);

// }

// sum of array
#include<iostream>
using namespace std;

int main(){

    int size;
    cout<<"enter the size of array : ";
    cin>>size;

    int num[5]={};
    for(int i=0;i<size;i++){
        // cout<<"enter the value for array at index "<<i<<endl;
        cin>>num[i];
    }

    cout<<"the sum of array is "<<(num[0]+num[1]+num[2]+num[3]+num[4])<<endl;
}


