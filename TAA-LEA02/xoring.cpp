#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char xoring(char R, char S) {
    
    if (tolower(R) == tolower(S)) {
        
        if (isupper(R) && isupper(S)) {
            return R;
        } else if (islower(R) && islower(S)) {
            return toupper(R);
        } else {
            
            return tolower(R);
        }
    }
    
    return R;
}

int main(){

    int N;
    cin >> N;
    cin.ignore();

    while(N--){
        
        string R, S;
        cin >> R >> S;
        string T;
            
        for (size_t j = 0; j < R.size(); ++j) {
            T += xoring(R[j], S[j]);
        }
            
        cout << T << endl;
    }
        
    return 0;
}