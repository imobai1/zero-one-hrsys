#pragma once
#ifndef _CONTRACTTYPE_EXPORT_VO_
#define _CONTRACTTYPE_EXPORT_VO_

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * ��ͬ���͵��������ʾ����������Ӧ���ͻ��˵�Json����
 */
class ContractTypeExportVO : public oatpp::DTO {
    DTO_INIT(ContractTypeExportVO, DTO);

    // �����ļ���URL
    DTO_FIELD(String, fileUrl);
    DTO_FIELD_INFO(fileUrl) {
        info->description = ZH_WORDS_GETTER("contractType.field.fileUrl");
    }

    // �����ĺ�ͬ��������
    DTO_FIELD(UInt32, exportedCount);
    DTO_FIELD_INFO(exportedCount) {
        info->description = ZH_WORDS_GETTER("contractType.field.exportedCount");
    }
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_CONTRACTTYPE_EXPORT_VO_
