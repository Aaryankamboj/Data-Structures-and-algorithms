#include <iostream>
#include <map>
#include <string>

using namespace std;
// Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["jack"] = 78;
    marksMap["Rohan"] = 90;
    marksMap.insert({"parry", 89});
    // To INSERT new pair of values in MAP
    map<string, int>::iterator it;
    for (it = marksMap.begin(); it != marksMap.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << " ";
    }

    cout << "The size of marksMap is : " << marksMap.size() << endl;
    cout << "The Maximum Sixe of map is : " << marksMap.max_size() << endl;
    cout << "The map is empty or not : " << marksMap.empty() << endl;
}