#include<iostream>
using namespace std;
int main(){

    int n;
    cout <<"Enter Number: "; 
    cin >> n;
    for (int i = 0; i < n; i++){ //row

        for (int j = n; j > i; j--){  //columns
        cout <<j;
        }
        cout <<endl;
    }
    return 0;
}
/*Output
54321
5432
543
54
5
*/