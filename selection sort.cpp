
#include<iostream>
using namespace std;

void selection(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
    
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    cout<<endl;
    }
}

int main(){
    int arr[5]={65,73,46,33,12};
    selection(arr,5);

    cout<< "the sorted array is "<<endl;
    printarray(arr,5);
    return 0;

}