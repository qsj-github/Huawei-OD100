#include <iostream>
#include <vector>
#include <string>
#include <sstream>

// Helper function to split string by comma and convert to integer vector
std::vector<int> parseInput(const std::string& input) {
    std::vector<int> result;
    std::stringstream ss(input);
    std::string item;
    while (getline(ss, item, ',')) {
        result.push_back(std::stoi(item));
    }
    return result;
}

// Function to calculate the minimum number of vehicles
int minimumNumberOfCars(const std::vector<int>& cars) {
    int totalCars = 0;
    int count = 0;  // to count consecutive '1's

    for (int i = 0; i < cars.size(); ++i) {
        if (cars[i] == 1) {
            count++;
        } else {
            // Process the current sequence of '1's
            totalCars += count / 3;  // Count number of trucks
            count %= 3;
            totalCars += count / 2;  // Count number of vans
            count %= 2;
            totalCars += count;      // Count remaining cars
            count = 0;               // Reset count for the next sequence
        }
    }

    // Handle any remaining '1's
    totalCars += count / 3;
    count %= 3;
    totalCars += count / 2;
    count %= 2;
    totalCars += count;

    return totalCars;
}

int main() {
    // Read input from the user
    std::string input;
    std::getline(std::cin, input);

    std::vector<int> cars = parseInput(input);
    int result = minimumNumberOfCars(cars);
    std::cout << result << std::endl;
    return 0;
}
