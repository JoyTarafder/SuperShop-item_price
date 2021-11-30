#include<iostream>
using namespace std;
int main(){

    int n;
    cout <<"Enter Number: "; 
    cin >> n;
    for (int i = 0; i < n; i++){ //row

        for (int j = 0; j < n; j++){  //columns
        cout <<j+1;
        }
        cout <<endl;
    }
    return 0;
}
/*Output
12345
12345
12345
12345
12345
*/