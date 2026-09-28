#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n,m;
    int sum=0;
    double avg=0;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>m;
        sum+=m;
    }

    avg=(double)sum/n;
    cout<<fixed;
    cout<<setprecision(1);

    cout<<sum<<" "<<avg<<endl;

    return 0;
}