#pragma once
#ifndef _EL_M_DTO_
#define _EL_M_DTO_
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class mExpenseLedgerDTO : public oatpp::DTO
{
	DTO_INIT(mExpenseLedgerDTO, DTO);

	DTO_FIELD(String, expenseCategory);//��������������淶������������
	DTO_FIELD_INFO(expenseCategory) {
		info->description = ZH_WORDS_GETTER("expenseledger_mug.field.expenseCategory");
	}
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_M_EL_DTO_
