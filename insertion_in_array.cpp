#include<iostream>
using namespace std;
// Code for Insertion
void indInsertion(int arr[], int size, int element, int capacity, int index){
    if(size>=capacity){
        cout<<"Overflow";
    }

    for(int i=size-1; i>=index; i-- ){
        arr[i+1]=arr[i];
    }
    arr[index]=element;


}
int main(){
    int arr[100]={7,8,12,27,88};
    int size = 5;
    int element=45;
    int index=3;
    indInsertion(arr, size, element,100,index);
    size+=1;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<' ';
    }


}