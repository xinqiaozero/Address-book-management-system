#include"showPerson.h"
void showPerson(Addressbooks* p_show)
{
	if (p_show->m_Size == 0)
	{
		cout << "��ǰͨѶ¼��û����ϵ��" << endl;
	}
	else 
	{
		for (int i = 0; i < p_show->m_Size; i++)
		{
			cout << "������" << p_show->personArray[i].m_Name <<"\t" << endl;
			cout << "�Ա�" << (p_show->personArray[i].m_Sex==1?"��" :"Ů" )<< "\t" << endl;
			cout << "��ͣ�" << p_show->personArray[i].m_Age << "\t"<< endl;
			cout << "�绰���룺" << p_show->personArray[i].m_Phone << "\t"<< endl;
			cout << "��ַ��" << p_show->personArray[i].m_Addr<< "\t"<< endl;
			cout << ""<< endl;
		}
	}
	system("pause");
	system("cls");
}