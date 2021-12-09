/*1. Definirajte klasu Board koja će služiti kao okvir za iscrtavanje znakova.
Board je matrica čije se dimenzije zadaju u konstruktoru, a za koju se memorija alocira na heapu. Board ima rub koji se sastoji od nekog znaka koji je
određen u konstruktoru.
· Napišite defaultni konstruktor, copy konstruktor, move konstruktor,
konstruktor s argumentima i destruktor.
· Definirajte strukturu Point koja ima dva člana x i y tipa double, gdje
su x i y vrijednosti manje od dimenzije matrice.
· Napišite member funkciju draw_char koja za točku p i znak ch postavlja znak ch na odgovarajućem mjestu u matrici (x-koordinata odgovara
retku matrice, a y-koordinata stupcu). Ako koordinate točke p nisu
cjelobrojne, zaokružite ih na najbližu cjelobrojnu vrijednost.
· Napišite member funkciju draw_up_line koja počevši od točke p postavlja znak ch na svim poljima koja predstavljaju okomitu liniju prema
gore.
· Napišite member funkciju draw_line koja za dvije točke p1 i p2 postavlja
znak ch na svim poljima koje predstavljaju liniju između te dvije točke.
· Napišite member funkciju koja iscrtava trenutno stanje Boarda.
Primjer: Sljedeći kod iscrtava sliku desno.                    oooooooooooooooooooo
															   o                  o
Point p1(2,2), p2(8, 8), p3(2,8),                              o x                o
p4(16, 8);                                                     o  x               o
Board b(20, 10);                                               o   x              o
b.draw_line(p1, p2, 'x');                                      o    x             o
b.draw_line(p3, p4, 'x');                                      o     x            o
b.display();                                                   o      x           o
															   o xxxxxxxxxxxxxxx  o
															   oooooooooooooooooooo
*/

#include "Header.hpp"


void main()
{
	Point p1(2, 8), p2(16, 8), p3(2, 2), p4(8, 8), p5 = p1; 
	Board b(10, 20); 
	b.draw_char(p1, 'x');
	b.draw_line(p5, p2, 'x');   
	b.draw_up_line(p3, p4, 'x');
	b.display();
}