
#include <iostream>
using namespace std;

int main() {
    int s = 7;
    float d = 5.8;
    char c = 'D';
    bool p = true;
    
    float sf = (float)s;  
    int di = (int)d;       

    int ci = c;            
    int pi = p;            

    cout << "Original steps (int): " << s << endl;
    cout << "Steps as float: " << sf << endl;
    cout << "Original distance (float): " << d << endl;
    cout << "Distance as int: " << di << endl;
    cout << "Original clue (char): " << c << endl;
    cout << "Clue as ASCII: " << ci << endl;
    cout << "Is path clear (bool): " << p << endl;
    cout << "Path as int: " << pi << endl;

    return 0;
}
