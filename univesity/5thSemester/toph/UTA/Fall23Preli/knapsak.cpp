#include <iostream>
#include <algorithm>

using namespace std;

void bubbleSort(int weights[], int values[], double valuePerWeight[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (valuePerWeight[j] < valuePerWeight[j + 1]) {
                swap(valuePerWeight[j], valuePerWeight[j + 1]);
                swap(weights[j], weights[j + 1]);
                swap(values[j], values[j + 1]);
            }
        }
    }
}

double Knapsack(int W, int weights[], int values[], int n) {
    double totalValue = 0.0;
    double remainingWeight = W;
    double valuePerWeight[n];
    for (int i = 0; i < n; i++) {
        valuePerWeight[i] = (double)values[i] / weights[i];
        bubbleSort(weights, values, valuePerWeight, n);
    }
    for (int i = 0; i < n; i++) {
        if (weights[i] <= remainingWeight) {
            totalValue += values[i];
            remainingWeight -= weights[i];
        } else {
            totalValue += (valuePerWeight[i] * remainingWeight);
            break;
        }
    }
    return totalValue;
}

int main() {
    int W = 50;
    int weights[] = {20, 10, 15, 10, 5};
    int values[] = {100, 60, 70, 40, 80};
    int n = sizeof(weights) / sizeof(weights[0]);
    double maxV = Knapsack(W, weights, values, n);
    cout << maxV << endl;
    return 0;
}
