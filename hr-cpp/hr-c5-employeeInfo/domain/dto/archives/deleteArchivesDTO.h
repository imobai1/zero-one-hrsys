#pragma once
#ifndef _DELETE_ARCHIVES_DTO_
#define _DELETE_ARCHIVES_DTO_

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
* 删除档案
*/
class DeleteArchiveDTO : public oatpp::DTO
{
	DTO_INIT(DeleteArchiveDTO, DTO);

	// 档案编号，
	DTO_FIELD(String, archivesNo);
	DTO_FIELD_INFO(archivesNo) {
		info->description = ZH_WORDS_GETTER("dto.field.archivesNo");
	}
};

/**
* 删除档案（支持批量删除）
*/
class DeleteArchivesInBatches : public oatpp::DTO
{
	DTO_INIT(DeleteArchivesInBatches, DTO);

	// 批量
	DTO_FIELD(List<DeleteArchiveDTO>, pageArchivesNo) = {};
	DTO_FIELD_INFO(pageArchivesNo) {
		info->description = ZH_WORDS_GETTER("dto.field.pageArchivesNo");
	}

};

#include OATPP_CODEGEN_END(DTO)
#endif // !_DELETE_ARCHIVES_DTO_
