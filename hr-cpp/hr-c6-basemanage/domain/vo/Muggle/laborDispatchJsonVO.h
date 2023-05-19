#pragma once
#ifndef _LDJ_M_VO_
#define _LDJ_M_VO_
#include "../../GlobalInclude.h"
#include "domain/vo/JsonVO.h"
#include "domain/dto/muggle/LaborDispatchDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

class LaborDispatchJsonMVO : public JsonVO<LaborDispatchMDTO::Wrapper>
{
	DTO_INIT(LaborDispatchJsonMVO, JsonVO<LaborDispatchMDTO::Wrapper>);
};


#include OATPP_CODEGEN_END(DTO)
#endif // !_LDJ_M_VO_
