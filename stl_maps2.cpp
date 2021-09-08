#include <iostream>
#include <map>
using namespace std;
int main()
{

    map<int, char> alpahbets;
    alpahbets[0] = 'a';
    alpahbets[1] = 'b';
    alpahbets[2] = 'c';
    alpahbets[3] = 'd';
    alpahbets.insert({5, 'e'});
    map<int, char>::iterator iter;
    iter = alpahbets.begin();
    for (iter; iter != alpahbets.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << " " << endl;
    }
    cout << "Size of alphabets map is : " << alpahbets.size();
}