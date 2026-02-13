#include <iostream>

void showMenu() {
    std::cout << "\n=== GAME MENU ===\n";
    std::cout << "1. Start New Game\n";
    std::cout << "2. Load Game\n";
    std::cout << "3. View High Scores\n";
    std::cout << "4. Settings\n";
    std::cout << "5. Exit Game\n";
    std::cout << "Enter choice: ";
}

int main() {
    int choice;

    while (true) {
        showMenu();

        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Invalid input. Enter number.\n";
            continue;
        }

        switch (choice) {
            case 1:
                std::cout << "Starting new adventure...\n";
                break;
            case 2:
                std::cout << "Loading saved game...\n";
                break;
            case 3:
                std::cout << "High Scores...\n";
                break;
            case 4:
                std::cout << "Settings...\n";
                break;
            case 5:
                std::cout << "Goodbye.\n";
                return 0;
            default:
                std::cout << "Choose 15 only.\n";
        }
    }
    return 0;
}