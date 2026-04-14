#include <iostream>
#include <climits> // For INT_MAX constant
int main() {

     // ------ BOOLEAN DATA SECTION ------
    std::cout << "\n------ BOOLEAN DATA SECTION ------" << std::endl;
    std::cout << "Using boolean data types for true/false information:" << std::endl;

    // Boolean variables for simple flags
    bool isActive = true;
    bool hasPermission = false;
    bool isCompleted = true;

    // Display boolean values (they show as 1 for true, 0 for false)
    std::cout << "User account active: " << isActive << std::endl;
    std::cout << "User has admin permission: " << hasPermission << std::endl;
    std::cout << "Task completed: " << isCompleted << std::endl;

    // Show memory usage
    std::cout << "\nBoolean data memory usage:" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " byte(s)" << std::endl;
    
    // Simple boolean comparisons
    std::cout << "\nBoolean comparisons:" << std::endl;
    std::cout << "Are both account active AND task completed? ";
    if (isActive == true && isCompleted == true) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}
