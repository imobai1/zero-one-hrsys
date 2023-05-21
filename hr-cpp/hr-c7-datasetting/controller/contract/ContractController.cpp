#include "stdafx.h"
#include "ContractController.h"
#include"../../service/contract/ContractService.h"

ContractTypePageJsonVO::Wrapper ContractController::execQueryTest(const ContractTypeQuery::Wrapper& query)
{
	// ����һ��Service
	ContractService service;
	// ��ѯ����
	auto result = service.listAll(query);
	// ��Ӧ���
	auto jvo = ContractTypePageJsonVO::createShared();
	jvo->success(result);
	return jvo;
}