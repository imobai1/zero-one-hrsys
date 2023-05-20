#pragma once


#ifndef _SAMPLE_DTO_
#define _SAMPLE_DTO_
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * ר����Ϣ�������
 */
class PatentDTO : public oatpp::DTO
{

public:
    PatentDTO() {};
    PatentDTO(String ZLH, String PIMPATENTNAME) :ZLH(ZLH), PIMPATENTNAME(PIMPATENTNAME) {};

	DTO_INIT(PatentDTO, DTO);

    // ר����
    DTO_FIELD(String, ZLH);
    DTO_FIELD_INFO(ZLH) {
        info->description = ZH_WORDS_GETTER("patentInformation.field.ZLH");
    }

    // ר������
    DTO_FIELD(String, PIMPATENTNAME);
    DTO_FIELD_INFO(PIMPATENTNAME) {
        info->description = ZH_WORDS_GETTER("patentInformation.field.PIMPATENTNAME");
    }

    // ר����ȡʱ��
    DTO_FIELD(String, ZLHQSJ);
    DTO_FIELD_INFO(ZLHQSJ) {
        info->description = ZH_WORDS_GETTER("patentInformation.field.ZLHQSJ");
    }

    // ר����׼����
    DTO_FIELD(String, ZLPZGB);
    DTO_FIELD_INFO(ZLPZGB) {
        info->description = ZH_WORDS_GETTER("patentInformation.field.ZLPZGB");
    }

    // ����
    DTO_FIELD(String, ENCLOLURE);
    DTO_FIELD_INFO(ENCLOLURE) {
        info->description = ZH_WORDS_GETTER("patentInformation.field.ENCLOLURE");
    }

    // ר����Ϣ����
    DTO_FIELD(String, PIMPATENTID);
    DTO_FIELD_INFO(PIMPATENTID) {
        info->description = ZH_WORDS_GETTER("patentInformation.field.PIMPATENTID");
    }

    // ��Ա��Ϣ��ʶ
    DTO_FIELD(String, PIMPERSONID);
    DTO_FIELD_INFO(PIMPERSONID) {
        info->description = ZH_WORDS_GETTER("patentInformation.field.PIMPERSONID");
    }
};

/**
 * ��ҳ�������
 */
class PatentPageDTO : public PageDTO<PatentDTO::Wrapper>
{
	DTO_INIT(PatentPageDTO, PageDTO<PatentDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_SAMPLE_DTO_