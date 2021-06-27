#include <iostream>

using namespace std;

int main()
{
    string index = "~!@#$%^&*()_++`1234567890-==qwertyuiop[]\\{}||asdfghjkl;'':""zxcvbnm,.//<>??  ";
    string str;
    while (getline(cin, str)) {
        for (unsigned int i = 0; i < str.length(); i++) {
            for (unsigned int j = 0; j < index.length(); j++) {
                char ch = str[i];
                ch = tolower(ch);
                if (index[j] == ch) {
                    cout << index[j+1];
                    break;
                }
            }
        }
    }
    cout << endl;
    return 0;
}