#include "stdafx.h"
#include "ContractController.h"


ContractJsonVO::Wrapper ContractController::execQueryContract(const ContractQuery::Wrapper& query)
{
	// ������Ӧ����
	auto vo = ContractJsonVO::createShared();
	// ��Ӧ���
	//vo->success(1);
	return vo;
}

Uint64JsonVO::Wrapper ContractController::execUpdateContract(const ContractDTO::Wrapper& dto)
{
	// ���巵�����ݶ���
	auto jvo = Uint64JsonVO::createShared();

	// ��Ӧ���
	//jvo->success(1);
	return jvo;
}

Uint64JsonVO::Wrapper ContractController::execUploadContract(const PathDTO::Wrapper& dto)
{
	// ���巵�����ݶ���
	auto jvo = Uint64JsonVO::createShared();


	return jvo;
}

PathJsonVO::Wrapper ContractController::execDownloadContract(const PathDTO::Wrapper& dto)
{
	// ���巵�����ݶ���
	auto jvo = PathJsonVO::createShared();


	return jvo;
}