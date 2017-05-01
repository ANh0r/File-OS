#pragma once
#include<string>
#include<iostream>
#include<set>
using namespace std;

class File
{
public:
	//���캯��
	File();

	//��������
	~File();
	
	//���л�
	void Serialization();
	
	//�����л�
	void Deserialization();

	//�ļ��Ƿ���ͬ
	bool operator<(File &t)const;



private:
	//�ļ���
	string name;
	//�ļ�����
	string content;
	//�ļ�����
	bool type;
	//�ļ��а�����������
	set<File*> child;
	//��һ���ļ���
	File* father;

};





