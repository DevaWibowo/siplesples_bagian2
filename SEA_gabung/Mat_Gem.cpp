#pragma once
#include "Material.cpp"
#include <vector>

class Mat_Gem : public Material{
	private:
	public:
		Mat_Gem(){
			
		}
};

// GEO GEM
Mat_Gem* PrithivaTopazSilver = new Mat_Gem();
Mat_Gem* PrithivaTopazFragment = new Mat_Gem();
Mat_Gem* PrithivaTopazChunk = new Mat_Gem();
Mat_Gem* PrithivaTopazGemstone = new Mat_Gem();

//Mat_Gem
//PrithivaTopazSilver,
//PrithivaTopazFragment,
//PrithivaTopazChunk,
//PrithivaTopazGemstone;

//Mat_Gem* pMatGemGeoSilver = &PrithivaTopazSilver;
//Mat_Gem* pMatGemGeoFragment = &PrithivaTopazFragment;
//Mat_Gem* pMatGemGeoChunk = &PrithivaTopazChunk;
//Mat_Gem* pMatGemGeoGemstone = &PrithivaTopazGemstone;

//vector<Mat_Gem> vMatGem = { PrithivaTopazSilver, PrithivaTopazFragment, PrithivaTopazChunk, PrithivaTopazGemstone };
//
//Mat_Gem* pMatGemTier2 = &vMatGem[0];
//Mat_Gem* pMatGemTier3 = &vMatGem[1];
//Mat_Gem* pMatGemTier4 = &vMatGem[2];
//Mat_Gem* pMatGemTier5 = &vMatGem[3];
