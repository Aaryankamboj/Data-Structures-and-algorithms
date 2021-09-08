#include<iostream>
#include<vector>
#include<math.h>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(40);
    v.push_back(400);
    // int summ = accumulate(v.begin(), v.end(),0);
    // To add elements of a vector accumulate is the inbuilt method but don't know why its 
    //  not working
//  int sum=0;
//  for(int i=0; i<v.size(); i++){
//      sum=sum+v[i];
//  }
// cout<<sum;

// To return max and min element from a vector
int mx = *max_element(v.begin(),v.end());
cout<<mx<<endl;
int mn = *min_element(v.begin(),v.end());
cout<<mn;

// This is very Important. To convert the vector into previous sum vector
/* Example = v = {1,2,3}
   prefix_sum = (1,3,6)
*/
partial_sort(v.begin(), v.end(), v.begin());
cout<<ans;

}