#include <iostream>

using namespace std;

enum class Month
{
    Январь = 1,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь
};

int main()
{
    int UMonth;
    Month month;

    do {
        cout << "Введите номер месяца: ";
        cin >> UMonth;

        month = static_cast<Month>(UMonth);

        switch (month)
        {
        case Month::Январь:
            cout << "Январь" << endl;
            break;
        case Month::Февраль:
            cout << "Февраль" << endl;
            break;
        case Month::Март:
            cout << "Март" << endl;
            break;
        case Month::Апрель:
            cout << "Апрель" << endl;
            break;
        case Month::Май:
            cout << "Май" << endl;
            break;
        case Month::Июнь:
            cout << "Июнь" << endl;
            break;
        case Month::Июль:
            cout << "Июль" << endl;
            break;
        case Month::Август:
            cout << "Август" << endl;
            break;
        case Month::Сентябрь:
            cout << "Сентябрь" << endl;
            break;
        case Month::Октябрь:
            cout << "Октябрь" << endl;
            break;
        case Month::Ноябрь:
            cout << "Ноябрь" << endl;
            break;
        case Month::Декабрь:
            cout << "Декабрь" << endl;
            break;
        default:
            cout << "Неверный номер месяца" << endl;
        }

    } while (UMonth != 0);
    cout << "До свидания" << endl;

    return 0;
}