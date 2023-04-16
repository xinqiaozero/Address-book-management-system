#include<iostream>
#include<string>
#include"showMenu.h"
#include"addPerson.h"
#include"showPerson.h"
#include"deletePerson.h"
#include"findPerson.h"
#include"modifyPerson.h"
#include"blankBook.h"
#include"struct_ptp.h"
using namespace std;

int main() {
	//菜单调用
	Addressbooks abs ;
	abs.m_Size=0 ;
	int select = 0;
	while (true) {
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://1，添加联系人
			addPerson(&abs);
			break;
		case 2://2，显示联系人
			showPerson(&abs);
			break;
		case 3://3，删除联系人
			deletePerson(&abs);
			break;
		case 4://4，查找联系人
			findPerson(&abs);
			break;
		case 5://5，修改联系人
			modifyPerson(&abs);
			break;
		case 6://6，清空联系人
			blankBook(&abs);
			break;
		case 0://0，退出通讯录
			cout << "再见，欢迎下次使用" << endl;
			//cout << abs.personArray[abs.m_Size].m_Name << endl;
			return 0;
			break;
		default:
			break;
		}
	}
	
	system("pause");
	return 0;
}


