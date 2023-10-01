#include<iostream>
#include<vector>
using namespace std;

vector<int> armStrong(int n) {
    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        int num = i;
        int sum = 0;

        // Calculate the sum of cubes of digits
        while (num > 0) {
            int temp = num % 10;
            sum += temp * temp * temp;
            num /= 10;
        }

        if (sum == i) {
            ans.push_back(i);
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number till where we need Armstrong Numbers: ";
    cin >> n;
    vector<int> armstrongNumbers = armStrong(n);

    if (armstrongNumbers.empty()) {
        cout << "No Armstrong numbers found in the given range." << endl;
    } else {
        cout << "Armstrong Numbers: ";
        for (int i : armstrongNumbers) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
