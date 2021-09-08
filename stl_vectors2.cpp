#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Ways to create a vector
    vector<int> vec1; // Zero length integer vector
    vector<float> vec2(4); // 4-length vector
    vector<char> vec3(5,'a');     // 4-length character vector
    vector<char> vec4(vec3); // vector vec4 is made from vec3
    vector<int>vec5(6,3); // 6 element vector with every value as 3
    int element,size;

    for(int i=0; i<vec4.size(); i++){
        cout <<  vec4[i] <<" ";
    }
    vector<int> :: iterator<int> it = vec3.rbegin();
    for(auto elem:vec3){
        cout<<vec3[it]<<" ";
    }


}