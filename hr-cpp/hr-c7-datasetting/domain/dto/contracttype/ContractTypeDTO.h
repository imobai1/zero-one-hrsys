#pragma once
#ifndef _CONTRACT_TYPE_DTO_
#define _CONTRACT_TYPE_DTO_
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * ��ͬ��������
 */
class ContractTypeDTO : public oatpp::DTO
{
	DTO_INIT(ContractTypeDTO, DTO);
	// ���ID
	DTO_FIELD(UInt64, typeId);
	DTO_FIELD_INFO(typeId) {
		info->description = ZH_WORDS_GETTER("contractType.field.typeId");
	}
	// �������
	DTO_FIELD(String, typeName);
	DTO_FIELD_INFO(typeName) {
		info->description = ZH_WORDS_GETTER("contractType.field.typeName");
	}
	// �������
	DTO_FIELD(String, typeDescription);
	DTO_FIELD_INFO(typeDescription) {
		info->description = ZH_WORDS_GETTER("contractType.field.typeDescription");
	}
};

/**
 * ��ͬ����ҳ�������
 */
class ContractTypePageDTO : public PageDTO<ContractTypeDTO::Wrapper>
{
	DTO_INIT(ContractTypePageDTO, PageDTO<ContractTypeDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_CONTRACT_TYPE_DTO_
