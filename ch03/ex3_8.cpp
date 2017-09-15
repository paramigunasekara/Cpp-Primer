#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main()
{
    string str("a simple string");
    
    // while
    decltype(str.size()) i = 0;
    while (i < str.size()) str[i++] = 'X';
    cout << str << endl;

    // for
    for (i = 0; i<str.size(); i++) cout << i << endl;
    //cout << i << endl;

    // I like range for.
    return 0;
}
