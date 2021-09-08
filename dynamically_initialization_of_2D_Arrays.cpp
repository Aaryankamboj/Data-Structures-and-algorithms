#include<iostream>
#include<random>
using namespace std;
int main(){
    int row, col;
    cin >> row >> col;
    int **arr=new int*[row];
    for(int i=0; i<row; i++){
        arr[i]= new int[col];
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            arr[i][j] =  rand()%100;
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
        delete[] arr[i];
    }
    delete [] arr;
}