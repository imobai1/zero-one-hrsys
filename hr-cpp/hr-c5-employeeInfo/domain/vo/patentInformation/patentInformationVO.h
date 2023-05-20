#pragma once

#ifndef _SAMPLE_VO_
#define _SAMPLE_VO_

#include "../../GlobalInclude.h"
#include "../../dto/patentInformation/patentInformationDTO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * ʾ����ʾJsonVO��������Ӧ���ͻ��˵�Json����
 */
class PatentJsonVO : public JsonVO<PatentDTO::Wrapper> {
	DTO_INIT(PatentJsonVO, JsonVO<PatentDTO::Wrapper>);
};

/**
 * ʾ����ҳ��ʾJsonVO��������Ӧ���ͻ��˵�Json����
 */
class PatentPageJsonVO : public JsonVO<PatentPageDTO::Wrapper> {
	DTO_INIT(PatentPageJsonVO, JsonVO<PatentPageDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_SAMPLE_VO_