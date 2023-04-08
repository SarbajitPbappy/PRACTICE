#include <iostream>

using namespace std;

bool isMax(int weight, int w1, int w2, int w3) {
    return (weight >= w1 && weight >= w2 && weight >= w3);
}

bool isSecondMax(int weight, int w1, int w2, int w3) {
    return ((weight >= w1 && weight <= w2 && weight >= w3) ||
            (weight <= w1 && weight >= w2 && weight >= w3) ||
            (weight >= w1 && weight >= w2 && weight <= w3));
}

bool isThirdMax(int weight, int w1, int w2, int w3) {
    return ((weight >= w1 && weight <= w2 && weight <= w3) ||
            (weight <= w1 && weight >= w2 && weight <= w3) ||
            (weight <= w1 && weight <= w2 && weight >= w3));
}

int main() {
    int w1, w2, w3, w4;
    cin >> w1 >> w2 >> w3 >> w4;

    if (isMax(w1, w2, w3, w4)) {
        cout << "Oldest will get Pasta" << endl;
    } if (isSecondMax(w1, w2, w3, w4)) {
        cout << "Second oldest will get Soup" << endl;
    } if (isThirdMax(w1, w2, w3, w4)) {
        cout << "Third oldest will get Pizza" << endl;
    } else {
        cout << "Youngest will get Noodles" << endl;
    }

    return 0;
}
