#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <locale.h> 

int main(void) {
	setlocale(LC_ALL, ".UTF-8");
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	// Оголошення та обов'язкова ініціалізація змінних
	double x = 0, y = 0, z = 0;
	double a = 0, b = 0, c = 0, d = 0, f = 0;
	double R = 0;
	double v0 = 0, t = 0;

	double res27 = 0;
	double res34 = 0;
	double res53 = 0;
	double res30 = 0;
	double res31 = 0;

	// Введення початкових даних

	printf("Введіть x, y, z: ");
	scanf("%lf %lf %lf", &x, &y, &z);

	printf("Введіть a, b, c, d, f:");
	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &f);

	printf("Введіть R: ");
		scanf("%lf", &R);

	printf("Введіть v0, t: ");
	scanf("%lf %lf", &v0, &t);

	// Завдання 27:  (cos^2(x) / sin(x)) - xyz + (a*x^2 + b*x + c) / (d*x^3 - f)

	double denom1 = sin(x);
	double denom2 = d * pow(x, 3) - f;

	if (denom1 == 0) {
		printf("Завдання 27 (res27): Помилка ОДЗ (sin(x) = 0)\n");
	}
	else if (denom2 == 0) {
		printf("Завдання 27 (res27): Помилка ОДЗ (знаменник = 0)\n");
	}
	else {
		res27 = (pow(cos(x), 2) / denom1) - (x * y * z) + ((a * x * x + b * x + c) / denom2);
		printf("Завдання 27 (res27): %.3f\n", res27);
	}

	// Завдання 34: 3 * x * R / pi^3
	res34 = (3 * x * R) / (M_PI * M_PI * M_PI);
		printf("Завдання 34 (res34): %.3f\n", res34);

		// завдання 53: 1 / sin(x) + |x - 3|
		if (sin(x) == 0) {
			printf("Завдання 53 (res53): Помилка ОДЗ (sin(x) = 0)\n");
		}
		else {
			res53 = (1 / sin(x)) + fabs(x - 3);
			printf("Завдання 53 (res53): %.3f\n", res53);
		}
	// Задание 30: v0 * t + (a * t^2) / 2
	res30 = v0 * t + (a * t * t) / 2;
	printf("Завдання 30 (res30): %.3f\n", res30);

	// Завдання 31: sqrt(|sin(x)|) / (x - pi)
	double denom31 = x - M_PI;
	if (denom31 == 0) {
		printf("Завдання 31 (res31): Помилка ОДЗ (x - pi = 0)\n");
	}
	else {
		// |sin(x)| завжди >= 0, тому під корінням від'ємного числа не буде
		res31 = sqrt(fabs(sin(x))) / denom31;
		printf("Завдання 31 (res31): %.3f\n", res31);
	}
	return 0;
}