#include"addPerson.h"

void addPerson(Addressbooks *p_add) {
	if (p_add->m_Size == MAX)
	{
		cout << "通讯录已满，如要添加，请删除部分联系人" << endl;
		return;
	}
	else 
	{
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		p_add->personArray[p_add->m_Size].m_Name = name;
		
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
				p_add->personArray[p_add->m_Size].m_Sex = sex;
				break;
			}
		}

		string age;
		cout << "请输入年龄：" << endl;
		cin >> age;
		p_add->personArray[p_add->m_Size].m_Age = age;

		string phone;
		cout << "请输入电话号码：" << endl;
		cin >> phone;
		p_add->personArray[p_add->m_Size].m_Phone = phone;

		string addr;
		cout << "请输入地址：" << endl;
		cin >> addr;
		p_add->personArray[p_add->m_Size].m_Addr = addr;

		p_add->m_Size++;
		cout << endl;
		cout << "添加联系人成功!" << endl;
		system("pause");
		system("cls");
	}
}