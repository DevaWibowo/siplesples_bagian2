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
//Mat_Mob SlimeCondensate, SlimeSecretion, SlimeConcentrate;
//Mat_Mob* pSlimeCondensate = &SlimeCondensate;
//Mat_Mob* pSlimeSecretion = &SlimeSecretion;
//Mat_Mob* pSlimeConcentrate = &SlimeConcentrate;
