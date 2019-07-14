#include <stdio.h>
#include <stdlib.h>

void f1(unsigned int i) {
	printf("F1: return: %d\n", i);
}

void f2(unsigned int i) {
	printf("F2: return: %d\n", i);
}

void f3(unsigned int i) {
	printf("F3: return: %d\n", i);
}

int main(void)
{
	bool run = true;

	void(*fparray[3])(unsigned int) = 
	{ 
		f1, 
		f2, 
		f3 
	};

	unsigned int uiselected = 0;

	while (run) 
	{
		printf("Funktion 1 - 3:");
		scanf_s("%u", &uiselected);

		if (uiselected > 0 && uiselected < 4) 
		{
			switch (uiselected)
				{
				case 1:
					fparray[0](100u);
					break;
				case 2:
					fparray[1](uiselected);
					break;
				case 3:
					fparray[2](50u);
					break;
				default:
					printf("Houston we have a Problem!!\n");
					break;
				}
		}
		else
		{
			run = false;
		}
	}

	system("PAUSE");
	return 0;
}