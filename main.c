//������� ����.
#include <stdio.h>
#include <stdlib.h>

#define ar 100

//int main(int argc, char* argv[])
int main()
{

	float arr[ar]={0.00000,1.00000,0.86603,0.70711,
					0.58779,0.50000,0.43388,0.38268,
					0.34202,0.30902,0.28173,0.25782,
					0.23932,0.22252,0.20791,0.19509,
					0.18375,0.17365,0.16459,0.15643,
					0.14904,0.14231,0.13617,0.13053,
					0.12533,0.12054,0.11609,0.11196,
					0.10812,0.10453,0.10117,0.09802,
					0.09506,0.09227,0.08964,0.08716,
					0.08481,0.08258,0.08047,0.07846,
					0.07655,0.07473,0.07300,0.07134,
					0.06976,0.06824,0.06679,0.06540,
					0.06407,0.06279,0.06156,0.06038,
					0.05924,0.05814,0.05709,0.05607,
					0.05509,0.05414,0.05322,0.05234,
					0.05148,0.05065,0.04985,0.04907,
					0.04831,0.04758,0.04687,0.04618,
					0.04551,0.04486,0.04423,0.04362,
					0.04302,0.04244,0.04188,0.04132,
					0.04079,0.04027,0.03976,0.03926,
					0.03878,0.03830,0.03784,0.03739,
					0.03693,0.03652,0.03610,0.03559,
					0.03529,0.03490,0.03452,0.03414,
					0.03377,0.03341,0.03306,0.03272,
					0.03238,0.03205,0.03173,0.03141};




	float diametr;
	printf("Enter diametr:    ");
	scanf("%f", &diametr);
	printf("Quantity 1...100: ");
	//-------------------------


	float Quantity;
	scanf("%f", &Quantity);
	int i=Quantity;
	float *a= arr+(i-1);
	float j=*a;

	float total=j*diametr;

	printf("Total:            %.2f\r\n\r\n\r\n", total);

	system ("pause");


	//--------------------------


    return 0;
}














