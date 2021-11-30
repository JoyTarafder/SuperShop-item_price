#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    
    // If - else if - else
    // if(age > 18){
    //     cout << "You can not come to my party.";
    // }
    // else if(age == 18){
    //     cout << "You are a kid and you will get a kid pass to the party.";
    // }
    // else{
    //     cout << "You can to come to my party.";
    // }

    // Switch case
    switch (age)
    {
    case 18:
        /* code */
        cout << "You are 18" << endl;
        break;
    case 22:
        /* code */
        cout << "You are 22" << endl;
        break;
    case 2:
        /* code */
        cout << "You are 2" << endl;
        break;

    default:
        cout << "No spacial cases." << endl;
        break;
    }

    return 0;
}
