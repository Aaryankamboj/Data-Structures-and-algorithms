#include<iostream>
using namespace std;

// int tilingways(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//   return tilingways(n-1)+tilingways(n-2);
// }

// practice Again Code

int tilingways(int n){
    if(n==0 || n==1){  // If we don't left with any column or only 1 column
        return n;
    }
    return tilingways(n-1)+tilingways(n-2);
}

int main(){

cout<<tilingways(5);
}