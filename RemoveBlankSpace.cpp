#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;

    cout << "Enter a line " << endl << ": " << endl;
    getline(cin, line);
    int len = line.length();

    for (int i = 0; i < len; i++) {
        if (line[i] == ' ' && line[i+1] == ' ') {
            for (int j = i; j < len; j++) {
                line[j] = line[j+1];
            }
            len--;
            i--;
        }
    }

    line.resize(len);
    cout << endl << line;

    return 0;
}
