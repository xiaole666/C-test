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
// 	cout << "*****1、添加联系人*****" << endl;
// 	cout << "*****2、显示联系人*****" << endl;
// 	cout << "*****3、删除联系人*****" << endl;
// 	cout << "*****4、查找联系人*****" << endl;
// 	cout << "*****5、修改联系人*****" << endl;
// 	cout << "*****6、清空联系人*****" << endl;
// 	cout << "*****0、退出通讯录*****" << endl;
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
//         cout << "联系人已满,不能添加 " << endl; 
//     }

//     else
//     {
//         cout << "请输入姓名: " << endl;
//         cin >> name;
//         con -> per[con->num].name = name;

//         while (true)
//         {        
//             cout << "请输入性别: " << endl;
//             cin >> sex;
//             if(sex == "男" || sex == "女")
//             {
//                 con ->per[con->num].sex = sex;
//                 break;
//             }
//             else
//             {
//                 cout << "输入有误，请重新输入！" << endl; 
//             }
//         }
//         cout << "请输入年龄: " << endl;
//         cin >> age;
//         con -> per[con->num].age = age;

//         cout << "请输入联系电话： " << endl;
//         cin >> phone;
//         con -> per[con->num].phone = phone;

//         cout << "请输入家庭住址： " << endl;
//         cin >> address;
//         con -> per[con->num].address = address;
//         con -> num ++;
//         cout << "添加成功！" << endl;
        
// 		system("pause");
// 		system("cls");
//     }
// }

// void del(contact *con)
// {
//     string name;
//     cout << "请输入要删除的人： " << endl;
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
//             cout << "删除成功" << endl;
//         }
//         else if (i == (con->num -1))
//         {
//             cout << "查无此人" << endl;
//         }
//     }
//     system("pause");
//     system("cls");
// }

// void printcontact (contact *con)
// {
//     if(con -> num == 0)
//     {
//         cout << "联系人为空" << endl;
//     }
//     else
//     {
//         for (int i = 0; i < con -> num; i++)
//         {
//             cout << "姓名: " << con -> per[i].name << '\t';
//             cout << "性别: " << con -> per[i].sex << '\t';
//             cout << "年龄: " << con -> per[i].age << '\t';
//             cout << "电话: " << con -> per[i].phone << '\t'; 
//             cout << "地址: " << con -> per[i].address << endl;
//         }
//     }
    
// 	system("pause");
// 	system("cls");
// }

// void findcontact (contact *con)
// {
//     string name;
//     cout << "请输入需要找的人: " << endl;
//     cin >> name ;
//     for (int i = 0; i < con -> num; i++)
//     {
//         if (con -> per[i].name == name)
//         {
//             cout << "姓名: " << con -> per[i].name << '\t';
//             cout << "性别: " << con -> per[i].sex << '\t';
//             cout << "年龄: " << con -> per[i].age << '\t';
//             cout << "电话: " << con -> per[i].phone << '\t'; 
//             cout << "地址: " << con -> per[i].address << endl;
//         }
//         else
//         {
//             cout << "查无此人" << endl;
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
//             cout << "欢迎下次使用" << endl;
//             system("pause");
//             return 0;
//         default:
//             cout << "输入有误，请重新输入" << endl;
//             break;
//         }
//     }
//     addcontact(&con);
//     printcontact(&con);
//     system("pause");
//     return 0; 
// }