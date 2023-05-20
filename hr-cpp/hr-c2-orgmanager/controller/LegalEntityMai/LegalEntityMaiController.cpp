#include "stdafx.h"
#include "LegalEntityMaiController.h"


LegalEntityMaiPageJsonVO::Wrapper LegalEntityMaiController::execQueryLEM(const LegalEntityMaiQuery::Wrapper& legalEntityMaiQuery)
{
	// ����һ��JsonVO����
	auto vo = LegalEntityMaiPageJsonVO::createShared();
	// ����һ����ҳ����
	auto pageDTO = LegalEntityMaiPageDTO::createShared();
	pageDTO->addData(LegalEntityMaiDTO::createShared("1", "zs"));
	pageDTO->addData(LegalEntityMaiDTO::createShared("2", "ls"));
	// ��Ӧ���
	vo->success(pageDTO);
	return vo;
}

Uint64JsonVO::Wrapper LegalEntityMaiController::execUpdateLEM(const LegalEntityMaiDTO::Wrapper& dto)
{
	// ���巵�����ݶ���
	auto jvo = Uint64JsonVO::createShared();
	// ��Ӧ���
	return jvo;
}

Uint64JsonVO::Wrapper LegalEntityMaiController::execAddLEM(const LegalEntityMaiDTO::Wrapper& dto)
{
	// ���巵�����ݶ���
	auto jvo = Uint64JsonVO::createShared();
	// ��Ӧ���
	return jvo;
}

Uint64JsonVO::Wrapper LegalEntityMaiController::execRemoveLEM(const LegalEntityMaiDTO::Wrapper& dto)
{
	// ���巵�����ݶ���
	auto jvo = Uint64JsonVO::createShared();
	// ��Ӧ���
	return jvo;
}

BooleanJsonVO::Wrapper LegalEntityMaiController::execImportLEM(const LegalEntityMaiDTO::Wrapper& dto)
{
	return BooleanJsonVO::createShared();
}

BooleanJsonVO::Wrapper LegalEntityMaiController::execExportLEM(const LegalEntityMaiQuery::Wrapper& legalEntityMaiQuery)
{
	return BooleanJsonVO::createShared();
}
