#include <iostream>
#include<bitset>
using namespace std;

unsigned int reverseBits(unsigned int num) {
    unsigned int reversedNum = 0;
    int bitCount = sizeof(num) * 64;

    for (int i = 0; i < bitCount; ++i) {
        if (num & (1 << i)) {
            reversedNum |= 1 << ((bitCount - 1) - i);
        }
    }

    return reversedNum;
}

int main(){

    unsigned long long N;
    cin >> N;

    unsigned long long reverseN = reverseBits(N);

    cout << reverseN << endl;

}