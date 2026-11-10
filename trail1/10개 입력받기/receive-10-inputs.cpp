#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int tmp=0, sum=0, count=0;
    double avg=0.0;

    for(int i=0; i<10; i++){
        cin>>tmp;
        if(tmp==0)  break;
        sum+=tmp;
        count++;
    }

    avg=(double)sum/(double)count;

    cout<<fixed;
    cout.precision(1);

    cout<<sum<<" "<<avg;
    
    return 0;
}