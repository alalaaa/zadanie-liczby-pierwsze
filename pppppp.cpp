#include <iostream>
#include <fstream>   
using namespace std;
bool pierwsza(int liczba)
{
 ifstream plik;    
  plik.open("a.txt");
 
 ofstream plik2;
 plik2.open("wynik.txt");  
 
 plik>>liczba;
for (int i=2; i<liczba/2; i++)
     if (liczba %i == 0) 
     {
           cout << "z³o¿ona";
           return false;
     }
    cout <<"pierwsza";
   return true;
} 
plik.close();
plik2.close();

int main()
{
   return 0;
}
