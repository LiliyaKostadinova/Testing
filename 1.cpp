//namirane na sbor na cifri na chislo

#include <iostream>
using namespace std;
int main()
{

    int num = 0, currDigit = 0, sum = 0;
    cin >> num;

    while(num > 0){
        currDigit = num % 10;
        sum = sum + currDigit;
        num = num/10;
    }
    cout<<sum;

    //ADDING A COMMENT TO TEST
    return 0;
}
