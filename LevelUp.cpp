#include "Karakter.cpp"
#include "ExpBook.cpp"

int main(){
	Karakter* Arataki = new Karakter();
	ExpBook* HeroWit = new ExpBook(1, "Hero's Wit", 20000);
	Arataki->SetLevel(20);
	HeroWit->SetJumlah(5);
	
	// STATISTIK KARAKTER SEBELUM MENGGUNAKAN BUKU EXP
	Arataki->Display();
	HeroWit->CetakJumlah();
	Arataki->ConsumeExpBook(*HeroWit, 1);
	
	// STATISTIK KARAKTER SETELAH MENGGUNAKAN BUKU EXP
	Arataki->Display();
	HeroWit->CetakJumlah();
	return 0;
}
