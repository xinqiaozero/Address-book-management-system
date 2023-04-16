#include"deletePerson.h"
void deletePerson(Addressbooks *p_delete) {
	if (p_delete->m_Size == 0)
	{
		cout << "请先添加联系人，然后再进行删改" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "输入要删除的联系人姓名:" << endl;
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
			cout << "删除成功" << endl;
			break;
		}
		else if (i == p_delete->m_Size - 1)
		{
			cout << "该联系人不存在通讯录中\n" << endl;
		}
	}
	system("pause");
	system("cls");
}