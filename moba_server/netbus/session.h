/*
����ͻ��˽��������tcp
�ӿڣ������ࣩ
1: ��������;
2  ��ȡsession��Ϣ;
3: �ṩ close���������ر�socket;
session�����ǿͻ���ÿһ��TCP���Ӷ����Ӧһ��sesion
��ʵ���ǿͻ��˽���ʱ����Ӧ�ĸ�ÿ���ͻ��˷���һ��session�������sission������������ǰ����ͻ��˵�һ��
*/
#ifndef __SESSION_H
#define __SESSION_H
class session
{
public:
	virtual void close() = 0;//=0��ʾ���麯��
	virtual void send_data(unsigned char* body,int len) = 0;
	virtual const char* get_address(int* client_port) = 0;
	virtual void send_msg(struct cmd_msg* msg) = 0;
};
#endif