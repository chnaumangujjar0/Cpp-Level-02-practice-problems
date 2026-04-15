#include <iostream>
using namespace std;

void countdown(int a,int b) {
    if (a == 10 && b == 15 ) {
        cout << "GO!" << endl;
        return;   // stop here, don't call again
    }
    
    // RECURSIVE CASE — print, then solve smaller problem
    cout << a <<" "<<b<< endl;
    countdown(a + 1,b+1);   // call myself with a-1 (smaller problem)
}

int main() {
    countdown(5,10);
    return 0;
}