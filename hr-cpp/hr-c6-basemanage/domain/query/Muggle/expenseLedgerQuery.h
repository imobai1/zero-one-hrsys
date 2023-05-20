#pragma once
#ifndef _EL_M_QUERY_
#define _EL_M_QUERY_
#include "../../GlobalInclude.h"
#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class mExpenseLedgerPageQuery : public PageQuery
{
	DTO_INIT(mExpenseLedgerPageQuery, PageQuery);

	DTO_FIELD(String, expenseCategory);//��������������淶������������
	DTO_FIELD_INFO(expenseCategory) {
		info->description = ZH_WORDS_GETTER("expenseledger_mug.field.expenseCategory");
	}
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_M_EL_QUERY_
