#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, x1, y1 = 0, x2 = 0, y2, zx, zy;
    int k,c,i;
    vector <int> numbers(2);
    vector <int> iks(2);
    vector <int> igrik(2);
    vector <int> del(0);
    cin >> a >> b;    
    if (b == 0) {
        cout << "b ne ravno 0";
        cin >> b;
    }    
    if (a > 0) {
        x1 = 1;
    }
    else {
        x1 = -1;
    }
    if (b > 0) {
        y2 = 1;
    }
    else {
        y2 = -1;
    }
    b = abs(b);
    zx = x2;
    zy = y2;
    numbers.at(0) = a;
    numbers.at(1) = b;
    iks.at(0) = x1;
    iks.at(1) = x2;
    igrik.at(0) = y1;
    igrik.at(1) = y2;
    while (true)
    {
        if (b != 0) {
            k = abs(a / b);
        }        
        del.push_back(k);        
        x2 = x1 - k * x2;
        y2 = y1 - k * y2;
        x1 = zx;
        y1 = zy;
        zx = x2;
        zy = y2;
        if (b != 0) {
            c = a % b;
            a = b;
            b = c;
        }       
        iks.push_back(x2);
        igrik.push_back(y2);
        numbers.push_back(c);
        if (c == 0) {
            break;
        }
    }
    cout << " ";
   for (i = 0; i < numbers.size(); i++) {
       cout<<setw(10) << numbers[i]<< "|";
   } 
   cout << endl<<setw(12)<<"|"<<setw(11)<<"|";

   for (int i = 0; i < del.size(); i++) {
       cout << setw(10) << del[i] << "|";
   }
   cout << endl << "x";
   for (int i = 0; i < iks.size(); i++) {
       cout << setw(10) << iks[i] << "|";
   }
   cout << endl << "y";
   for (int i = 0; i < igrik.size(); i++) {
       cout << setw(10) << igrik[i] << "|";
   }
}

