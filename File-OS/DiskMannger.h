#pragma once
#include "File.h"

class DiskMannger
{
public:

	DiskMannger();//���̹��캯��
	~DiskMannger();//��������������
	void format(); //: ���ļ��洢�����и�ʽ�����������ļ�ϵͳ�Ľṹ��������̿ռ���в��֣��������ϴ�����Ŀ¼�Լ����ڹ����ļ��洢�ռ�ȵ����ݽṹ��
	void mkdir(); //: ���ڴ�����Ŀ¼
	void rmdir(); //: ����ɾ����Ŀ¼
	void ls(); //: ������ʾĿ¼
	void cd(); //: ���ڸ��ĵ�ǰĿ¼
	void create();//: ���ڴ����ļ�
	void open(); //: ���ڴ��ļ�
	void close(); //: ���ڹر��ļ�
	void write(); //: ����д�ļ�
	void read(); //: ���ڶ��ļ�
	void rm(); //: ����ɾ���ļ�
private:
	File *root;
	File temp;
};


