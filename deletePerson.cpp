#include"deletePerson.h"
void deletePerson(Addressbooks *p_delete) {
	if (p_delete->m_Size == 0)
	{
		cout << "���������ϵ�ˣ�Ȼ���ٽ���ɾ��" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "����Ҫɾ������ϵ������:" << endl;
	string delete_Name;
	cin >> delete_Name;
	for (int i = 0; i < p_delete->m_Size; i++)
	{
		if (p_delete->personArray[i].m_Name == delete_Name)
		{
			int m = i;
			for (; m < p_delete->m_Size - 1; m++)
			{
				p_delete->personArray[i] = p_delete->personArray[i + 1];

			}
			p_delete->m_Size--;
			cout << "ɾ���ɹ�" << endl;
			break;
		}
		else if (i == p_delete->m_Size - 1)
		{
			cout << "����ϵ�˲�����ͨѶ¼��\n" << endl;
		}
	}
	system("pause");
	system("cls");
}