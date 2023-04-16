#include"findPerson.h"
void findPerson(Addressbooks* p_find)
{
	if (p_find->m_Size == 0)
	{
		cout << "请先添加联系人，然后再进行删改" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "输入联系人的名字" << endl;
	string find_Name;
	cin >> find_Name;
	while (true) 
	{
		for (int i = 0; i < p_find->m_Size; i++)
		{
			if (find_Name == p_find->personArray[i].m_Name)
			{
				cout << "姓名：" << p_find->personArray[i].m_Name << "\t" << endl;
				cout << "性别：" << (p_find->personArray[i].m_Sex == 1 ? "男" : "女") << "\t" << endl;
				cout << "年纪：" << p_find->personArray[i].m_Age << "\t" << endl;
				cout << "电话号码：" << p_find->personArray[i].m_Phone << "\t" << endl;
				cout << "地址：" << p_find->personArray[i].m_Addr << "\t" << endl;
				cout << "" << endl;
				break;
			}
			if (i == p_find->m_Size - 1)
			{
				cout << "通讯录中尚无该联系人" << endl;
			}
		}
		break;
	}
	system("pause");
	system("cls");
}