#include <iostream>
#include <string>
using namespace std;

// ANSI escape codes for text color
#define ANSI_RESET "\x1B[0m"
#define ANSI_RED "\x1B[31m"
#define ANSI_GREEN "\x1B[32m"
#define ANSI_YELLOW "\x1B[33m"
#define ANSI_BLUE "\x1B[34m"
#define ANSI_MAGENTA "\x1B[35m"
#define ANSI_CYAN "\x1B[36m"
#define ANSI_WHITE "\x1B[37m"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        cout << "Usage: " << argv[0] << " <input>" << endl;
        return 1; // Exit with error status
    }

    // Read the input from the command line argument
    string input = argv[1];

    // Print the input in a designed format with color
    cout << "Designed Word: ";
    for (char c : input)
    {
        switch (c % 7)
        { // Assign color based on character value
        case 0:
            cout << ANSI_RED;
            break;
        case 1:
            cout << ANSI_GREEN;
            break;
        case 2:
            cout << ANSI_YELLOW;
            break;
        case 3:
            cout << ANSI_BLUE;
            break;
        case 4:
            cout << ANSI_MAGENTA;
            break;
        case 5:
            cout << ANSI_CYAN;
            break;
        case 6:
            cout << ANSI_WHITE;
            break;
        }
        cout << "[" << c << "]";
    }
    cout << ANSI_RESET << endl; // Reset color

    return 0; // Exit with success status
}
