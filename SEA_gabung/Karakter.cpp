#pragma once
#include "Karakter.h"
#include "Akun.cpp"

vector<int> vBatasExp = { 1000,1325,1700,2150,2625,3150,3725,4350,5000,5700,6450,7225,8050,8925,9825,10750,11725,12725,13775,14875,16800,18000,19250,20550,21875,23250,24650,26100,27575,29100 };
vector<int> vAscend = { 0, 1, 2, 3, 4, 5, 6 };
vector<int> vLimit = { 20, 40, 50, 60, 70, 80, 90};

void Karakter::AscendChar(){
	int AscendC = this->GetAscend();
	if(AscendC < 6){
		this->Ascend++;
	}
}

// IMPLEMENTASI CONSTRUCTOR
Karakter::Karakter(){
	
}

// IMPLEMENTASI METHOD SETTER
void Karakter::SetNama(string nama){
	this->Nama = nama;
}
void Karakter::SetHealthPoint(double hp){
	this->HealthPoint = hp;
}
void Karakter::SetExp(int exp){
	this->Experience = exp;
}
void Karakter::SetLevel(int level){
	this->Level = level;
}
void Karakter::SetLimitLevel(int limit){
	this->LimitLevel = limit;
}
void Karakter::SetAscend(int ascend){
	this->Ascend = ascend;
}

// IMPLEMENTASI METHOD GETTER
string Karakter::GetNama(){
	return this->Nama;
}
double Karakter::GetHealthPoint(){
	return this->HealthPoint;
}
int Karakter::GetBatasExpV(){
	int Level = this->GetLevel();
	return vBatasExp[Level-1];
}
int Karakter::GetExp(){
	return this->Experience;
}
int Karakter::GetBatasExp(){
	return this->BatasExp;
}
int const Karakter::GetLevel(){
	return this->Level;
}
int Karakter::GetTier(){
	return this->Tier;
//	int tier = this->Tier;
//	switch(tier){
//		case 0:
//			cout << "Tier 0" << endl;
//			break;
//		case 1:
//			cout << "Tier 1" << endl;
//			break;
//		case 2:
//			cout << "Tier 2" << endl;
//			break;
//	}
}
int Karakter::GetAscend(){
	return this->Ascend;
}
int Karakter::GetLimitLevel(){
	int ascend = this->GetAscend();
	return vLimit[ascend];
}

// IMPLEMENTASI METHOD TAMBAH PROPERTI
void Karakter::TambahHealthPoint(double hp){
	this->HealthPoint += hp;
}
void Karakter::TambahAllHealthPoint(double hp){
	this->HealthPoint += hp;
}
void Karakter::TambahLevel(){
	this->Level++;
}

// IMPLEMENTASI METHOD SKILL
void Karakter::HealTarget(Karakter *karakter){
	double hp = this->GetHealthPoint() * 0.5;
	karakter->HealthPoint += hp;
}
void Karakter::HealTeam(Karakter *karakter[], int size){
	double hp = this->GetHealthPoint() * 0.2;
	for(int i = 0; i < size; i++){
		karakter[i]->HealthPoint += hp;
	}
	cout << endl;
}

// IMPLEMENTASI METHOD CETAK VEKTOR
void Karakter::PrintArray(int arr[], int size){
	for(int i = 0; i < size; i++){
		cout << arr[i] << ' ';
	}
	cout << endl;
}
void Karakter::PrintArray(string arr[], int size){
	for(int i = 0; i < size; i++){
		cout << arr[i] << ' ';
	}
	cout << endl;
}

// IMPLEMENTASI METHOD GROWTH
void Karakter::ConsumeExpBook(ExpBook& buku, int amount){
	int ExpChar = this->GetExp();
	int LevelChar = this->GetLevel();
	int Limit = this->GetLimitLevel();
	if(LevelChar < 90){
		if(LevelChar != Limit){
			int JumlahBuku = buku.GetJumlah();
			if(JumlahBuku >= 0 && amount <= JumlahBuku){
				int ExpBuku = buku.GetExp() * amount;
				int TotalExp = ExpChar + ExpBuku;
				int Batas = this->GetBatasExpV();
				
				if(TotalExp < Batas){
					this->SetExp(TotalExp);
				}else{
					while(TotalExp >= Batas){
						if(Level != Limit){
							if(TotalExp >= Batas){
								this->Level++;
								TotalExp -= Batas;
								this->SetExp(TotalExp);
								Batas = this->GetBatasExpV();
								if(Level == Limit){
									this->SetExp(0);
								}
							}
						}
					}
				}
			}
		}
	}
}
void Karakter::LevelUp(){
	int Exp, Batas;
	Exp = this->GetExp();
	Batas = this->GetBatasExpV();
	while(Exp >= Batas){
		this->Level++;
		Exp -= Batas;
		if(Exp <= 0){
			this->SetExp(0);
		}
		//cout << this->GetExp() << endl;
		vBatasExp.erase(vBatasExp.begin());
	}
}
void Karakter::LimitBreak(int level, Material tier1, Material tier2){
	string pesan = "Tidak bisa Limit Break!!";
	int lmd = Satu->GetLMD(), biaya = 50000;
	if(level != 50){
		cout << pesan << endl;
		cout << "Level tidak mencukupi" << endl;
	}else{
		if(lmd < biaya){
			cout << pesan << endl;
			cout << "LMD tidak mencukupi!!" << endl;
		}else{
			if(this->GetTier() == 2){
				cout << pesan << endl;
				cout << "Karakter sudah mencapai tingkatan tertinggi!!" << endl;
			}else{
				this->Tier++;
				this->Level = 0;
				Satu->SetLMD(lmd - biaya);
			}
		}
	}
	
}

// IMPLEMENTASI METHOD CETAK
void Karakter::CetakExp(){
	cout << "Exp Karakter: " << this->GetExp() << endl;
}
void Karakter::CetakBatasExp(vector<int> vector){
	for(int i : vector){
		cout << i << endl;
	}
//	for(int i = 0; i < vector.size(); i++){
//		cout << vector[i] << endl;
//	}
}
void Karakter::CetakLv(){
	cout << "Level Karakter: " << this->GetLevel() << endl;
}
void Karakter::CetakHP(){
	cout << "HealthPoint Karakter: " << this->GetHealthPoint() << endl;
}
void Karakter::CetakTier(){
	cout << "Tier Karakter: " << this->GetTier() << endl;
}
void Karakter::CetakNama(){
	cout << "Nama Karakter: " << this->GetNama() << endl;
}
void Karakter::CetakBatasExp(){
	cout << "Batas Exp Karakter: " << this->GetBatasExpV() << endl;
}
void Karakter::Display(){
	cout << "Level Karakter      : " << this->GetLevel() << endl;
	cout << "Ascend Tier Karakter: " << this->GetAscend() << endl;
	cout << "Limit Level Karakter: " << this->GetLimitLevel() << endl;
	cout << "Batas Exp Karakter  : " << this->GetBatasExpV() << endl;
//	cout << "EXP Karakter  : " << this->GetExp() << endl;

	cout << endl;
}


