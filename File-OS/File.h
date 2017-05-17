#pragma once
#include<string>
#include<iostream>
#include<algorithm>
#include<functional>
#include<map>
#include "PCB.H"
using namespace std;

class File:public PCB
{
public:
	//���캯��
	File();

	File::File(string _name, FileType _type);
	//��������
	~File();
	
	//���л�
	void Serialization();
	
	//�����л�
	void Deserialization();

	
	//�ļ�����
	string content;
	
	//��һ���ļ���
	PCB* father;


};





