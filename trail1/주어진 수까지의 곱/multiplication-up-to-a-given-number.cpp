#include <iostream>
using namespace std;

int main() {
    int A,B;
    int prob=1;
    cin>>A>>B;
    for(int i=A;i<=B;i++){
        prob*=i;
    }
    cout<<prob;
    return 0;
}