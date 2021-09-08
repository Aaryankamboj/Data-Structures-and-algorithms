#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> vec1)
{
    for (auto element : vec1)
    {
        cout << element << " ";
    }
}
int main()
{

    vector<float> vec1;
    // vec1.push_back(10);
    // vec1.push_back(20);
    // vec1.push_back(30);
    // vec1.push_back(40);
    float elem;
    for (int i = 0; i < 4; i++)
    {
        cin >> elem;
        vec1.push_back(elem);
    }
    display(vec1);
   
    display(vec1);
}