#pragma once
#ifndef _PAGE_ARCHIVES_QUERY_
#define _PAGE_ARCHIVES_QUERY_

#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)
/**
* 分页查询档案室
*/
class QueryPageArchives : public PageQuery
{
	DTO_INIT(QueryPageArchives, PageQuery);
	// 档案编号，
	DTO_FIELD(String, archivesNo);
	DTO_FIELD_INFO(archivesNo) {
		info->description = ZH_WORDS_GETTER("query.field.archivesNo");
	}

	// 管理单位，
	DTO_FIELD(String, managementUnits);
	DTO_FIELD_INFO(managementUnits) {
		info->description = ZH_WORDS_GETTER("query.field.managementUnits");
	}

	// 档案保管地，
	DTO_FIELD(String, DABGD);
	DTO_FIELD_INFO(DABGD) {
		info->description = ZH_WORDS_GETTER("query.field.DABGD");
	}

	// 档案室，
	DTO_FIELD(String, archivesCenterName);
	DTO_FIELD_INFO(archivesCenterName) {
		info->description = ZH_WORDS_GETTER("query.field.archivesCenterName");
	}

	// 档案状态，
	DTO_FIELD(String, DAZT);
	DTO_FIELD_INFO(DAZT) {
		info->description = ZH_WORDS_GETTER("query.field.DAZT");
	}

	// 员工编号，
	DTO_FIELD(String, YGBH);
	DTO_FIELD_INFO(YGBH) {
		info->description = ZH_WORDS_GETTER("query.field.YGBH");
	}

	// 员工姓名，
	DTO_FIELD(String, PimPersonName);
	DTO_FIELD_INFO(PimPersonName) {
		info->description = ZH_WORDS_GETTER("query.field.PimPersonName");
	}

	// 员工状态，
	DTO_FIELD(String, YGZT);
	DTO_FIELD_INFO(YGZT) {
		info->description = ZH_WORDS_GETTER("query.field.YGZT");
	}

	// 所属单位，
	DTO_FIELD(String, ORMORGName);
	DTO_FIELD_INFO(ORMORGName) {
		info->description = ZH_WORDS_GETTER("query.field.ORMORGName");
	}

	// 档案未转出月数，
	DTO_FIELD(String, monthsFileNotTransferred);
	DTO_FIELD_INFO(monthsFileNotTransferred) {
		info->description = ZH_WORDS_GETTER("query.field.monthsFileNotTransferred");
	}

	// 档案借阅状态
	DTO_FIELD(String, borrowingStatus);
	DTO_FIELD_INFO(borrowingStatus) {
		info->description = ZH_WORDS_GETTER("query.field.borrowingStatus");
	}
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_PAGE_ARCHIVES_QUERY_