#include "Kamus.h"

void DisplayMaterial(){
	cout << PrithivaTopazSilver->GetJumlah() << endl;
	cout << Onikabuto->GetJumlah() << endl;
	cout << SlimeCondensate->GetJumlah() << endl;
};

int main(){
	//PERCOBAAN TAHAP 1: KARAKTER DAN LEVEL UP
	//Deklarasi 1: Pointer digabung dengan objek
	//Karakter* p_A = new Karakter();
//	p_A->GetTier();
	//Karakter *p_A;
	//p_A = new Karakter(1, 0);
	//Deklarasi 2: Membuat objek pointer terlebih dahulu
//	ExpBook *p_EB_A;
	//lalu mengisi nilai pointer dengan objek baru
//	p_EB_A = new ExpBook(500);
	//cout << p_EB_A->GetExp();
//	cout << "Exp Requirement: " << p_A->GetBatasExp();
//	cout << "Level Awal Karakter: " << p_A->GetLevel() << endl;
//	cout << "Exp Awal Karakter: " << p_A->GetExp() << endl;
//	cout << "BatasExp awal karakter: " << p_A->GetBatasExp() << endl;
//	//cout << "Batas exp awal karakter: " << p_A->GetBatasExp() << endl;
//	//Karakter mengonsumsi/menggunakan expbook untuk menambah exp karakter
//	p_A->ConsumeExpBook(*WandererAdvice);
//	cout << "Level karakter setelah menggunakan buku exp: " << p_A->GetLevel() << endl;
//	cout << "Sisa exp karakter: " << p_A->GetExp() << endl;
//	cout << "Batas exp saat in karakter: " << p_A->GetBatasExp() << endl;
//
//	//PERCOBAAN TAHAP 2: KARAKTER DAN LIMIT BREAK
//	p_A->SetLevel(50);
//	Satu->SetLMD(100000);
//	cout << "LMD Awal: " << Satu->GetLMD();
//	cout << p_A->GetTier() << endl;
//	p_A->LimitBreak(p_A->GetLevel());
//	cout << p_A->GetTier() << endl;
//	cout << "LMD Setelah Limit Break 1: " << Satu->GetLMD() << endl;
//	cout << "Level Karakter setelah limit break: " << p_A->GetLevel() << endl;
//	p_A->LimitBreak(p_A->GetLevel());
//	cout << p_A->GetTier() << endl;
//	cout << "LMD Setelah limit break 2 kali: " << Satu->GetLMD() << endl;
	
//	Mat_Mob* pMat_Mob = &Mask;
//	Material* pMaterial = &Spear;
//	pMat_Mob->SetJumlah(10);
//	pMaterial->SetJumlah(10);
//	cout << pMat_Mob->GetJumlah() << endl;
//	cout << pMaterial->GetJumlah() << endl;
	
	PrithivaTopazSilver->SetJumlah(10);
	PrithivaTopazFragment->SetJumlah(1);
	Onikabuto->SetJumlah(10);
	SlimeCondensate->SetJumlah(100);
	SlimeSecretion->SetJumlah(9);
	//CraftSlimeSecretion(11);
	cout << "Topaz Silver: " << PrithivaTopazSilver->GetJumlah() << endl;
	cout << "Topaz Fragment: " << PrithivaTopazFragment->GetJumlah() << endl;
	CraftMaterial(*PrithivaTopazSilver, *PrithivaTopazFragment, 2);
	cout << "Topaz Silver: " << PrithivaTopazSilver->GetJumlah() << endl;
	cout << "Topaz Fragment: " << PrithivaTopazFragment->GetJumlah() << endl;
	Karakter* Itto = new Karakter();
//	cout << Itto->GetAscend() << endl;
//	DisplayMaterial();
//	Itto->AscendChar(
//		*PrithivaTopazSilver, 
//		*PrithivaTopazFragment, 
//		*PrithivaTopazChunk, 
//		*PrithivaTopazGemstone, 
//		*GoldenWolf, 
//		*Onikabuto, 
//		*SlimeCondensate, 
//		*SlimeSecretion, 
//		*SlimeConcentrate
//	);
//	DisplayMaterial();
	
	
//	cout << Itto->GetAscend() << endl;
	
	return 0;
}
