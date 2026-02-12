#include <iostream>
using namespace std;

// Validate score range
bool isValidScore(int score) {
    return score >= 0 && score <= 100;
}

// Convert score to grade
char calculateGrade(int score) {
    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    if (score >= 70) return 'C';
    if (score >= 60) return 'D';
    return 'F';
}

int main() {
    int score;

    cout << "Enter score: ";
    cin >> score;

    if (!cin) {
        cout << "Error: Invalid input." << endl;
        return 1;
    }

    if (!isValidScore(score)) {
        if (score < 0)
            cout << "Error: Score cannot be negative." << endl;
        else
            cout << "Error: Score cannot exceed 100." << endl;
        return 1;
    }

    char grade = calculateGrade(score);
    cout << "Valid score: " << score << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}