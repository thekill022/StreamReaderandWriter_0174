#include <iostream>
#include <fstream> //menyertakan library fstream
#include <string>  //menyertakan library string
using namespace std;

int main()
{

    //deklarasi variabel baris untuk menyimpan data string
    string baris;

    //membuka file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis file
    while (true)
    {

        cout << "- ";
        //mendapat setiap karakter dalam satu baris
        getline(cin, baris);
        //kondisi false jika baris hanya berisi  karakter q
        if (baris == "q") break;
        
    }
    
}
