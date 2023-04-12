#include "Karakter.cpp"
#include "ExpBook.cpp"

int main(){
	Karakter* Itto = new Karakter();
	// INIT
	Itto->Display();
	Itto->SetLevel(20);
	Itto->Display();
	Itto->SetAscend(1);
	Itto->Display();
	
	return 0;
}
