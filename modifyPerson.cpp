#include"modifyPerson.h"
void modifyPerson(Addressbooks* p_modify)
{
	if (p_modify->m_Size == 0)
	{
		cout << "���������ϵ�ˣ�Ȼ���ٽ���ɾ��" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "����Ҫ�޸ĵ���ϵ������" << endl;
	string modify_Name;
	cin >> modify_Name;
	for (int i = 0; i < p_modify->m_Size; i++)
	{
		if (modify_Name==p_modify->personArray[i].m_Name)
		{
			if (p_modify->m_Size == MAX)
			{
				cout << "ͨѶ¼��������Ҫ��ӣ���ɾ��������ϵ��" << endl;
				return;
			}
			else
			{
				string name;
				cout << "������������" << endl;
				cin >> name;
				p_modify->personArray[i].m_Name = name;

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
						p_modify->personArray[i].m_Sex = sex;
						break;
					}
				}

				string age;
				cout << "���������䣺" << endl;
				cin >> age;
				p_modify->personArray[i].m_Age = age;

				string phone;
				cout << "������绰���룺" << endl;
				cin >> phone;
				p_modify->personArray[i].m_Phone = phone;

				string addr;
				cout << "�������ַ��" << endl;
				cin >> addr;
				p_modify->personArray[i].m_Addr = addr;
			}
			break;
		}
		if (i == p_modify->m_Size - 1)
		{
			cout << "����ϵ�˲����ڣ������¿�ʼ��" << endl;
		}
		break;
	}
	system("pause");
	system("cls");
}