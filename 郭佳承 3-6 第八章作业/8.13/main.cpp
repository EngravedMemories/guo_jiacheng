#include <iostream>

using namespace std;

void mystery1(char *s1, const char *s2)
{
    while(*s1 != '\0')
        ++s1;
    for( ; ( *s1=*s2 ); ++s1, ++s2)
        ;
}

int main()
{
    char string1[80];
    char string2[80];

    cout <<"Enter two strings: ";
    cin>>string1>>string2;
    mystery1(string1, string2);
    cout << string1 <<endl;
    cout << "打印输入的两个string类变量" << endl;
    return 0;
}
