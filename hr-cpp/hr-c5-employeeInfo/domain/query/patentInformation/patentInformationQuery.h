#pragma once

#ifndef _SAMPLE_QUERY_
#define _SAMPLE_QUERY_

#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * ��ҳ��ѯר������
 */
class PatentQuery : public PageQuery
{
	DTO_INIT(PatentQuery, PageQuery);
    // ���� DTO ����

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

#include OATPP_CODEGEN_END(DTO)
#endif // !_SAMPLE_QUERY_