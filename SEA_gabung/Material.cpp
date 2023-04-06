#pragma once
#include "Material.h"

Material::Material(){
	
}
void Material::TambahJumlah(int jumlah){
	this->Jumlah += jumlah;
}
void Material::KurangJumlah(int jumlah){
	this->Jumlah -= jumlah;
}
int Material::GetJumlah(){
	return this->Jumlah;
}
void Material::SetJumlah(int jumlah){
	this->Jumlah = jumlah;
}
