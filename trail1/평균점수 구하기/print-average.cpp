#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double score[8];
    double sum=0.0;
    double avg=0.0;

    for(int i=0;i<8;i++){
        cin>>score[i];
        sum+=score[i];
    }
    avg=sum/8;
    cout<<fixed<<setprecision(1);
    cout<<avg;

    return 0;
}