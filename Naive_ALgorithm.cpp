#include <iostream>
#include <string>
using namespace std;

int finding(string text, string pattern) {
     if (pattern == "") return 0;
     for (int i = 0; i <= text.length() - pattern.length(); i++) {
        bool match = true;
        for (int j = 0; j < pattern.length(); j++) {
            if (text[i + j] != pattern[j]) {
                match = false;
                break;
            }
        }
        if (match) 
         return i;
    }

    return -1;
}

int main() {
    string text = "hello world";
    //starting
    cout << finding(text, "hello") << endl; 
    //end
    cout << finding(text, "world") << endl; 
    //not found
    cout << finding(text, "java") << endl; 
    //empty
    cout << finding(text, "") << endl;

}
