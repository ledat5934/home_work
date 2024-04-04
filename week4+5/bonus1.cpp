#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;cin>>n;
    vector<double> numbers(n);
    double num;

    for(auto &x:numbers)
    {
        cin>>x;
    }

    double sum = 0;
    for (double number : numbers) {
        sum += number;
    }

    double mean = sum / numbers.size();

    double variance = 0;
    for (double number : numbers) {
        variance += pow(number - mean, 2);
    }
    variance /= numbers.size();

    cout << "Mean (μ): " << mean << endl;
    cout << "Variance (σ^2): " << variance << endl;

    return 0;
}
