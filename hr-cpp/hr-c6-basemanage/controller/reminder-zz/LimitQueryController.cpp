#include <stdafx.h>
#include "LimitQueryController.h"


StringJsonVO::Wrapper LimitQueryController::execQueryLimit(const PageQuery::Wrapper& query)
{
	// ����һ��Service
	//SampleService service;
	// ��ѯ����
	//auto result = service.listAll(query);
	auto vo = StringJsonVO::createShared();
	vo->success("success");
	return vo;
}

StringJsonVO::Wrapper LimitQueryController::execExportAll(const PageQuery::Wrapper& query)
{
	auto vo = StringJsonVO::createShared();
	vo->success("success");
	return vo;
}
