#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
    string text;
    getline(cin, text);
    string reverse;

    reverse_copy(text.begin(), text.end(), back_inserter(reverse));
    cout << reverse << endl;
    return 0;
}
// Сложность O(n)