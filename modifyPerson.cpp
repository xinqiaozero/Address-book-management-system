#include"modifyPerson.h"
void modifyPerson(Addressbooks* p_modify)
{
	if (p_modify->m_Size == 0)
	{
		cout << "请先添加联系人，然后再进行删改" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "输入要修改的联系人姓名" << endl;
	string modify_Name;
	cin >> modify_Name;
	for (int i = 0; i < p_modify->m_Size; i++)
	{
		if (modify_Name==p_modify->personArray[i].m_Name)
		{
			if (p_modify->m_Size == MAX)
			{
				cout << "通讯录已满，如要添加，请删除部分联系人" << endl;
				return;
			}
			else
			{
				string name;
				cout << "请输入姓名：" << endl;
				cin >> name;
				p_modify->personArray[i].m_Name = name;

				int sex;
				cout << "请输入性别：" << endl;
				cout << "男----1，女----2" << endl;
				while (true)
				{
					cin >> sex;
					if (sex != 1 && sex != 2)
					{
						cout << "输入类型错误，请输入“1”或“2”以表示性别" << endl;
						continue;
					}
					else
					{
						p_modify->personArray[i].m_Sex = sex;
						break;
					}
				}

				string age;
				cout << "请输入年龄：" << endl;
				cin >> age;
				p_modify->personArray[i].m_Age = age;

				string phone;
				cout << "请输入电话号码：" << endl;
				cin >> phone;
				p_modify->personArray[i].m_Phone = phone;

				string addr;
				cout << "请输入地址：" << endl;
				cin >> addr;
				p_modify->personArray[i].m_Addr = addr;
			}
			break;
		}
		if (i == p_modify->m_Size - 1)
		{
			cout << "该联系人不存在，请重新开始！" << endl;
		}
		break;
	}
	system("pause");
	system("cls");
}