#include <iostream>
using namespace std;
int main()
{
    // This is IMPLICIT TYPECASTING as complier automatically converts integer type
    // to character type
    /* int a=65;
    char ch=a;
    cout<<ch;
    */
    // This is Explicit typecasting
    int i = 65;
    int *ptr = &i; // Int pointer pointing to int type variable
/* Character type pointer can't directly point to integer type pointer
So we first need to typecast the int ptr to char type. This is known as Explicit Typecasting.
*/
    char *ch = (char *)ptr;
    cout<<ch;
}