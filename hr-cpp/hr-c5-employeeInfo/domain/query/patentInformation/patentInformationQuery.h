#pragma once

#ifndef _SAMPLE_QUERY_
#define _SAMPLE_QUERY_

#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 分页查询专利对象
 */
class PatentQuery : public PageQuery
{
	DTO_INIT(PatentQuery, PageQuery);
    // 定义 DTO 对象

    // 专利号
    DTO_FIELD(String, ZLH);
    DTO_FIELD_INFO(ZLH) {
        info->description = ZH_WORDS_GETTER("patentInformation.field.ZLH");
    }

    // 专利名称
    DTO_FIELD(String, PIMPATENTNAME);
    DTO_FIELD_INFO(PIMPATENTNAME) {
        info->description = ZH_WORDS_GETTER("patentInformation.field.PIMPATENTNAME");
    }

    // 专利获取时间
    DTO_FIELD(String, ZLHQSJ);
    DTO_FIELD_INFO(ZLHQSJ) {
        info->description = ZH_WORDS_GETTER("patentInformation.field.ZLHQSJ");
    }

    // 专利批准国别
    DTO_FIELD(String, ZLPZGB);
    DTO_FIELD_INFO(ZLPZGB) {
        info->description = ZH_WORDS_GETTER("patentInformation.field.ZLPZGB");
    }

    // 附件
    DTO_FIELD(String, ENCLOLURE);
    DTO_FIELD_INFO(ENCLOLURE) {
        info->description = ZH_WORDS_GETTER("patentInformation.field.ENCLOLURE");
    }

    // 专利信息编码
    DTO_FIELD(String, PIMPATENTID);
    DTO_FIELD_INFO(PIMPATENTID) {
        info->description = ZH_WORDS_GETTER("patentInformation.field.PIMPATENTID");
    }

    // 人员信息标识
    DTO_FIELD(String, PIMPERSONID);
    DTO_FIELD_INFO(PIMPERSONID) {
        info->description = ZH_WORDS_GETTER("patentInformation.field.PIMPERSONID");
    }
     
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_SAMPLE_QUERY_