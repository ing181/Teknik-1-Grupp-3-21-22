// Vi tar med iostrem
// iostream behövs för att något
// ska kunna skrivas ut på skärmen.
// koden i iostrem används.
#include <iostream>
//  namespace se "tavelbilder"
using namespace std;

// Här startar programmet
int main()
{
    // cout är skärmen
    // << kallas utmatningsoperator
    // endl betyder ny rad
    // "Hello word" matas ut på skärmen följt av ny rad
    cout << "Hello world!" << endl;
   // cout << 5/0 << endl; Här avbryts programmet!
    // Här avslutas programmet
    return 0; // Om allt går bra, avslutas programmet här
}
