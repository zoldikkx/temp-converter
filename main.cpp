#include <iostream>
#include <cstdlib>

void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

using namespace std;

int main() {
    clearConsole();
    while (true) {
        cout << "Temperature Converter By zoldikkx" << endl;
        cout << "=====================" << endl << endl;
        string choice = "0";
        cout << "Celsius (1) or Fahrenheit (2): ";
        cin >> choice;

        if (choice == "1") {
            cout << "Enter temperature in Celsius: ";
            double celsius;
            cin >> celsius;
            cout << "Temperature in Fahrenheit: " << celsius * 9 / 5 + 32;
            cout << endl;
            cout << "Press enter to restart...";
            cin.ignore();
            cin.get();
            clearConsole();

        } else if (choice == "2") {
            cout << "Enter temperature in Fahrenheit: ";
            double fahrenheit;
            cin >> fahrenheit;
            cout << "Temperature in Celsius: " << (fahrenheit - 32) * 5 / 9;
            cout << endl;
            cout << "Press enter to restart...";
            cin.ignore();
            cin.get();
            clearConsole();

        } else if (choice != "1" && choice != "2") {
            cout << "Enter a valid choice." << endl;
            cout << "Press enter to restart...";
            cin.ignore();
            cin.get();
            clearConsole();
        }
    }
}