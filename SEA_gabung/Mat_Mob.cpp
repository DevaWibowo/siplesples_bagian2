#pragma once
#include "Material.cpp"

class Mat_Mob : public Material{
	private:
		string Nama;
	public:
		Mat_Mob(){
			
		}
};

Mat_Mob* SlimeCondensate = new Mat_Mob();
Mat_Mob* SlimeSecretion = new Mat_Mob();
Mat_Mob* SlimeConcentrate = new Mat_Mob();

//void CraftSlimeSecretion(int jumlah){
//	int JumlahSConden = SlimeCondensate->GetJumlah();
//	int JumlahPerlu = jumlah*3;
//	if(JumlahSConden >= JumlahPerlu){
//		int Sisa = JumlahPerlu % 3;
//		int Hasil = (JumlahPerlu - Sisa) / 3;
//		cout << "Sisa Slime Conden: " << Sisa << endl;
//		cout << "Hasil Slime Secre: " << Hasil << endl;
//		SlimeCondensate->KurangJumlah(JumlahPerlu);
//		SlimeSecretion->TambahJumlah(Hasil);
//	}
//	
//	//SlimeCondensate->KurangJumlah(JumlahPerlu);
//	
////	int JumlahSlimeConden = SlimeCondensate->GetJumlah();
////	if(JumlahSlimeConden >= 3){
////		int Sisa = JumlahSlimeConden % 3;
////		int SlimeSec = (JumlahSlimeConden - Sisa) / 3;
////	}else{
////		cout << "Tidak bisa craft" << endl;
////	}
//
////Mat_Mob SlimeCondensate, SlimeSecretion, SlimeConcentrate;
////Mat_Mob* pSlimeCondensate = &SlimeCondensate;
////Mat_Mob* pSlimeSecretion = &SlimeSecretion;
////Mat_Mob* pSlimeConcentrate = &SlimeConcentrate;
//}
