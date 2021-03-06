#pragma once
#include "ProtocolFactory.h"
#include "DefaultProtocol.h"

/*
 *生产默认协议栈的工厂
*/
class DefaultProtocolFactory : public ProtocolFactory {
public:
	Protocol* CreateProtocol() { return new DefaultProtocol(); }
};