#include<iostream>
using namespace std;
#define MAX 1000
#ifndef MYHEADER_H
#define MYHEADER_H

struct Person {
	string m_Name;
	int m_Sex;
	string m_Age;
	string m_Phone;
	string m_Addr;
};
struct Addressbooks {
	struct Person personArray[MAX];
	int m_Size=0;

};
#endif /* MYHEADER_H */

