#include "stdafx.h"
#include "ContractService.h"
#include"../../dao/contractType/ContractTypeDAO.h"

ContractTypePageDTO::Wrapper ContractService::listAll(const ContractTypeQuery::Wrapper& query)
{
	// �������ض���
	auto pages = ContractTypePageDTO::createShared();
	pages->pageIndex = query->pageIndex;
	pages->pageSize = query->pageSize;

	// ��ѯ����������
	ContractDAO dao;
	uint64_t count = dao.count(query);
	if (count <= 0)
	{
		return pages;
	}

	// ��ҳ��ѯ����
	pages->total = count;
	pages->calcPages();
	list<ContractDO> result = dao.selectWithPage(query);
	// ��DOת����DTO
	for (ContractDO sub : result)
	{
		auto dto = ContractDTO::createShared();
		ZO_STAR_DOMAIN_DO_TO_DTO(dto, sub, id, Id, name, Name, unit, Unit, state, State, unitTime, UnitTime, contractID, ContractID, contractUnit, ContractUnit, contractCategory, ContractCategory, contractType, ContractType, startDate, StartDate, endDate, EndDate, contractStatus, ContractStatus, remaining, Remaining, trialExpiration, TrialExpiration);
		pages->addData(dto);

	}
	return pages;
}

