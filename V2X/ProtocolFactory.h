#pragma once
#include "Protocol.h"

/*
 *协议栈工厂父类
*/
class ProtocolFactory {
public:
	virtual Protocol* CreateProtocol() = 0;
};