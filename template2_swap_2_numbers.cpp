#include <iostream>
using namespace std;
template <class T>
T swap_nos(T &n1, T &n2){
    T temp = n1;
    n1=n2;
    n2=temp;
    return n1, n2;
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout << "Numbers before swapping : " << a <<" " << b << endl;
    swap_nos(a, b);
    cout << "Numbers after swapping : " << a <<" "<< b << endl;

    float a1,b1;
    cin>>a1>>b1;
    cout << "Numbers before swapping : " << a1 <<" " << b1 << endl;
    swap_nos(a1, b1);
    cout << "Numbers after swapping : " << a1 <<" "<< b1 << endl;

}