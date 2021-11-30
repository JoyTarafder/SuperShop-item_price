#include<iostream>
using namespace std;
int main(){

    int n;
    cout <<"Enter Number: "; 
    cin >> n;
    for (int i = 0; i < n; i++){ //row

        for (int j = n; j > 0; j--){  //columns
        cout <<j;
        }
        cout <<endl;
    }
    return 0;
}
/* Output
54321
54321
54321
54321
54321
*/