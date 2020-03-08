#include <iostream>
#include <cstdlib>
#include "TList.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    TList list;
    int k = 1, v = 0, l = 0, p = 0;
    while (k)
    {
        system("cls");
        cout << "1. ������� ������" << endl;
        cout << "2. ���������� ������" << endl;
        cout << "3. ������� ������� ������" << endl;
        cout << "4. �������� ������� � ������" << endl;
        cout << "5. �����" << endl;
        cout << "-->|:";
        cin >> v;
        switch (v)
        {
        case 1:
        {
            system("cls");
            cout << "������� ���������� ��������� � ������\n:";
            cin >> l;
            for (int i = 0; i < l; i++)
            {
                cout << i+1 <<" ������� "<<"-->:";
                cin >> p;
                list.InsLast(p);
            }
            for (int i = 0; i < 100; i++) { cout << "-"; }
            cout << endl;
            for (int i = 0; i < list.GetSize(); i++)
            {
                if (i != l - 1)
                    cout << "[" << list[i] << "]" << " - ";
                else
                    cout << "[" << list[i] << "]";
            }
            cout << endl;
            system("pause");
            break;
        }
        case 2:
        {
            system("cls");
            for (int i = 0; i < 100; i++) { cout << "-"; }
            cout << endl;
            for (int i = 0; i < list.GetSize(); i++)
            {
                if (i != list.GetSize() - 1)
                    cout << "[" << list[i] << "]" << " - ";
                else
                    cout << "[" << list[i] << "]";
            }
            cout << endl;
            system("pause");
            break;
        }
        case 3:
        {
            system("cls");
            cout << "1. ������� ������" << endl;
            cout << "2. ������� ������� � ������" << endl;
            cout << "3. ������� ������������ �������" << endl;
            cout << "4. ������� ������� � �����" << endl;
            cout << "5. �����" << endl;
            cin >> v;
            switch (v)
            {
            case 1:
                list.clear();
                break;
            case 2:
                list.DelFirst();
                for (int i = 0; i < 100; i++) { cout << "-"; }
                cout << endl;
                for (int i = 0; i < list.GetSize(); i++)
                {
                    if (i != l - 1)
                        cout << "[" << list[i] << "]" << " - ";
                    else
                        cout << "[" << list[i] << "]";
                }
                cout << endl;
                system("pause");
                break;
            case 3:
                cout << "������� ������ ���������� �����" << endl;
                cout << "-->:";
                cin >> p;
                list.DelElem(p);
                for (int i = 0; i < 100; i++) { cout << "-"; }
                cout << endl;
                for (int i = 0; i < list.GetSize(); i++)
                {
                    if (i != l - 1)
                        cout << "[" << list[i] << "]" << " - ";
                    else
                        cout << "[" << list[i] << "]";
                }
                cout << endl;
                system("pause");
                break;
            case 4:
                list.DelLast();
                for (int i = 0; i < 100; i++) { cout << "-"; }
                cout << endl;
                for (int i = 0; i < list.GetSize(); i++)
                {
                    if (i != l - 1)
                        cout << "[" << list[i] << "]" << " - ";
                    else
                        cout << "[" << list[i] << "]";
                }
                cout << endl;
                system("pause");
                break;
            case 5:
                break;
            }
            break;
        }
        case 4:
        {
            system("cls");
            cout << "1. �������� � ������" << endl;
            cout << "2. �������� ������� � ������������ �����" << endl;
            cout << "3. �������� � �����" << endl;
            cout << "4. �����" << endl;
            cin >> v;
            switch (v)
            {
            case 1:
            {
                cout << "������� ��� �������" << endl;
                cout << "-->:";
                cin >> p;
                cout << "������ �� ���������:" << endl;
                cout << endl;
                for (int i = 0; i < list.GetSize(); i++)
                {
                    if (i != list.GetSize() - 1)
                        cout << "[" << list[i] << "]" << " - ";
                    else
                        cout << "[" << list[i] << "]";
                }
                list.InsFirst(p);
                cout << endl;
                cout << "������ ����� ���������:" << endl;
                cout << endl;
                for (int i = 0; i < list.GetSize(); i++)
                {
                    if (i != list.GetSize() - 1)
                        cout << "[" << list[i] << "]" << " - ";
                    else
                        cout << "[" << list[i] << "]";
                }
                cout << endl;
                system("pause");
                break;
            }
            case 2:
            {
                cout << "������� ��� �������" << endl;
                cout << "-->:";
                cin >> p;
                cout << "������ ��� �������" << endl;
                cout << "-->:";
                cin >> l;
                cout << "������ �� ���������:" << endl;
                cout << endl;
                for (int i = 0; i < list.GetSize(); i++)
                {
                    if (i != list.GetSize() - 1)
                        cout << "[" << list[i] << "]" << " - ";
                    else
                        cout << "[" << list[i] << "]";
                }
                list.InsElem(p, l);
                cout << endl;
                cout << "������ ����� ���������:" << endl;
                cout << endl;
                for (int i = 0; i < list.GetSize(); i++)
                {
                    if (i != list.GetSize() - 1)
                        cout << "[" << list[i] << "]" << " - ";
                    else
                        cout << "[" << list[i] << "]";
                }
                cout << endl;
                system("pause");
                break;
            }
            case 3:
            {
                cout << "������� ��� �������" << endl;
                cout << "-->:";
                cin >> p;
                cout << "������ �� ���������:" << endl;
                cout << endl;
                for (int i = 0; i < list.GetSize(); i++)
                {
                    if (i != list.GetSize() - 1)
                        cout << "[" << list[i] << "]" << " - ";
                    else
                        cout << "[" << list[i] << "]";
                }
                list.InsLast(p);
                cout << endl;
                cout << "������ ����� ���������:" << endl;
                cout << endl;
                for (int i = 0; i < list.GetSize(); i++)
                {
                    if (i != list.GetSize() - 1)
                        cout << "[" << list[i] << "]" << " - ";
                    else
                        cout << "[" << list[i] << "]";
                }
                cout << endl;
                system("pause");
                break;
            }
            case 4:
                break;
            }
            break;
        }
        case 5:
            return k = 0;
            break;
        }
           

    }
}