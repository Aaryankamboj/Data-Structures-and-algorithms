#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(1);
    list1.push_back(4);

 list<int> list2;

    // list<int>::iterator it;
    // it = list1.begin();
    // for(it; it!=list1.end(); it++){
    //     cout << *it <<" ";
    // }
    int arr[5];

for(int i=0; i<5; i++){
    cin >> arr[i];
    list2.push_back(arr[i]);
}

// for(auto elem:list2){
//     cout << elem<<" ";
// }
cout << endl;
// Swapping 2 lists
list1.swap(list2);
for(auto elem:list1){
    cout << elem<<" ";
}
cout << endl;

list2.assign(5,1);
for(auto elem:list2){
    cout << elem<<" ";
}



    
}