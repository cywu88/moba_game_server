/*
1:  netbus: �ṩһ��ȫ�ֵĶ���, instance();
2:  start_tcp_server: �ṩ����tcp_server�ӿ�;
3:  start_ws_server: �ṩ����ws server�ӿ�;websocket������
4: run�ӿ��������¼�ѭ��;
*/
#ifndef __NETBUS_H
#define __NETBUS_H
#include "session.h"
class netbus
{
public:
	static netbus* instance();
public:
	void init();
	void tcp_listen(int port,const char* ip);
	void ws_listen(int port,const char* ip);
	void udp_listen(int port,const char* ip);
	void run();
	void tcp_connect(const char* server_ip,int port,void(*connected)(int err,session*s,void* udata),void* udata);
};
#endif