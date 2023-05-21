#pragma once
#ifndef _CONTRACT_TYPE_QUERY_
#define _CONTRACT_TYPE_QUERY_

#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * ��ͬ����ҳ��ѯ����
 */
class ContractTypeQuery : public PageQuery
{
	DTO_INIT(ContractTypeQuery, PageQuery);
	// �������
	DTO_FIELD(String, typeName);
	DTO_FIELD_INFO(typeName) {
		info->description = ZH_WORDS_GETTER("contractType.field.typeName");
	}
	// ��ǰҳ��
	DTO_FIELD(UInt32, pageNum);
	DTO_FIELD_INFO(pageNum) {
		info->description = ZH_WORDS_GETTER("contractType.field.pageNum");
	}
	// ÿҳ��ʾ������
	DTO_FIELD(UInt32, pageSize);
	DTO_FIELD_INFO(pageSize) {
		info->description = ZH_WORDS_GETTER("contractType.field.pageSize");
	}
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_CONTRACT_TYPE_QUERY_
