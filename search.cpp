// linear search
// #include<iostream>
// using namespace std;
// bool search(int arr[],int size,int key){

//     for (int i=0;i<size;i++){

//         if (arr[i]==key){
//             return 1;
//         }
//     }
//     return 0 ;

// }
// int main(){

//     int arr[10] = {-4,7,3,1,43,6,9,8,2,-1};

//     cout<<"enter the element to search for:"<<endl;
//     int key;
//     cin>>key;

//     bool found = search(arr,10,key);
//     if (found){
//         cout<<"key is present"<<endl;
//     }
//     else{
//         cout<<"key is absent"<<endl;
//     }
// }

// reverse an array
#include<iostream>
using namespace std;

void reverse(int arr[], int n){

    int start = 0;
    int end = n-1;

    while(start<= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[6]={1,2,3,4,5,6};

    cout<<"enter the size of array:"<<endl;


    reverse(arr,6);
    printarray(arr,6);

    return 0;

}