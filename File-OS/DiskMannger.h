#pragma once

#include "Folder.h"

class DiskMannger
{
public:



	bool DiskMkdir(string dirName);//���������ļ���

	bool DiskRmdir(string dirName);//ɾ�������ļ���

	bool DiskCkdir(string dirName);//�������Ƿ�����ļ���

	DiskMannger();//���̹��캯��
	~DiskMannger();//��������������
	void format(); //: ���ļ��洢�����и�ʽ�����������ļ�ϵͳ�Ľṹ��������̿ռ���в��֣��������ϴ�����Ŀ¼�Լ����ڹ����ļ��洢�ռ�ȵ����ݽṹ��
	void Mkdir();

	void Rmdir();
	
	
	void ls(); //: ������ʾĿ¼
	void cd(); //: ���ڸ��ĵ�ǰĿ¼
	void create();//: ���ڴ����ļ�
	void open(); //: ���ڴ��ļ�
	void close(); //: ���ڹر��ļ�
	void write(); //: ����д�ļ�
	void read(); //: ���ڶ��ļ�
	void rm(); //: ����ɾ���ļ�
private:
	Folder *root;
};


