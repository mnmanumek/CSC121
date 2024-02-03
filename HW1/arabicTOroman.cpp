#include <iostream>
#include <vector>
#include <utility> // For std::pair

using namespace std;

string arabicToRoman(int number) {
    // Define pairs of Arabic numbers and their Roman numeral equivalents
    vector<pair<int, string>> romanNumerals = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    string result = "";
    // Convert the number to Roman numeral
    for (const auto& value : romanNumerals) {
        while (number >= value.first) {
            result += value.second; // Append the Roman numeral to result
            number -= value.first; // Reduce the number
        }
    }

    return result;
}

int main() {
    int number;
    cout << "Enter an Arabic number: ";
    cin >> number;

    if (number > 0 && number <= 3999) { // Roman numerals traditionally only go up to 3999
        cout << "Roman numeral: " << arabicToRoman(number) << endl;
    } else {
        cout << "Number must be between 1 and 3999." << endl;
    }

    return 0;
}

