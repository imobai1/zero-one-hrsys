#pragma once
#ifndef _CONTRACT_TYPE_VO_
#define _CONTRACT_TYPE_VO_

#include "../../GlobalInclude.h"
#include "../../dto/contractType/ContractTypeDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * ��ͬ�����ʾJsonVO��������Ӧ���ͻ��˵�Json����
 */
class ContractTypeJsonVO : public JsonVO<ContractTypeDTO::Wrapper> {
	DTO_INIT(ContractTypeJsonVO, JsonVO<ContractTypeDTO::Wrapper>);
};

/**
 * ��ͬ����ҳ��ʾJsonVO��������Ӧ���ͻ��˵�Json����
 */
class ContractTypePageJsonVO : public JsonVO<ContractTypePageDTO::Wrapper> {
	DTO_INIT(ContractTypePageJsonVO, JsonVO<ContractTypePageDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_CONTRACT_TYPE_VO_
