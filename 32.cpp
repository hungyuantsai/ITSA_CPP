#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string message;
    getline(cin ,message);
    int password;
    cin >> password;
    if (message.length() > 100)
        return 0;
    for (unsigned int i = 0; i < message.length(); i++) {
        int ch = message[i];
        if (ch >= 'a' && ch <= 'z') {
            ch += password;
            if (ch > 'z')
                ch -= 26;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch += password;
            if (ch > 'Z')
                ch -= 26;
        }
        else if(ch >= '0' && ch <= '9') {
            ch += password;
            if (ch > '9')
                ch -= 10;
        }
        message[i] = ch;
        cout << message[i];
    }
    cout << endl;
    return 0;
}