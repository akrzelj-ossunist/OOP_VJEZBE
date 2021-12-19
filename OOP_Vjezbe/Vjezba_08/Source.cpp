/*1. Napišite klasu timer koja sadrži privatne članove h, m tipa int i s tipa double,
koja predstavlja rezultat u trci Formule 1. Napišite potrebne konstruktore
i operatore kako bi za grupu vozača izračunali:
· prosječnu brzinu svih vozača,
· postignuto vrijeme najbržeg vozača,
· razliku vremena do vremena najbržeg vozača (u sekundama),
· ispisati postignuta vremena u obliku stringa "h:m:s"
Klasa treba imati operatore: +=, -=, +, -, /=, /, <<, operator double
2. Zbog kršenja pravila svi su vozači kažnjejni sa dodatnih m sekundi. Napisati
funkcijski objekt kojim će se postignuto vrijeme vozača povećati za m sekundi.

Pomoć: Za najbržu vožnju koristite funkciju min_element iz <algorithm>. Da bi funkcija ispravno računala 
potrebno je definirati operator<.*/

#include "Header.hpp"

int main() {
    vector<timer> v{ {2, 6, 9.118}, {2, 6, 15.251}, {2, 6, 9.925}, {2, 7, 15.222}, {2, 7, 10.775} };

    // prosjecno vrijeme
    timer avg;
    for (auto t : v)
        avg += t;
    avg /= v.size();
    cout << "avg " << avg << endl;

    // vrijeme najbrzeg (operator<)
    timer tmax = *min_element(v.begin(), v.end());
    cout << "min " << tmax << endl;

    // zaostajanje za vodecim u sekundama
    for (auto& tm : v)
        cout << double(tm - tmax) << endl;

    // penaliziranje vozaca s m sekundi (funkcijski objekt)
    penalty p(5);
    for (auto& tm : v)
        p(tm);
}
