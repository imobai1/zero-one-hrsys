#include "stdafx.h"
#include "domain/vo/patentInformation/patentInformationVO.h"
#include "domain/dto/patentInformation/patentInformationDTO.h"
#include "patentController.h"

PatentPageJsonVO::Wrapper PatentController::execQueryPatent(const PatentQuery::Wrapper& query)
{
	// ������Ӧ����
	auto vo = PatentPageJsonVO::createShared();
	// ������ҳ����
	auto pdto = PatentPageDTO::createShared();
	pdto->addData(PatentDTO::createShared(oatpp::data::mapping::type::DTO::String(1), "ר��1����"));
	pdto->addData(PatentDTO::createShared(oatpp::data::mapping::type::DTO::String(2), "ר��2����"));
	//pdto->addData(PatentDTO::createShared(1, "zs"));
	//pdto->addData(PatentDTO::createShared(2, "ls"));
	// ��Ӧ���
	vo->success(pdto);
	return vo;
}