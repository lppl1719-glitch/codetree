#include <iostream>
using namespace std;

int main() {
    int A,B;
    int prob=1;
    cin>>A>>B;
    for(int i=0;i<B;i++){
        prob*=A;
    }
    cout<<prob;
    return 0;
}