#pragma once
#ifndef _ARCHIVEDO_H_
#define _ARCHIVEDO_H_

#include "../DoInclude.h"
/**
 * ��������Ϣʵ��
 */
class archiveDO
{
	// �����
	CC_SYNTHESIZE(int32_t, sortID, sortid);
	// ����������
	CC_SYNTHESIZE(string, archiveName, archivename);
	// ����
	CC_SYNTHESIZE(int32_t, cabinetNum, cabinetnum);
	// ����
	CC_SYNTHESIZE(int32_t, layerNum, layernum);
	// ���
	CC_SYNTHESIZE(int32_t, numID, numid);
public:
	archiveDO() {}
	//�ֱ�Ϊ����ţ����������ƣ����������������
	archiveDO(int sortid,string archivename ,int cabinetnum,int layernum,int numid)
	{
		this->sortID = sortid;
		this->archiveName = archivename;
		this->cabinetNum = cabinetnum;
		this->layerNum = layernum;
		this->numID = numid;
	}
};

#endif