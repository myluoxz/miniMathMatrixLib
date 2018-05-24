#include<iostream>
#include"myMatrix.h"

using namespace std;

int main()
{
	Matrix_t mat=create_mat(4,4);
	float data[16] = { 1, 2, 3, 4,
						2, 1, 4, 5,
						5, 4, 3, 5,
						7, 6, 5, 4 };
	set_mat_data(&mat, data);
	show_mat("mat", &mat);
	Matrix_t inv_mat=inverse_mat(&mat);
	show_mat("inv_mat", &inv_mat);

	system("pause");
	return 0;
}