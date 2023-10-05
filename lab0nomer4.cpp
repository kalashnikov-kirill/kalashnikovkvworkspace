//в ходе выполнения лабораторной пользовался:
//  https://metanit.com/cpp/tutorial
//  https://math.spbu.ru/user/dlebedin/funcs.pdf
//  https://learn.microsoft.com/ru-ru/troubleshoot/developer/visualstudio/cpp/libraries/trigonometry-stl-functions
//  https://ejudge.179.ru/tasks/cpp/total/132.html
#include <cmath>

#include <iostream>

#define _USE_MATH_DEFINES

#include <iomanip>
//cos a ^ 2 * ((a + b) ^ 3 - cos^2 (a ^ 2 + b))/(sqrt(sin^2 b + cos^2 ((pi - a) ^ 3)))
//cos(num_a^2) * (pow(num_a + num_b, 3) - cos(num_a^2 + num_b)^2 / (sqrt(sin(num_b)^2) + (cos(M_PI - num_a)^2)^3))
using namespace std;

// Общий вид интропретируемого выражения:
//cos a ^ 2 * ((a + b) ^ 3 - cos^2 (a ^ 2 + b))/(sqrt(sin^2 b + cos^2 ((pi - a) ^ 3)))

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Вас приветствует Калькулятор данного выражения -  cos a ^ 2 * ((a + b) ^ 3 - cos^2 (a ^ 2 + b))/(sqrt(sin^2 b + cos^2 ((pi - a) ^ 3)))" << endl;
	cout << "От вас требуется указать значения переменных a и b." << endl << "Введите значения переменных: " << endl;
	long double num_a, num_b, numsum3, cos_a1b, cos_a2b, temp1, sin2b, cos1pi, cos2pi, temp2, temp3, cosin, temp_finale;
	cin >> num_a >> num_b;
	const double pi = 3.141592653589793;
	// Разберем код на подзадачи. Сначала -   (pow(num_a + num_b, 3) - cos(num_a^2 + num_b)^2                                                     
	numsum3 = pow(num_a + num_b, 3);
	cos_a1b = (pow(num_a, 2) + num_b);
	cos_a2b = pow(cos(cos_a1b), 2);
	temp1 = numsum3 - cos_a2b;
	// Перейдём к следующему действию: (sqrt(sin(num_b)^2) + (cos(M_PI - num_a)^2)^3))
	sin2b = pow(sin(num_b), 2);
	cos1pi = pow((pi - num_a), 3);
	cos2pi = pow(cos(cos1pi), 2);
	temp2 = sqrt(sin2b + cos2pi);
	// Дальше: (pow(num_a + num_b, 3) - cos(num_a^2 + num_b)^2 / (sqrt(sin(num_b)^2) + (cos(M_PI - num_a)^2)^3))
	temp3 = temp1 / temp2;
	cosin = pow(cos(num_a), 2);
	temp_finale = cosin * temp3;
	cout << "Расчёты по формулам возвращают значения: ";
	cout << fixed << setprecision(4) << temp_finale;
	// финал cos(num_a^2) * (pow(num_a + num_b, 3) - cos(num_a^2 + num_b)^2 / (sqrt(sin(num_b)^2) + (cos(M_PI - num_a)^2)^3))
}
