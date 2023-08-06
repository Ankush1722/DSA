#include <iostream>
using namespace std;

int countHighlyProfitableIntervals(int prices[], int n, int k) {
    int count = 0;
    for (int i = 0; i <= n - k; i++) {
        bool isIncreasing = true;
        for (int j = i + 1; j < i + k; j++) {
            if (prices[j] <= prices[j - 1]) {
                isIncreasing = false;
                break;
            }
        }
        if (isIncreasing) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, k;
    cout << "Enter the number of months (n): ";
    cin >> n;
    int *prices;
    prices=new int[n];
    cout << "Enter the stock prices for " << n << " months:\n";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cout << "Enter the analysis parameter k: ";
    cin >> k;
    int count = countHighlyProfitableIntervals(prices, n, k);
    cout << "Number of highly profitable intervals: " << count << endl;
    return 0;
}