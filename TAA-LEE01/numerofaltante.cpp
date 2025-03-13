#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> numbers(N - 1);
    long long sum = 0;
    
    for (int i = 0; i < N - 1; ++i) {
        cin >> numbers[i];
        sum += numbers[i];
    }
    
    long long expectedSum = (long long)N * (N + 1) / 2;
    int missingNumber = expectedSum - sum;
    
    cout << missingNumber << endl;
    
    return 0;
}