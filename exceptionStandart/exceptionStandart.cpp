#include <iostream>
#include <exception> //menyertakan library exception
#include <array> //menyertkan library array
using namespace std;


int main()
{
    
    cout << "Awal program" << endl; //penanda 1
	try
	{
		//deklarasi array data dengan panjang index 3
		array <int, 3> data = { 1, 2, 3 };
	}
	catch (const std::exception&)
	{

	}

}
