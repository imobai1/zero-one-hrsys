#pragma once
#ifndef _DELETE_ARCHIVES_DTO_
#define _DELETE_ARCHIVES_DTO_

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
* ɾ������
*/
class DeleteArchiveDTO : public oatpp::DTO
{
	DTO_INIT(DeleteArchiveDTO, DTO);

	// ������ţ�
	DTO_FIELD(String, archivesNo);
	DTO_FIELD_INFO(archivesNo) {
		info->description = ZH_WORDS_GETTER("dto.field.archivesNo");
	}
};

/**
* ɾ��������֧������ɾ����
*/
class DeleteArchivesInBatches : public oatpp::DTO
{
	DTO_INIT(DeleteArchivesInBatches, DTO);

	// ����
	DTO_FIELD(List<DeleteArchiveDTO>, pageArchivesNo) = {};
	DTO_FIELD_INFO(pageArchivesNo) {
		info->description = ZH_WORDS_GETTER("dto.field.pageArchivesNo");
	}

};

#include OATPP_CODEGEN_END(DTO)
#endif // !_DELETE_ARCHIVES_DTO_
