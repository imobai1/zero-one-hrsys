#pragma once
#ifndef _CONTRACTTYPE_IMPORT_DTO_
#define _CONTRACTTYPE_IMPORT_DTO_
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * ������������ĺ�ͬ���ʹ������
 */
class ContractTypeImportDTO : public oatpp::DTO
{
    DTO_INIT(ContractTypeImportDTO, DTO);

    // ��ͬ������
    DTO_FIELD(String, typeName);
    DTO_FIELD_INFO(typeName) {
        info->description = ZH_WORDS_GETTER("contractType.field.typeName");
    }

    // ��ͬ��������
    DTO_FIELD(String, typeDescription);
    DTO_FIELD_INFO(typeDescription) {
        info->description = ZH_WORDS_GETTER("contractType.field.typeDescription");
    }
};

/**
 * ������������ĺ�ͬ�����б������
 */
class ContractTypesImportDTO : public oatpp::DTO
{
    DTO_INIT(ContractTypesImportDTO, DTO);

    // ��ͬ�����б�
    DTO_FIELD(List<Object<ContractTypeImportDTO>>, types);
    DTO_FIELD_INFO(types) {
        info->description = ZH_WORDS_GETTER("contractType.field.types");
    }
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_CONTRACTTYPE_IMPORT_DTO_