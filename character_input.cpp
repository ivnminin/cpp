#include <iostream>
using namespace std;

int main()
{
    bool previous_space_input;
    char space = ' ';
    char c = '\0';
    while (cin.get(c)) {
        if (previous_space_input && c == space) {
            continue;
        }
        if (c != space) {
            previous_space_input = false;
        } else {
            previous_space_input = true;
        }

        cout << c;
    }

	return 0;
}
