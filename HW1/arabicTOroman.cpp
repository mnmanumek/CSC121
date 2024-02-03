#include <iostream>
#include <vector>

using namespace std;

// Simplified function to convert Arabic numbers to Roman numerals
string arabicToRoman(int number) {
    const vector<pair<int, string>> romanNumerals = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    string roman;
    for (const auto& [arabic, romanNumeral] : romanNumerals) {
        while (number >= arabic) {
            number -= arabic;
            roman += romanNumeral;
        }
    }
    return roman;
}

int main() {
    int number;
    cout << "Enter an Arabic number: ";
    cin >> number;

    if (number > 0 && number <= 3999) {
        cout << "Roman numeral: " << arabicToRoman(number) << endl;
    } else {
        cout << "Number out of range. Please enter a number between 1 and 3999." << endl;
    }

    return 0;
}