#include"findPerson.h"
void findPerson(Addressbooks* p_find)
{
	if (p_find->m_Size == 0)
	{
		cout << "���������ϵ�ˣ�Ȼ���ٽ���ɾ��" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "������ϵ�˵�����" << endl;
	string find_Name;
	cin >> find_Name;
	while (true) 
	{
		for (int i = 0; i < p_find->m_Size; i++)
		{
			if (find_Name == p_find->personArray[i].m_Name)
			{
				cout << "������" << p_find->personArray[i].m_Name << "\t" << endl;
				cout << "�Ա�" << (p_find->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t" << endl;
				cout << "��ͣ�" << p_find->personArray[i].m_Age << "\t" << endl;
				cout << "�绰���룺" << p_find->personArray[i].m_Phone << "\t" << endl;
				cout << "��ַ��" << p_find->personArray[i].m_Addr << "\t" << endl;
				cout << "" << endl;
				break;
			}
			if (i == p_find->m_Size - 1)
			{
				cout << "ͨѶ¼�����޸���ϵ��" << endl;
			}
		}
		break;
	}
	system("pause");
	system("cls");
}