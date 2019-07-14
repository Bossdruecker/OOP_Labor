#include "Complex.h"
#include <stdio.h>
#include <stdlib.h>

void main() {
	Complex L1(0.0, 100.0);
	Complex L2(0.0, 100.0);
	Complex L3(0.0, 50.0);

	Complex C1(0.0, -100.0);
	Complex C2(0.0, -100);

	Complex R1(50.0, 0.0); 
	Complex R2(50.0, 0.0); 
	Complex R3(100.0, 0.0); 
	Complex R4(200.0, 0.0);

	Complex L1R1 = L1 + R1;
	Complex C1R2 = C1 + R2;

	Complex L1R1C1R2 = (L1R1 * C1R2) / (L1R1 + C1R2);

	Complex R3L3C2 = R3 + L3 + C2;
	Complex L2R4 = L2 + R4;

	Complex R3L3C2L2R4 = (R3L3C2 * L2R4) / (R3L3C2 + L2R4);

	Complex L1R1C1R2R3L3C2L2R4 = L1R1C1R2 + R3L3C2L2R4;
	//L1R1C1R2R3L3C2L2R4.print();
	std::cout << L1R1C1R2R3L3C2L2R4 << std::endl;

	Complex CopyComplex(L1R1C1R2R3L3C2L2R4);
	std::cout << CopyComplex << std::endl;

	Complex* pComplex = new Complex(L1R1C1R2R3L3C2L2R4);
	std::cout << *pComplex << std::endl;

	system("pause");
}