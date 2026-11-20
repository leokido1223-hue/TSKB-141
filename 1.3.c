#include <stdio.h>
#include <math.h>

/**
 * @brief Вычисляет расстояние между центрами шара
 * @param G - гравитационная сила
 * @param F - сила тяготения
 * @param m - масса одного шара
 * @return Рассчитанное значение
 */
double GetDistance(const double G, const double F, const double m);

/**
 * @brief Считывает с клавиатуры значение
 * @return Считанное значение
 */
double GetValue();

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
	double G = 6.67 * pow(10,-11);
	double m = GetValue();
	double F = pow(10,-5) * GetValue();
	printf("Distance=%lf", GetDistance(G, F, m));
	return 0;
}


double GetValue()
{
	double value=0;
	scanf("%lf", &value);
	return value;
}

double GetDistance(const double G, const double F, const double m)
{
	double r = sqrt(G*m*m*1000000*F);
	return r;
}
