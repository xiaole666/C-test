// #include <iostream>
// #include <string>

// using namespace std;
// #define MAX 1000

// struct people 
// {
//     string name;
//     string sex;
//     int age;
//     int phone;
//     string address;
// };

// struct contact 
// {
//     people per[MAX];
//     int num;
// };

// void showMenu()
// {
// 	cout << "***********************" << endl;
// 	cout << "*****1�������ϵ��*****" << endl;
// 	cout << "*****2����ʾ��ϵ��*****" << endl;
// 	cout << "*****3��ɾ����ϵ��*****" << endl;
// 	cout << "*****4��������ϵ��*****" << endl;
// 	cout << "*****5���޸���ϵ��*****" << endl;
// 	cout << "*****6�������ϵ��*****" << endl;
// 	cout << "*****0���˳�ͨѶ¼*****" << endl;
// 	cout << "***********************" << endl;
// }

// void addcontact (contact *con)
// {
//     string name;
//     string sex;
//     int age ;
//     int phone;
//     string address;

//     if(con -> num > 1000)
//     {
//         cout << "��ϵ������,������� " << endl; 
//     }

//     else
//     {
//         cout << "����������: " << endl;
//         cin >> name;
//         con -> per[con->num].name = name;

//         while (true)
//         {        
//             cout << "�������Ա�: " << endl;
//             cin >> sex;
//             if(sex == "��" || sex == "Ů")
//             {
//                 con ->per[con->num].sex = sex;
//                 break;
//             }
//             else
//             {
//                 cout << "�����������������룡" << endl; 
//             }
//         }
//         cout << "����������: " << endl;
//         cin >> age;
//         con -> per[con->num].age = age;

//         cout << "��������ϵ�绰�� " << endl;
//         cin >> phone;
//         con -> per[con->num].phone = phone;

//         cout << "�������ͥסַ�� " << endl;
//         cin >> address;
//         con -> per[con->num].address = address;
//         con -> num ++;
//         cout << "��ӳɹ���" << endl;
        
// 		system("pause");
// 		system("cls");
//     }
// }

// void del(contact *con)
// {
//     string name;
//     cout << "������Ҫɾ�����ˣ� " << endl;
//     cin >> name;
//     for (int i = 0; i < con -> num; i++)
//     {
//         if (con -> per[i].name == name)
//         {
//             for(int j = i;j < con->num; j++ )
//             {
//                 con->per[j] = con->per[j + 1];
//             }
//             con->num--;
//             cout << "ɾ���ɹ�" << endl;
//         }
//         else if (i == (con->num -1))
//         {
//             cout << "���޴���" << endl;
//         }
//     }
//     system("pause");
//     system("cls");
// }

// void printcontact (contact *con)
// {
//     if(con -> num == 0)
//     {
//         cout << "��ϵ��Ϊ��" << endl;
//     }
//     else
//     {
//         for (int i = 0; i < con -> num; i++)
//         {
//             cout << "����: " << con -> per[i].name << '\t';
//             cout << "�Ա�: " << con -> per[i].sex << '\t';
//             cout << "����: " << con -> per[i].age << '\t';
//             cout << "�绰: " << con -> per[i].phone << '\t'; 
//             cout << "��ַ: " << con -> per[i].address << endl;
//         }
//     }
    
// 	system("pause");
// 	system("cls");
// }

// void findcontact (contact *con)
// {
//     string name;
//     cout << "��������Ҫ�ҵ���: " << endl;
//     cin >> name ;
//     for (int i = 0; i < con -> num; i++)
//     {
//         if (con -> per[i].name == name)
//         {
//             cout << "����: " << con -> per[i].name << '\t';
//             cout << "�Ա�: " << con -> per[i].sex << '\t';
//             cout << "����: " << con -> per[i].age << '\t';
//             cout << "�绰: " << con -> per[i].phone << '\t'; 
//             cout << "��ַ: " << con -> per[i].address << endl;
//         }
//         else
//         {
//             cout << "���޴���" << endl;
//         }
//     }
//     system("pause");
//     system("cls");
// }
// int main ()
// {   
//     contact con;
//     con.num = 0;
//     int select = 0;
//     while(true)
//     {
//         showMenu();
//         cin >> select;
//         switch (select)
//         {
//         case 1:
//             addcontact(&con);
//             break;

//         case 2:
//             printcontact(&con);
//             break;
        
//         case 3:
//             del(&con);
//             break;
        
//         case 4:
//             findcontact(&con);
//             break;

//         case 0:
//             cout << "��ӭ�´�ʹ��" << endl;
//             system("pause");
//             return 0;
//         default:
//             cout << "������������������" << endl;
//             break;
//         }
//     }
//     addcontact(&con);
//     printcontact(&con);
//     system("pause");
//     return 0; 
// }