#include<iostream>
using namespace std;
int main(){

    int n;
    cout <<"Enter Number: "; 
    cin >> n;
    for (int i = 0; i < n; i++){ //row

        for (int j = 0; j <= i; j++){  //columns
        cout <<j+1;
        }
        cout <<endl;
    }
    return 0;
}
/*Output
1
12
123
1234
12345
*/