#include <iostream>

int getLevel() {
    int level;
    std::cout << "Enter level (1-10): ";

    if (!(std::cin >> level) || level < 1 || level > 10) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Invalid level. Using 1.\n";
        return 1;
    }
    return level;
}

char getDifficulty() {
    char d;
    std::cout << "Difficulty (E/M/H): ";
    std::cin >> d;
    return std::tolower(d);
}

int main() {
    int level = getLevel();
    char diff = getDifficulty();

    switch (diff) {
        case 'e':
            std::cout << "Easy mode\n";
            if (level >= 5) std::cout << "Extra health bonus\n";
            break;

        case 'm':
            std::cout << "Medium mode\n";
            if (level >= 7) std::cout << "Special weapon\n";
            break;

        case 'h':
            std::cout << "Hard mode\n";
            if (level >= 8)
                std::cout << "Elite status\n";
            else
                std::cout << "Too hard for your level\n";
            break;

        default:
            std::cout << "Invalid difficulty → Easy mode\n";
    }

    std::cout << "Starting game at level " << level << "\n";
    return 0;
}