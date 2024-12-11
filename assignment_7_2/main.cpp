#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    vector<double> numbers;
    double num;

    while (cin >> num && num != 0) {numbers.push_back(num);}
    if (numbers.empty()) {cout << "No numbers entered." << endl;return 0;}

    double sum = accumulate(numbers.begin(), numbers.end(), 0.0);
    double avg = sum / numbers.size();

    sort(numbers.begin(), numbers.end());
    double median;

    size_t size = numbers.size();
    if (size % 2 == 0) {median = (numbers[size / 2 - 1] + numbers[size / 2]) / 2;}
    else {median = numbers[size / 2];}

    sort(numbers.begin(), numbers.end(), greater<double>());

    cout << "Average : " << avg << endl;
    cout << "Median : " << median << endl;
    cout << "Descending : ";for (const auto& val : numbers) {cout << val << " ";}
    cout << endl;

    return 0;
}