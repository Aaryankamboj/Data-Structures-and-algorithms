#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string s1,s2;
  cin>>s1;
  cin>>s2;
  cout<<s1.size()<<" "<<s2.size()<<endl;
  cout<<s1+s2<<endl;
  char c=s1[0];
  char d=s2[0];
  char test=' ';
  test=s1[0];
  s1[0]=s2[0];
  s2[0]=test;
  cout << s1<<" "<<s2;
    return 0;
}