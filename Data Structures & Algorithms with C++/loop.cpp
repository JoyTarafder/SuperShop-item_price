// #include <iostream>
// using namespace std;

// int main(){
//     int n = 0;
//     cin >> n;

//     // for(int i = 1; i <= 10; i++){
//     //     cout<< i <<". Hello World!" << endl;
//     // }
//     int sum = 0;

//     for(int counter = 1; counter <= n; counter++){
//         sum = sum + counter;
//     }

//     cout << sum << endl;

//     // while (n > 0){
//     //     cout << n << endl;
//     //     cin >> n;
//     // }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int rows = 0, cols = 0;
//     cout << "Rows : ";
//     cin >> rows;
//     cout << "Coloms : ";
//     cin >> cols;
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= cols; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int rows = 0, cols = 0;
    cout << "Rows : ";
    cin >> rows;
    cout << "Coloms : ";
    cin >> cols;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == cols)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
