#pragma once

#ifndef _SAMPLE_VO_
#define _SAMPLE_VO_

#include "../../GlobalInclude.h"
#include "../../dto/patentInformation/patentInformationDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 示例显示JsonVO，用于响应给客户端的Json对象
 */
class PatentJsonVO : public JsonVO<PatentDTO::Wrapper> {
	DTO_INIT(PatentJsonVO, JsonVO<PatentDTO::Wrapper>);
};

/**
 * 示例分页显示JsonVO，用于响应给客户端的Json对象
 */
class PatentPageJsonVO : public JsonVO<PatentPageDTO::Wrapper> {
	DTO_INIT(PatentPageJsonVO, JsonVO<PatentPageDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_SAMPLE_VO_