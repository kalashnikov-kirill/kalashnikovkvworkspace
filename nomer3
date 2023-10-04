#include <iostream>
#include <iomanip>
#include <cmath>

// брал различные элементы кода с Хабра, Гитхаба и Стака, за все могу пояснить :)
using namespace std;
float result = 0;
const float PI = 3.14159265;
//1 пример
float mathematics_1(float x) {
	result = pow(x, 3) + 2 * pow(x, 2) - 3 * x - 7;
	return result;
}
//2 пример
float mathematics_2(float x) {
	result = sin(x * PI / 180) * sin(x * PI / 180) + cos(x * PI / 180) - 7;
	return result;
}
//3 пример
float mathematics_3(float x) {
	result = exp(x) + log(x);
	return result;
}
//4 пример
float mathematics_4(float x) {
	result = sqrt(pow(x, 3)) + pow(sin(x * PI / 180), 2) + exp(-x);
	return result;
}

int main() {
	setlocale(LC_ALL, "RUSSIAN"); //ставим русский язык для программы
	float number;
	cout << "Для того, чтобы провести вычисления - пожалуйста, введите значение переменной 'X':\n";
	cout << "1) f(x) = x^3 + 2*x^2 - 3*x - 7\n" << "2) f(x) = sin^2(x) + cos(x) - 7\n" << "3) f(x) = e^x + ln(x)\n" << "4) f(x) = x^(3/2) + sin(x)^2 + e^(-x)\n";
	cin >> number;
	cout << fixed << setprecision(3); //по условию - ответ выводить с точностью до 3 знаков после запятой
	cout << "1) f(" << number << ") = " << mathematics_1(number) << endl; //выводим 1 пример
	cout << "2) f(" << number << ") = " << mathematics_2(number) << endl; //выводим 2 пример
	cout << "3) f(" << number << ") = " << mathematics_3(number) << endl; //выводим 3 пример
	cout << "4) f(" << number << ") = " << mathematics_4(number) << endl; //выводим 4 пример
}
