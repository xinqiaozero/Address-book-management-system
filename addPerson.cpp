#include"addPerson.h"

void addPerson(Addressbooks *p_add) {
	if (p_add->m_Size == MAX)
	{
		cout << "ͨѶ¼��������Ҫ��ӣ���ɾ��������ϵ��" << endl;
		return;
	}
	else 
	{
		string name;
		cout << "������������" << endl;
		cin >> name;
		p_add->personArray[p_add->m_Size].m_Name = name;
		
		int sex;
		cout << "�������Ա�" << endl;
		cout << "��----1��Ů----2" << endl;
		while (true) 
		{
			cin >> sex;
			if (sex != 1 && sex != 2)
			{
				cout << "�������ʹ��������롰1����2���Ա�ʾ�Ա�" << endl;
				continue;
			}
			else
			{
				p_add->personArray[p_add->m_Size].m_Sex = sex;
				break;
			}
		}

		string age;
		cout << "���������䣺" << endl;
		cin >> age;
		p_add->personArray[p_add->m_Size].m_Age = age;

		string phone;
		cout << "������绰���룺" << endl;
		cin >> phone;
		p_add->personArray[p_add->m_Size].m_Phone = phone;

		string addr;
		cout << "�������ַ��" << endl;
		cin >> addr;
		p_add->personArray[p_add->m_Size].m_Addr = addr;

		p_add->m_Size++;
		cout << endl;
		cout << "�����ϵ�˳ɹ�!" << endl;
		system("pause");
		system("cls");
	}
}