#include <iostream>
#include <string>

int main() {
    std::string choice;

    std::cout << "Welcome to the Adventure Game!\n";
    std::cout << "You stand at a crossroads.\n";

    while (true) {
        std::cout << "Go 'left' or 'right': ";
        std::cin >> choice;

        for (char &c : choice) c = std::tolower(c);

        if (choice == "left") {
            std::cout << "You found treasure: 100 gold coins.\n";
            break;
        } 
        else if (choice == "right") {
            std::cout << "You meet a sage and get a potion.\n";
            break;
        } 
        else {
            std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
