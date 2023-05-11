
#include <iostream>
#include <string>
#include <fstream>
#include <vector>


using namespace std;

void print(std::string val);
void print(int* val, int uk);
void minimal(int arr[], int len);

struct Tree {
	std::string name;
	int age;
	bool is_alive;
	float height;

	void get_info() {
		std::cout << name << std::endl;
	}
};

 enum Options {
	sedan
};


 class Car {
 public: 
	 string model;
	 Options type;

	 void get_info() {
		 cout << model;
	 }
 };
 

void main()
{
	setlocale(LC_ALL, "RU");

	//Типы днных
	// Все это многообразие числовых переменных нужно для оптимизации и экономии места, под разный тип выделяется разное количество объема памяти

	//unsigned - ключевое слове unsigned повзоляет переопределить контейнер для хранения данных у переменной, убрать возможность хранить
	//отрицательные числа в переменной, тем самым мы создаем возможность хранить в переменной положительное число в 2 раза больше чем оно изначально 
	//предоставляла

	int it = 2; //хранит число от 2млрд до 2млрд 4 байта
	unsigned short sh = 7; //хрант от -32к до 32к 2 байта, т.к unsigned можем хранить от 0 до 65к
	long lg = 66; //хранит числа сверх гигантские 8 байтов


	// число с точкой 
	float fl = 72.222222f; // Занимает 4 байта
	double dbl = 99.1112312f; // Занимает 8 байт
	long double lgdbl = 453453.34534534; // Занимает не менее 8 байт 

	// Символьные переменные 
	char ch = '$';

	// Логический тип
	bool bol = true;

	// Ссылки 
	int num = 10;
	// С помощью & можно указывть что присвоенное значение мы определяем как ссылку, то есть мы ссылаемся на переменную num. Смысл тут в том что
	// благодоря таким записи мы освободили из ОЗУ 4байта т.к в num2 храниться уже не значение а ссылка на num
	int &num2 = num;

	// Указатели
	int val = 1432422;
	int* ptrval = &val;

	//arr[] = { 1, 4, 5, 2, 2 };
	//minimal(arr, 4);


	// Работа с файлами
	/* ofstream file("test.txt", ios_base::out);
	if (file.is_open()) {
		file << "Hello World";
		file.close();
	}

	ifstream file("test.txt");
	if (file.is_open()) {
		char temp[100];
		file.getline(temp, 100);
		cout << temp;
		file.close();
	}*/

	Car newCar;
	newCar.model = "Some";
	newCar.type = Options::sedan;
	newCar.get_info();
}


void print(std::string val) {
	std::cout << val << std::endl;
}

void print(int val) {
	std::cout << val << std::endl;
}

void minimal(int* arr, int len) {
	int min = *arr;

	for (int i = 0; i < len; i++) {
		if (min > *(arr + i)) {
			min = *(arr + i);
		}
	}
	print(min);
}
