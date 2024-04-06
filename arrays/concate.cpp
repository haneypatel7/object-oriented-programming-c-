#include <iostream>
using namespace std;
#include <string>

int main() {
    string str = "NASCJS";
    int num = 42;

    // Convert the integer to a string using std::to_string() function
    string numString = to_string(num);

    // Concatenate string and integer
    string concatenated = str + numString;

    // Print the concatenated string
    cout << "Concatenated string: " << concatenated << endl;

    return 0;
}
