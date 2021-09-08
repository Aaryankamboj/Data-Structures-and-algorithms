#include <iostream>
#include <vector>
using namespace std;
int main()
{
//     vector<int> v;
//     for (int i = 0; i < 6; i++)
//     {
//         v.push_back(i);
//     }
//     for (auto element : v)
//     {
//         cout << element;
//     }


// cout<<endl;
// int ans = v.max_size();
// cout<<ans;
// int ans2 = v.capacity();
// cout<<"\n"<<ans2;

// // int ans3 = v.empty();
// // int ans3 = v.reserve();

// int ref = v[2];
// cout<<ref<<endl;
// cout<<v.at(4)<<endl;
// cout<<v.front()<<endl;
// cout<<v.back()<<endl;

// int *pos = v.data();
// cout<<*pos;

vector<int> v;
v.assign(5,10);
for(auto element:v){ 
       cout<<element<<" ";
}
cout<<endl;
v.push_back(45);
int n = v.size();
// for(auto element:v){ 
//        cout<<element<<" ";
// }
// cout<<"\n The last element is : "<<v[n-1];
v.insert(v.begin(),5);
// cout<<"\n the first element is : "<<v[0];
cout<<endl;
v.emplace_back(30);
n = v.size();
// cout<<"\n The last element is : "<<v[n-1];
for(auto element:v){
    cout<<element<<" ";
}
v.clear();
cout<<v.size();

int *pos = v.data();
cout<<*pos;

}