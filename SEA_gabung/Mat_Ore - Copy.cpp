#include "Material.cpp"

class Mat_Ore : public Material{
	private:
		int Exp;
	public:
		Mat_Ore(int exp) : Exp(exp){
			
		}
};

Mat_Ore* OreTier1 = new Mat_Ore(100);
