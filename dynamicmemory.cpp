#include <iostream>
using namespace std;

int main() {
    // ASK THE USER FOR THREE INTEGERS
    int x, y, z;
    cout << "Enter Three Integers Separatied With Spaces: ";
    cin >> x >> y >> z;

    // DYNAMICALLY ALLOCATE MEMORY FOR THREE INTEGERS
    int* px = new int(x); // DYNAMICALLY ALLOCATE MEMORY FOR x
    int* py = new int(y); // DYNAMICALLY ALLOCATE MEMORY FOR y
    int* pz = new int(z); // DYNAMICALLY ALLOCATE MEMORY FOR z

    // DISPLAY THE CONTENTS OF THE VARIABLES
    cout << "\nThe Values Entered Are:\n";
    cout << "x = " << x << '\n';
    cout << "y = " << y << '\n';\
    cout << "z = " << z << '\n';

    // DISPLAY THE VALUES BASED ON POINTERS
    cout << "\nThe Values Based On Pointers Are:\n";
    cout << "*px = " << *px << " (address: " << px << ")\n";
    cout << "*py = " << *py << " (address: " << py << ")\n";
    cout << "*pz = " << *pz << " (address: " << pz << ")\n";

    // CLEAN UP THE MEMORY ALLOCATED FOR x, y, and z
    delete px; // FREE THE MEMORY ALLOCATED FOR x
    delete py; // FREE THE MEMORY ALLOCATED FOR y
    delete pz; // FREE THE MEMORY ALLOCATED FOR z

    px = py = pz = nullptr; // SET POINTERS TO NULL

    return 0;
}