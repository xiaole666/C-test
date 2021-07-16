// #include <iostream>
// #include <string>
// using namespace std;

// struct hero 
// {
//     string name;
//     int age;
//     string sex;
// };

// void bubbleSort(hero hero1[], int len)
// {
//     //hero temp; 
//     for (int i = 0; i < len; i++)
//     {
//         for (int j = 0; j < len - i - 1; j++)
//         {
//             if (hero1[j].age > hero1[j + 1].age)
//             {
//                 hero temp = hero1[j];
//                 hero1[j] = hero1[j + 1];
//                 hero1[j + 1] = temp;
//             }
//         }
//     }

// }

// void printhero(hero hero[], int len )
// {
//     for (int i = 0; i < len; i++)
//     {
//         cout << "����: " << hero[i].name << " �Ա�" << hero[i].sex << " ����:" << hero[i].age << endl;
//     }
// }

// int main ()
// {   
//     struct hero hero1[5] = 
//     {
//         {"����", 23, "��"},
//         {"����", 22, "��"},
//         {"�ŷ�", 20, "��"},
//         {"����", 21, "��"},
//         {"����", 19, "Ů"},
//     };
//     int len = sizeof(hero1) / sizeof(hero);
//     cout << "len = " << len << endl;
//     bubbleSort(hero1, len);
    
//     printhero(hero1, len);
    
    
//     system("pause");
//     return 0; 
// }