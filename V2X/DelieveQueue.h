#pragma once
#ifndef DELIEVEQUEUE_H
#define DELIEVEQUEUE_H


#include <queue>
#include <iostream>
#include "SliceMessage.h"

using namespace std;

/*
 *待送达队列
*/
class DelieveQueue
{
public:
	//构造函数
	DelieveQueue();
	DelieveQueue(queue<SliceMessage> & qsm);
	//析构函数
	~DelieveQueue();

	//判断队列是否满了
	bool isFull();
	//判断队列是否为空
	bool isEmpty();
	//往队列中插入一个元素
	bool insertToDelieveQ(SliceMessage sMsg);
	//从队列中取出一个元素,并从队列中删除该元素
	SliceMessage getMessage();
	//获取待送达队列的队列长度
	int getQueueSize();

private:
	queue<SliceMessage> *DelieveQ;


};

#endif