// 001.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Просто Hello World
/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "Hello World!"
        <<endl;
    system("pause");
    return 0;
}
*/
//Домашнее задание 1
//ЗАДАНИЕ 1
//Напишите программу, которая выводила бы на экран
//текстовую таблицу(используйте escape - последовательности) :
/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "=================================================================================" << "\n"
        << "|" << "\tX" << "\t|" << "\tY" << "\t|" << "\tX AND Y" << "\t|" << "\tX OR Y" << "\t|" << "\tNOT X" << "\t|" << "\n"
        << "=================================================================================" << "\n"
        << "|" << "\t0" << "\t|" << "\t0" << "\t|" << "\t0" << "\t|" << "\t0" << "\t|" << "\t1" << "\t|" << "\n"
        << "|" << "\t0" << "\t|" << "\t1" << "\t|" << "\t0" << "\t|" << "\t1" << "\t|" << "\t1" << "\t|" << "\n"
        << "|" << "\t0" << "\t|" << "\t0" << "\t|" << "\t1" << "\t|" << "\t1" << "\t|" << "\t1" << "\t|" << "\n"
        << "|" << "\t1" << "\t|" << "\t1" << "\t|" << "\t1" << "\t|" << "\t0" << "\t|" << "\t0" << "\t|" << "\n"
        << "=================================================================================" << "\n";
    system("pause");
    return 0;
}
*/
//ЗАДАНИЕ 2
//Дана диагональ телевизора в дюймах. Написать программу, определяющую эту же диагональ в сантиметрах
//(1 дюйм = 2.54 сантиметров).
/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float inch;
    int a;
    inch = 2.54;

    cout << "Программа для перевода диагонали телевизора" << "\n"
         << "\tИз дюймов в сантиметры" << "\n"
         << "\tВведите диагональ в дюймах" << "\n";
    cin >> a;
    cout << "Телевизор диагональю  " << a << " дюймов равен:= " << a * inch << " сантиметоров" <<endl;
    system("pause");
    return 0;
}
*/
//ЗАДАНИЕ 3
//Емкость аккумулятора смартфона составляет N мАч.
//Написать программу, определяющую минимальную
//емкость переносного зарядного устройства(powerbank),
//если необходимо 3 полных заряда смартфона.
/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    cout << "Программа для перевода  емкости переносного зарядного устройства(powerbank)" << "\n"
        << "\tВведите емкость аккумулятора вашего телефона в мАч" << "\n";
    cin >> N;
    cout << "Емкость вашего телефона составляет  " << N << " мАч " <<endl
        <<"Необходимо взять powerbank емкостью от " << N * 3 << " мАч" << endl;
    system("pause");
    return 0;
}
*/
//ЗАДАНИЕ 4
// За один день хомячок съедает K грамм корма. Написать программу, определяющую закупку корма в килограммах на 30 дней.
/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float N;
    cout << "Программа определяющую закупку корма в килограммах на 30 дней" << "\n"
        << "\tВведите Расход корма за 1 день (г.) – > " << "\n";
    cin >> N;
    cout << "Расход корма за 1 день (г.)  " << N << " грамм " << endl
        << "Необходимо взять корма " << N * 30 << " грамм" << endl;
    system("pause");
    return 0;
}
*/

//Домашнее задание 2
//ЗАДАНИЕ 1
//Вывести на экран один куплет любимого стихотворения
//или песни, с указанием автора или исполнителя.Используйте
//escape - последовательности для форматирования
/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "\t Анна Ахматова" <<endl <<endl
        <<"\t Мне голос был" <<endl <<endl
        << "Мне голос был. Он звал утешно," <<endl
        << "Он говорил: «Иди сюда," << endl
        << "Оставь свой край глухой и грешный," << endl
        << "Оставь Россию навсегда." << endl << endl
        << "Я кровь от рук твоих отмою," << endl
        << "Из сердца выну чёрный стыд," << endl
        << "Я новым именем покрою" << endl
        << "Боль поражений и обид»." << endl << endl
        << "Но равнодушно и спокойно" << endl
        << "Руками я замкнула слух," << endl
        << "Чтоб этой речью недостойной" << endl
        << "Не осквернялся скорбный дух." << endl << endl
        << "1917 г." <<endl;
    system("pause");
    return 0;
}
*/
//ЗАДАНИЕ 2
//Вывести на экран стих «Every hunter wants…» таким образом, чтобы каждый «цвет» начинался с новой строки и
//соответствующим количеством табуляций.
/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "Every" << "\n";
    cout << "\tHunter" << "\n";
    cout << "\t\tWants" << "\n";
    cout << "\t\t\tTo know" << "\n";
    cout << "\t\t\t\t Where" << "\n";
    cout << "\t\t\t\t\tDoes Pheasant" << "\n";
    cout << "\t\t\t\t\t\t\tSit" << "\n\n";
    system("pause");
    return 0;
}
*/
//ЗАДАНИЕ 3
//Напишите объявление о продаже чего - нибудь и выведите его на экран, в том виде как оно должно было бы быть
//напечатано.
/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "\tПродам квартиру" << "\n"
        << "\tРайон октябрьский" << "\n"
        << "\t30 кв. метров" << "\n"
        << "\t2800 тыс. рублей: " << "\n" 
        << "\tТелефон: " << "\n"
        << "\t8|" << "\t8|" << "\t9|" << "\n"
        << "\t9|" << "\t9|" << "\t9|" << "\n"
        << "\t9|" << "\t9|" << "\t9|" << "\n"
        << "\t9|" << "\t9|" << "\t9|" << "\n"
        << "\t7|" << "\t9|" << "\t9|" << "\n"
        << "\t9|" << "\t9|" << "\t9|" << "\n"
        << "\t1|" << "\t9|" << "\t9|" << "\n"
        << "\t1|" << "\t9|" << "\t9|" << "\n"
        << "\t0|" << "\t9|" << "\t9|" << "\n"
        << "\t5|" << "\t9|" << "\t9|" << "\n"
        << "\t9|" << "\t9|" << "\t9|" << "\n";
    system("pause");
    return 0;
}
*/
