#pragma once
#ifndef _ARCHIVEDTO_H_
#define _ARCHIVEDTO_H_
#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)
/**
 * ����һ�����޸ĵ�������Ϣ�Ĵ������
 */
class ArchiveDTO : public oatpp::DTO
{
	DTO_INIT(ArchiveDTO, DTO);
	// �����
	DTO_FIELD(Int32, sortID);
	DTO_FIELD_INFO(sortID) {
		info->description = ZH_WORDS_GETTER("archive.field.sortID");
	}
	// ����������
	DTO_FIELD(String,archiveName);
	DTO_FIELD_INFO(archiveName) {
		info->description = ZH_WORDS_GETTER("archive.field.archiveName");
	}
	// ���
	DTO_FIELD(Int32, cabinetNum);
	DTO_FIELD_INFO(cabinetNum) {
		info->description = ZH_WORDS_GETTER("archive.field.cabinetNum");
	}
	//���
	DTO_FIELD(Int32, layerNum);
	DTO_FIELD_INFO(layerNum) {
		info->description = ZH_WORDS_GETTER("archive.field.layerNum");
	}
	//���
	DTO_FIELD(Int32, numID);
	DTO_FIELD_INFO(numID) {
		info->description = ZH_WORDS_GETTER("archive.field.numID");
	}
};

/**
 * ����һ����������Ϣ��ҳ�������
 */
class ArchivePageDTO : public PageDTO<ArchiveDTO::Wrapper>
{
	DTO_INIT(ArchivePageDTO, PageDTO<ArchiveDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)
#endif // _USERDTO_H_