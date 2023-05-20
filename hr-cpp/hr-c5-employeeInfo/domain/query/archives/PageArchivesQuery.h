#pragma once
#ifndef _PAGE_ARCHIVES_QUERY_
#define _PAGE_ARCHIVES_QUERY_

#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)
/**
* ��ҳ��ѯ������
*/
class QueryPageArchives : public PageQuery
{
	DTO_INIT(QueryPageArchives, PageQuery);
	// ������ţ�
	DTO_FIELD(String, archivesNo);
	DTO_FIELD_INFO(archivesNo) {
		info->description = ZH_WORDS_GETTER("query.field.archivesNo");
	}

	// ����λ��
	DTO_FIELD(String, managementUnits);
	DTO_FIELD_INFO(managementUnits) {
		info->description = ZH_WORDS_GETTER("query.field.managementUnits");
	}

	// �������ܵأ�
	DTO_FIELD(String, DABGD);
	DTO_FIELD_INFO(DABGD) {
		info->description = ZH_WORDS_GETTER("query.field.DABGD");
	}

	// �����ң�
	DTO_FIELD(String, archivesCenterName);
	DTO_FIELD_INFO(archivesCenterName) {
		info->description = ZH_WORDS_GETTER("query.field.archivesCenterName");
	}

	// ����״̬��
	DTO_FIELD(String, DAZT);
	DTO_FIELD_INFO(DAZT) {
		info->description = ZH_WORDS_GETTER("query.field.DAZT");
	}

	// Ա����ţ�
	DTO_FIELD(String, YGBH);
	DTO_FIELD_INFO(YGBH) {
		info->description = ZH_WORDS_GETTER("query.field.YGBH");
	}

	// Ա��������
	DTO_FIELD(String, PimPersonName);
	DTO_FIELD_INFO(PimPersonName) {
		info->description = ZH_WORDS_GETTER("query.field.PimPersonName");
	}

	// Ա��״̬��
	DTO_FIELD(String, YGZT);
	DTO_FIELD_INFO(YGZT) {
		info->description = ZH_WORDS_GETTER("query.field.YGZT");
	}

	// ������λ��
	DTO_FIELD(String, ORMORGName);
	DTO_FIELD_INFO(ORMORGName) {
		info->description = ZH_WORDS_GETTER("query.field.ORMORGName");
	}

	// ����δת��������
	DTO_FIELD(String, monthsFileNotTransferred);
	DTO_FIELD_INFO(monthsFileNotTransferred) {
		info->description = ZH_WORDS_GETTER("query.field.monthsFileNotTransferred");
	}

	// ��������״̬
	DTO_FIELD(String, borrowingStatus);
	DTO_FIELD_INFO(borrowingStatus) {
		info->description = ZH_WORDS_GETTER("query.field.borrowingStatus");
	}
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_PAGE_ARCHIVES_QUERY_