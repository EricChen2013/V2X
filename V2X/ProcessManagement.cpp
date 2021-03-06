#include "ProcessManagement.h"
#include "Crowd.h"
#include "Sub_processManagement.h"

using namespace std;

void ProcessManagement::startSimulation(list<CommunicationNode> &comNode, Protocol &protocol, Channel &channel, Crowd &crowd)
{
	//分簇，并将所有的簇保存在Clusters中
	list<list<CommunicationNode>> *Clusters;
	Clusters = crowd.getCrowds(comNode);

	cout << "分簇过程"<< endl;
	cout << "簇大小：" << (*Clusters).size() << endl;

	//遍历所有簇
	cout << "遍历簇：" << endl;
	int i = 1;
	list<list<CommunicationNode>>::iterator iter;
	for (iter = (*Clusters).begin(); iter != (*Clusters).end(); iter++) {
		cout << "遍历中：" << endl;
		cout << "簇" << i << ": " << (*iter).begin()->getNodeID() << endl;
		i++;
		//对于每个簇，执行sub_process
		Sub_processManagement sub;
		sub.sub_process(*iter, protocol, channel);
	}
	delete Clusters;
}
