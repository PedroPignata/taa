#include <iostream>
#include <vector>

using namespace std;

int calculoMcCarthy(int num){
    if(num > 100)
    return num - 10;

    return calculoMcCarthy(calculoMcCarthy(num+11));
}

int main(){
    int C, N;
    cin>>C;

    while ((C--))
    {
        cin>>N;
        cout << calculoMcCarthy(N) << "\n";
    }
    
    return 0;

}