/*
1:  netbus: �ṩһ��ȫ�ֵĶ���, instance();
2:  start_tcp_server: �ṩ����tcp_server�ӿ�;
3:  start_ws_server: �ṩ����ws server�ӿ�;websocket������
4: run�ӿ��������¼�ѭ��;
*/
#ifndef __NETBUS_H
#define __NETBUS_H
class netbus
{
public:
	static netbus* instance();
public:
	void init();
	void start_tcp_server(int port);
	void start_ws_server(int port);
	void run();
};
#endif