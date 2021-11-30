// #include <iostream>
// using namespace std;

// int main(){
//     int saving;
//     cout << "Saving : ";
//     cin >> saving;

//     if(saving > 5000){
//         if(saving > 10000){
//             cout << "Roadtripe with Nilu";
//         }
//         else{
//             cout << "Shopping with Nilu";
//         }
//     }
//     else if(saving > 2000){
//         cout << "Rasmika";
//     }
//     else{
//         cout << "Friends";
//     }

//     return 0;
// }

//------------------ Larges Number ----------------
// #include <iostream>
// using namespace std;

// int main(){
//     int a = 0, b = 0, c = 0 ;
//     cin >> a >> b >> c;

//     if(a > b){
//         if(a > c){
//             cout << a << endl;
//         }
//         else{
//             cout << c << endl;
//         }
//     }
//     else {
//         if(b > c){
//             cout << b << endl;
//         }
//         else{
//             cout << c << endl;
//         }
//     }
//     return 0;
// }

//------------------- Odd Even -------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int num = 0;
//     cin >> num;

//     if(num %2 == 0){
//         cout << "Even Number" << endl;
//     }
//     else{
//         cout << "Odd NUmber" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 0;
//     cin >> n;

//     if(n < 0){
//         cout << "N (-)";
//     }
//     else{
//         cout << "P (+)";
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int op;
//     cout << "   1. Area of a circle."<<
//         "\n   2. Area of a rectangle."<< 
//         "\n   3. Area of triangle." <<
//         "\n   4. Volume of a cylinder." << 
//         "\n   5. Volume of a sphere." << 
//         "\n   6. Volume of a cube." << endl;
//     cout << "Select an option (1-6) : ";
//     cin >> op;

//     if(op == 1){
//         cout << "<< Area of a circle >>\n\n";
//         float radius = 0;
//         cout << "Enter radius : ";
//         cin >> radius;

//         cout << "Area of circle is " << (3.1416 * radius * radius);

//     }
//     else if(op == 2){
//         cout << "<< Area of a rectangle >>\n\n";
//         float height = 0, width = 0;
//         cout << "Enter height : ";
//         cout << "Enter width : ";
//         cin >> height;
//         cin >> width;

//         cout << "Area of a rectangle is " << (height * width);

//     }
//     else if(op == 3){
//         cout << "<< Area of triangle >>\n\n";
//         float base = 0, height = 0; 
//         cout << "Enter base : ";
//         cout << "Enter height : ";
//         cin >> base;
//         cin >> height;

//         cout << "Area of triangle is " << ((1/2.0) * base * height);

//     }
//     else if(op == 4){
//         cout << "<< Volume of a cylinder >>\n\n";
//         int radius = 0, height = 0;
//         cout << "Enter radius : ";
//         cout << "Enter height : ";
//         cin >> radius;
//         cin >> height;

//         cout << "Volume of a cylinder is " << (3.1416 * radius * radius * height);

//     }
//     else if(op == 5){
//         cout << "<< Volume of a sphere >>\n\n";
//         int radius = 0;
//         cout << "Enter radius : ";
//         cin >> radius;

//         cout << "Volume of a sphere is " << ((4/3.0) * 3.1416 * radius * radius * radius);

//     }
//     else if(op == 6){
//         cout << "<< Volume of a cube >>\n\n";
//         int a = 0;
//         cout << "Enter edge : ";
//         cin >> a;

//         cout << "Volume of a cube is " << ( a * a * a);

//     }
//     else{
//         cout << "Error. \nRestart code ..." << endl;
//     }


//         return 0;
// }

//<-------- X and Y coordiantes of a point in 2 dimensional space --------->//

// #include <iostream>
// using namespace std;

// int main()
// {
//     float x = 0, y = 0;
//     cout << "X = ";
//     cin >> x;
//     cout << "Y = ";
//     cin >> y;

//     if ( x == 0 && y == 0)
//     {
//         cout << "Origin" <<endl;
//     }
//     else if (x == 0)
//     {
//         cout << "Y-axis" << endl;
//     }
//     else if (y == 0)
//     {
//         cout << "X-axis" << endl;
//     }
//     else if (x < 0 && y < 0)
//     {
//         cout << "3rd quradrant" << endl;
//     }
//     else if (x < 0 && y > 0)
//     {
//         cout << "4th quradrant" << endl;
//     }
//     else if (x > 0 && y < 0)
//     {
//         cout << "2nd quradrant" << endl;
//     }
//     else{
//         cout << "1st quradrant" << endl;
//     }
    

//     return 0;
//}
