#include "stdafx.h"
#include "domain/vo/patentInformation/patentInformationVO.h"
#include "domain/dto/patentInformation/patentInformationDTO.h"
#include "patentController.h"

PatentPageJsonVO::Wrapper PatentController::execQueryPatent(const PatentQuery::Wrapper& query)
{
	// 创建响应对象
	auto vo = PatentPageJsonVO::createShared();
	// 创建分页对象
	auto pdto = PatentPageDTO::createShared();
	pdto->addData(PatentDTO::createShared(oatpp::data::mapping::type::DTO::String(1), "专利1名称"));
	pdto->addData(PatentDTO::createShared(oatpp::data::mapping::type::DTO::String(2), "专利2名称"));
	//pdto->addData(PatentDTO::createShared(1, "zs"));
	//pdto->addData(PatentDTO::createShared(2, "ls"));
	// 响应结果
	vo->success(pdto);
	return vo;
}