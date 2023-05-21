#pragma once
#ifndef _TITLEQUERY_
#define _TITLEQUERY_

#include "../../GlobalInclude.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * ʾ��ְ��Ŀ¼��ѯ����
 */
class TitleQuery : public PageQuery
{
	DTO_INIT(TitleQuery, PageQuery);

	API_DTO_FIELD_DEFAULT(String, titleName, ZH_WORDS_GETTER("title.field.titleName"));
};

#include OATPP_CODEGEN_END(DTO)
#endif //