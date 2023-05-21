#ifndef _ARCHIVEQUERY_
#define _ARCHIVEQUERY_

#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * ʾ�������Ҳ�ѯ����
 */
class ArchiveQuery : public PageQuery
{
	DTO_INIT(ArchiveQuery, PageQuery);
	// ����
	DTO_FIELD(String, ArchiveName);
	DTO_FIELD_INFO(ArchiveName) {
		info->description = ZH_WORDS_GETTER("archive.field.ArchiveName");
	}

};

#include OATPP_CODEGEN_END(DTO)
#endif //

