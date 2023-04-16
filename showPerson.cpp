#include"showPerson.h"
void showPerson(Addressbooks* p_show)
{
	if (p_show->m_Size == 0)
	{
		cout << "当前通讯录中没有联系人" << endl;
	}
	else 
	{
		for (int i = 0; i < p_show->m_Size; i++)
		{
			cout << "姓名：" << p_show->personArray[i].m_Name <<"\t" << endl;
			cout << "性别：" << (p_show->personArray[i].m_Sex==1?"男" :"女" )<< "\t" << endl;
			cout << "年纪：" << p_show->personArray[i].m_Age << "\t"<< endl;
			cout << "电话号码：" << p_show->personArray[i].m_Phone << "\t"<< endl;
			cout << "地址：" << p_show->personArray[i].m_Addr<< "\t"<< endl;
			cout << ""<< endl;
		}
	}
	system("pause");
	system("cls");
}