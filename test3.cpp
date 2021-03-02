#include <iostream>
#include <cstring>
using namespace std;
// Tworzenie obiektow klasy (tu: pracownik)
class pracownik {
public:
 char imie_nazwisko[64];
 long ident_prac;
 float pensja;
 void inf_o_prac(void) {
 cout << "Imie i nazwisko: " << imie_nazwisko << endl;
 cout << "Identyfikator: " << ident_prac << endl;
 cout << "Pensja: " << pensja << endl;
 };
};
int main(void) {
 pracownik kierownik, sekretarka;
 strcpy (kierownik.imie_nazwisko, "Jan Kowalski");
 kierownik.ident_prac = 101;
 kierownik.pensja = 8400;
 strcpy (sekretarka.imie_nazwisko, "Balbina Wykrot");
 sekretarka.ident_prac = 1234567;
 sekretarka.pensja = 3000;
 kierownik.inf_o_prac();
 sekretarka.inf_o_prac();
}