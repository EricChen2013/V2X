#include "SliceMessage.h"

SliceMessage::SliceMessage()
{
}

SliceMessage::SliceMessage(long mID, long sID, long rID, int s, bool f, int sequence)
{//初始化操作
	MessageID = mID;
	SourceAddress = sID;
	DestinationAddress = rID;
	Size = s;
	Flag = f;
	Sequence = sequence;
}

SliceMessage::~SliceMessage()
{
}

long SliceMessage::getMessageID()
{
	return MessageID;
}

long SliceMessage::getSourceAddress()
{
	return SourceAddress;
}

long SliceMessage::getDestinationAddress()
{
	return DestinationAddress;
}

int SliceMessage::getSize()
{
	return Size;
}

int SliceMessage::getMessageType()
{
	return MessageType;
}

bool SliceMessage::getFlag()
{
	return Flag;
}

int SliceMessage::getSequence()
{
	return Sequence;
}

bool SliceMessage::getError()
{
	return Error;
}

float SliceMessage::getDelay()
{
	return Delay;
}

void SliceMessage::setSourceAddress(long sourceAddress)
{
	SourceAddress = sourceAddress;
}

void SliceMessage::setDestinationAddress(long destinationAddress)
{
	DestinationAddress = destinationAddress;
}

void SliceMessage::setSize(int size)
{
	Size = size;
}

void SliceMessage::setMessageType(int messageType)
{
	MessageType = messageType;
}


void SliceMessage::setFlag(bool flag)
{
	Flag = flag;
}

void SliceMessage::setSequence(int sequence)
{
	Sequence = sequence;
}

void SliceMessage::setError(bool error)
{
	Error = error;
}

void SliceMessage::setDelay(float delay)
{
	Delay = delay;
}

void SliceMessage::setMessageID(long id)
{
	MessageID = id;
}

void SliceMessage::setTotalSize(int size)
{
	TotalSize = size;
}

int SliceMessage::getTotalSize()
{
	return TotalSize;
}
