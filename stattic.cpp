#include <iostream>

using namespace std;

// mendefinisikan fungsi test ()
void test()
{
    static int a{0};                   // inisialisasi variabel statik a dengan nilai 0
    a++;                               // Menaikkan  nilai a dengan 1
    cout << "Nilai a = " << a << endl; // menampilkan nilai a
}

int main()
{
    // memanggil fungsi test() sebanyak 5 kali
    cout << "Pemanggil pertama " << endl;
    test();
    cout << "Pemanggil kedua " << endl;
    test();
    cout << "Pemanggil ketiga " << endl;
    test();
    cout << "Pemanggil keempat " << endl;
    test();
    cout << "Pemanggil kelima " << endl;
    test();
    return 0;
}
